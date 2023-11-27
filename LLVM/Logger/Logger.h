#ifndef __LOGGER_H__
#define __LOGGER_H__

#include "AST/Expr/ExprAST.h"
#include "AST/Functions/PrototypeAST.h"

std::unique_ptr<ExprAST> LogError(const char *Str);
std::unique_ptr<PrototypeAST> LogErrorP(const char *Str);
llvm::Value *LogErrorV(const char *Str);

#endif
