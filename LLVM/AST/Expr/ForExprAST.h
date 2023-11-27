#ifndef __FOR_EXPR_AST_H__
#define __FOR_EXPR_AST_H__

#include "llvm/IR/IRBuilder.h"
#include "Config/Config.h"
#include "ExprAST.h"
#include <string>

using namespace std;
using namespace llvm;

class ForExprAST : public ExprAST {
    std::string VarName;
    std::unique_ptr<ExprAST> Start, End, Step, Body;

public:
    ForExprAST(const std::string &VarName, std::unique_ptr<ExprAST> Start,
               std::unique_ptr<ExprAST> End, std::unique_ptr<ExprAST> Step,
               std::unique_ptr<ExprAST> Body)
        : VarName(VarName), Start(std::move(Start)), End(std::move(End)),
          Step(std::move(Step)), Body(std::move(Body)) {}

    llvm::Value *codegen() override;
};

#endif
