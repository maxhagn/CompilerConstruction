#include "Lexer/Lexer.h"
#include "Lexer/Token.h"

int CurTok;
std::string IdentifierStr;
double NumVal;

int gettok() {
  static int LastChar = ' ';

  while (isspace(LastChar)) {
    LastChar = getchar();
  }

  if (isalpha(LastChar)) {
    IdentifierStr = LastChar;

    while (isalnum(LastChar = getchar())) {
      IdentifierStr += LastChar;
    }

    if (IdentifierStr == "function") {
      return tok_function;
    }
    if (IdentifierStr == "if") {
      return tok_if;
    }
    if (IdentifierStr == "if else") {
      return tok_if_else;
    }
    if (IdentifierStr == "else") {
      return tok_else;
    }
    if (IdentifierStr == "for") {
        return tok_for;
    }
    if (IdentifierStr == "while") {
      return tok_while;
    }
    if (IdentifierStr == "return") {
      return tok_return;
    }

    return tok_identifier;
  }

  // TODO: no multiple points and hex values
  if (isdigit(LastChar) || LastChar == '.') {
    std::string NumStr;

    do {
      NumStr += LastChar;
      LastChar = getchar();
    } while (isdigit(LastChar) || LastChar == '.');

    NumVal = strtod(NumStr.c_str(), 0);
    return tok_number;
  }

  if (LastChar == '#') {
    do {
      LastChar = getchar();
    } while (LastChar != EOF && LastChar != '\n' && LastChar != '\r');

    if (LastChar != EOF) {
      return gettok();
    }
  }

  if (LastChar == EOF) {
    return tok_eof;
  }

  int ThisChar = LastChar;
  LastChar = getchar();
  return ThisChar;
}

int getNextToken() {
  return CurTok = gettok();
}
