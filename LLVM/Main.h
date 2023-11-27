#ifndef __MAIN_H__
#define __MAIN_H__

#include "Config/Config.h"
#include "Logger/Logger.h"
#include "Parser/Parser.h"
#include "Lexer/Lexer.h"
#include "Lexer/Token.h"
#include "AST/Expr/BinaryExprAST.h"
#include "AST/Expr/CallExprAST.h"
#include "AST/Expr/ExprAST.h"
#include "AST/Expr/NumberExprAST.h"
#include "AST/Expr/VariableExprAST.h"
#include "AST/Functions/FunctionAST.h"
#include "AST/Functions/PrototypeAST.h"

using namespace std;
using namespace llvm;

static void InitializeModuleAndPassManager();
static void HandleDefinition();
static void HandleTopLevelExpression();
static void MainLoop();
int main();

#endif