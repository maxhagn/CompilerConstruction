#ifndef __NUMBER_EXPR_AST_H__
#define __NUMBER_EXPR_AST_H__

#include "Config/Config.h"
#include "AST/Expr/ExprAST.h"

class NumberExprAST : public ExprAST {
  double Val;

public:
  NumberExprAST(double Val) : Val(Val) {}
  llvm::Value *codegen() override;
};

#endif
