#ifndef __PROTOTYPE_AST_H__
#define __PROTOTYPE_AST_H__

#include "llvm/IR/IRBuilder.h"
#include "Config/Config.h"
#include "AST/Expr/ExprAST.h"

class PrototypeAST {
  std::string Name;
  std::vector<std::string> Args;

public:
  PrototypeAST(const std::string &name, std::vector<std::string> Args) : Name(name), Args(std::move(Args)) {}

  llvm::Function *codegen();
  const std::string &getName() const { return Name; }
};

#endif
