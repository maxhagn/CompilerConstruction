#ifndef __IF_EXPR_AST_H__
#define __IF_EXPR_AST_H__

#include "Config/Config.h"
#include "Logger/Logger.h"
#include "AST/Expr/ExprAST.h"

class IfExprAST : public ExprAST {
    std::unique_ptr<ExprAST> Cond, Then, Else;

public:
    IfExprAST(std::unique_ptr<ExprAST> Cond, std::unique_ptr<ExprAST> Then, std::unique_ptr<ExprAST> Else)
        : Cond(std::move(Cond)), Then(std::move(Then)), Else(std::move(Else)) {}

    llvm::Value *codegen() override;
};

#endif
