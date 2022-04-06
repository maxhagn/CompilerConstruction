%{

#include "parser.h"

%}


%define parse.error verbose
%locations

%union { unsigned long number; char* id; }

%token END RETURN GOTO IF VAR NOT AND
%token SEMICOLON COLON COMMA
%token BRACKET_OPEN BRACKET_CLOSE
%token CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE
%token SQUARED_BRACKET_OPEN SQUARED_BRACKET_CLOSE
%token EQUAL ADD MUL GREATER SUB AT_SIGN

%token <id> ID
%token <number> NUM

%start Program

%%

Program     :
            | Program Def SEMICOLON
            ;

Def         : ID BRACKET_OPEN Pars BRACKET_CLOSE Stats END
	    | ID CURLY_BRACKET_OPEN Pars CURLY_BRACKET_CLOSE BRACKET_OPEN Pars BRACKET_CLOSE Stats END
            ;

Pars        : Par ID
            ;

Par         :
            | Par ID COMMA
            ;

Stats       :
            | Stats Labeldef Stat SEMICOLON
            ;

Labeldef    :
	    | Labeldef ID COLON
	    ;

Stat        : RETURN Expr
	    | GOTO ID
	    | IF Expr GOTO ID
	    | VAR ID EQUAL Expr
	    | Lexpr EQUAL Expr
	    | Term
            ;

Lexpr       : ID
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            ;

Expr        : NotOrSub
            | Term ADD Term AddTerm
            | Term MUL Term MulTerm
            | Term AND Term AndTerm
            | Term GREATER Term
            | Term EQUAL Term
            ;

NotOrSub    : Term
	    | NOT NotOrSub
            | SUB NotOrSub
            ;

AddTerm     :
            | AddTerm ADD Term
            ;

MulTerm     :
            | MulTerm MUL Term
            ;

AndTerm     :
            | AndTerm AND Term
            ;

Term        : BRACKET_OPEN Expr BRACKET_CLOSE
            | NUM
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            | ID
            | ID BRACKET_OPEN RepeatExpr Expr BRACKET_CLOSE
            | ID CURLY_BRACKET_OPEN RepeatExpr Expr CURLY_BRACKET_CLOSE
            | Term AT_SIGN BRACKET_OPEN RepeatExpr Expr BRACKET_CLOSE
            ;

RepeatExpr  :
            | RepeatExpr Expr COMMA
            ;

%%

int main(void)
{
    yyparse();
    return 0;
}