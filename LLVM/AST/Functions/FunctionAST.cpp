#include "AST/Functions/FunctionAST.h"

Function *FunctionAST::codegen() {
    // First, check for an existing function from a previous 'extern' declaration.
    Function *TheFunction = TheModule->getFunction(Proto->getName());

    if (!TheFunction)
        TheFunction = Proto->codegen();

    if (!TheFunction)
        return nullptr;

    if (!TheFunction->empty())
        return (Function*)LogErrorV("Function cannot be redefined.");

    // Create a new basic block to start insertion into.
    BasicBlock *BB = BasicBlock::Create(TheContext, "entry", TheFunction);
    Builder.SetInsertPoint(BB);

    // Record the function arguments in the NamedValues map.
    NamedValues.clear();
    for (auto &Arg : TheFunction->args()) {
        NamedValues[std::string(Arg.getName())] = &Arg;
    }


    if (Value *RetVal = Body->codegen()) {

       /* std::vector<llvm::Type *> args;
        args.push_back(llvm::Type::getInt8PtrTy(TheContext));
        llvm::FunctionType *printfType = llvm::FunctionType::get(Builder.getInt64Ty(), args, true);
        llvm::Constant *printfFunc = Function::Create(printfType, Function::ExternalLinkage, "printf", TheModule.get());

        std::vector<Value *> printArgs;
        llvm::Value *formatStr = Builder.CreateGlobalStringPtr("%d\n");
        printArgs.push_back(formatStr);

        llvm::Constant *i32_val = ConstantInt::get(TheContext, APInt(64, 21321312132321, true));

        printArgs.push_back(i32_val);

        Builder.CreateCall(TheModule->getFunction("printf"), printArgs);

*/

        // Finish off the function.
        Builder.CreateRet(RetVal);



        // Validate the generated code, checking for consistency.
        verifyFunction(*TheFunction);

        return TheFunction;
    }

    // Error reading body, remove function.
    TheFunction->eraseFromParent();
    return nullptr;
}