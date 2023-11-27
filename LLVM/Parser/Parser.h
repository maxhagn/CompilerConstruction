#ifndef __PARSER_H__
#define __PARSER_H__

#include "Lexer/Lexer.h"
#include "Lexer/Token.h"
#include "AST/Expr/BinaryExprAST.h"
#include "AST/Expr/CallExprAST.h"
#include "AST/Expr/ExprAST.h"
#include "AST/Expr/NumberExprAST.h"
#include "AST/Expr/VariableExprAST.h"
#include "AST/Expr/IfExprAST.h"
#include "AST/Expr/ForExprAST.h"
#include "AST/Functions/FunctionAST.h"
#include "AST/Functions/PrototypeAST.h"
#include <map>

using namespace std;
using namespace llvm;

extern std::map<char, int> BinopPrecedence;
static std::unique_ptr<ExprAST> ParseForExpr();
static std::unique_ptr <ExprAST> ParseIfExpr();
std::unique_ptr<ExprAST> ParseNumberExpr();
std::unique_ptr<ExprAST> ParseParenExpr();
std::unique_ptr<ExprAST> ParseIdentifierExpr();
std::unique_ptr<ExprAST> ParsePrimary();
std::unique_ptr<ExprAST> ParseBinOpRHS(int ExprPrec, std::unique_ptr<ExprAST> LHS);
std::unique_ptr<ExprAST> ParseExpression();
std::unique_ptr<PrototypeAST> ParsePrototype();
std::unique_ptr<FunctionAST> ParseDefinition();
std::unique_ptr<FunctionAST> ParseTopLevelExpr();
std::unique_ptr<PrototypeAST> ParseExtern();

#endif
