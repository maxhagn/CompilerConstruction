#ifndef __CALL_EXPR_AST_H__
#define __CALL_EXPR_AST_H__

#include "Config/Config.h"
#include "Logger/Logger.h"
#include "AST/Expr/ExprAST.h"

class CallExprAST : public ExprAST {
  std::string Callee;
  std::vector<std::unique_ptr<ExprAST>> Args;

public:
  CallExprAST(const std::string &Callee, std::vector<std::unique_ptr<ExprAST>> Args) : Callee(Callee), Args(std::move(Args)) {}
  llvm::Value *codegen() override;
};

#endif
