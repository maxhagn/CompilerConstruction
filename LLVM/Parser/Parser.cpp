#include "Parser/Parser.h"

std::map<char, int> BinopPrecedence;

static int GetTokPrecedence() {
    if (!isascii(CurTok)) {
        return -1;
    }

    int TokPrec = BinopPrecedence[CurTok];
    if (TokPrec <= 0) return -1;

    return TokPrec;
}

static std::unique_ptr<ExprAST> ParseForExpr() {
    getNextToken();  // eat the for.

    if (CurTok != tok_identifier)
        return LogError("expected identifier after for");

    std::string IdName = IdentifierStr;
    getNextToken();  // eat identifier.

    if (CurTok != '=')
        return LogError("expected '=' after for");
    getNextToken();  // eat '='.


    auto Start = ParseExpression();
    if (!Start)
        return nullptr;
    if (CurTok != ',')
        return LogError("expected ',' after for start value");
    getNextToken();

    auto End = ParseExpression();
    if (!End)
        return nullptr;

    // The step value is optional.
    std::unique_ptr<ExprAST> Step;
    if (CurTok == ',') {
        getNextToken();
        Step = ParseExpression();
        if (!Step)
            return nullptr;
    }

    /*
    if (CurTok != tok_in)
        return LogError("expected 'in' after for");
    getNextToken();  // eat 'in'.
    */

    auto Body = ParseExpression();
    if (!Body)
        return nullptr;

    return std::make_unique<ForExprAST>(IdName, std::move(Start),
                                        std::move(End), std::move(Step),
                                        std::move(Body));
}

static std::unique_ptr <ExprAST> ParseIfExpr() {
    getNextToken();  // eat the if.

    if (CurTok != '(') {
        return LogError("Expected (");
    }

    getNextToken(); // eat the brace.

    auto Cond = ParseExpression();
    if (!Cond)
        return nullptr;

    if (CurTok != ')') {
        return LogError("Expected )");
    }

    getNextToken();  // eat the brace

    auto Then = ParseExpression();
    if (!Then)
        return nullptr;

    if (CurTok != tok_else)
        return LogError("expected else");

    getNextToken();

    auto Else = ParseExpression();
    if (!Else)
        return nullptr;

    return std::make_unique<IfExprAST>(std::move(Cond), std::move(Then), std::move(Else));
}

// This routine expects to be called when the current token is a tok_number
// It takes the current number value and creates a NumberExprAST node
std::unique_ptr <ExprAST> ParseNumberExpr() {
    auto Result = make_unique<NumberExprAST>(NumVal);
    getNextToken();
    return move(Result);
}

// This routine parses expressions in "(" and ")" characters
std::unique_ptr <ExprAST> ParseParenExpr() {
    getNextToken();

    auto V = ParseExpression();
    if (!V) {
        return nullptr;
    }

    if (CurTok != ')') {
        return LogError("Expected )");
    }

    getNextToken();
    return V;
}

// This routine expects to be called when current token is tok_identifier
std::unique_ptr <ExprAST> ParseIdentifierExpr() {
    string IdName = IdentifierStr;

    getNextToken();

    // if no brace, it's not a function call, it's a variable
    if (CurTok != '(') {
        return make_unique<VariableExprAST>(IdName);
    }

    getNextToken(); // consume brace

    // consume the params
    vector <std::unique_ptr<ExprAST>> Args;
    if (CurTok != ')') {
        while (true) {
            if (auto Arg = ParseExpression()) {
                Args.push_back(std::move(Arg));
            } else {
                return nullptr;
            }

            if (CurTok == ')') {
                break;
            }

            if (CurTok != ',') {
                return LogError("Expected ')' or ',' in argument list");
            }

            getNextToken();
        }
    }

    getNextToken(); // consume brace

    return make_unique<CallExprAST>(IdName, move(Args));
}

std::unique_ptr <ExprAST> ParseBinOpRHS(int ExprPrec, unique_ptr <ExprAST> LHS) {
    while (true) {
        int TokPrec = GetTokPrecedence();

        if (TokPrec < ExprPrec) {
            return LHS;
        }

        int BinOp = CurTok;
        getNextToken();

        auto RHS = ParsePrimary();
        if (!RHS) {
            return nullptr;
        }

        int NextPrec = GetTokPrecedence();
        if (TokPrec < NextPrec) {
            RHS = ParseBinOpRHS(TokPrec + 1, move(RHS));
            if (!RHS) {
                return nullptr;
            }
        }

        LHS = make_unique<BinaryExprAST>(BinOp, move(LHS), move(RHS));
    }
}

std::unique_ptr <ExprAST> ParseExpression() {
    auto LHS = ParsePrimary();

    if (!LHS) {
        return nullptr;
    }

    return ParseBinOpRHS(0, move(LHS));
}

std::unique_ptr <PrototypeAST> ParsePrototype() {
    if (CurTok != tok_identifier) {
        return LogErrorP("Expected function name in prototype");
    }

    string FnName = IdentifierStr;
    getNextToken();

    if (CurTok != '(') {
        return LogErrorP("Expected '(' in prototype");
    }

    vector <std::string> ArgNames;
    while (true) {

        if(getNextToken() == tok_identifier) {
            ArgNames.push_back(IdentifierStr);
        } else {
            break;
        }
        if(getNextToken() != ',') {
            break;
        }


    }

    if (CurTok != ')') {
        return LogErrorP("Expected ')' in prototype");
    }

    getNextToken(); // consume brace

    return make_unique<PrototypeAST>(FnName, move(ArgNames));
}

std::unique_ptr <FunctionAST> ParseDefinition() {

    getNextToken(); // consume function

    auto Proto = ParsePrototype();
    if (!Proto) {
        return nullptr;
    }

    if (CurTok != '{') {
        LogErrorV("Expected '{' after prototype ");
        return nullptr;
    }

    getNextToken(); // consume brace

    if (auto E = ParseExpression()) {
        return make_unique<FunctionAST>(std::move(Proto), move(E));
    }

    if (CurTok != '}') {
        LogErrorV("Expected '}' after all function expressions definition ");
        return nullptr;
    }

    getNextToken(); // consume brace


    return nullptr;
}

std::unique_ptr <FunctionAST> ParseTopLevelExpr() {
    if (auto E = ParseExpression()) {
        auto Proto = make_unique<PrototypeAST>("main", vector<std::string>());
        return make_unique<FunctionAST>(std::move(Proto), move(E));
    }

    return nullptr;
}

std::unique_ptr <PrototypeAST> ParseExtern() {
    getNextToken();
    return ParsePrototype();
}

std::unique_ptr <ExprAST> ParsePrimary() {
    switch (CurTok) {
        default:
            return LogError("Unknown token when expecting an expression");
        case tok_identifier:
            return ParseIdentifierExpr();
        case tok_number:
            return ParseNumberExpr();
        case '(':
            return ParseParenExpr();
        case tok_if:
            return ParseIfExpr();
        case tok_for:
            return ParseForExpr();
    }
}