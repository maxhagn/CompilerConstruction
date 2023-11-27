#ifndef __FUNCTION_EXPR_AST_H__
#define __FUNCTION_EXPR_AST_H__

#include "Logger/Logger.h"
#include "AST/Functions/PrototypeAST.h"
#include <string>

using namespace llvm;

class FunctionAST {
  std::unique_ptr<PrototypeAST> Proto;
  std::unique_ptr<ExprAST> Body;

public:
  FunctionAST(std::unique_ptr<PrototypeAST> Proto, std::unique_ptr<ExprAST> Body) : Proto(std::move(Proto)), Body(std::move(Body)) {}

  llvm::Function *codegen();
};

#endif
