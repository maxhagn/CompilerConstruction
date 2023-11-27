#ifndef __LEXER_H__
#define __LEXER_H__

#include <cstdlib>
#include <string>

using namespace std;

// scans the next token
int gettok();

// returns and consumes next token
int getNextToken();

// CurTok holds the current token
extern int CurTok;

// IdentifierStr holds the variable or function name of the current token
extern std::string IdentifierStr;

// NumVal holds the numeric value of the token is a number
extern double NumVal;

#endif
