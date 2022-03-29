%{

#include "scanner.h"
void lexicalError(void);

%}

comment 	    \/\/.*
identifier 	    [_a-zA-Z][_a-zA-Z0-9]*
decimal		    [0-9]+
hex     	    $([0-9a-fA-F])+
whitespace	    [\t\n ]

%%

"end"		    return END;
"return"	    return RETURN;
"goto"		    return GOTO;
"if"		    return IF;
"var"		    return VAR;
"not"		    return NOT;
"and"		    return AND;

";"		        return SEMICOLON;
"("		        return BRACKET_OPEN;
")"		        return BRACKET_CLOSE;
"{"		        return CURLY_BRACKET_OPEN;
"}"		        return CURLY_BRACKET_CLOSE;
","	    	    return COMMA;
":"	    	    return COLON;
"="	    	    return EQUAL;
"["	    	    return SQUARED_BRACKET_OPEN;
"]"		        return SQUARED_BRACKET_CLOSE;
"+"		        return ADD;
"*"		        return MUL;
">"	            return GREATER;
"-"		        return SUB;
"@"		        return AT_SIGN;

{identifier}	return IDENTIFIER;
{decimal}	    return DECIMAL;
{hex}	        return HEX;
{whitespace}+	;
{comment} 	    ;
.		        lexicalError();

%%

int yywrap(void) {
	return 1;
}

void lexicalError(void) {
	fprintf(stderr, "Syntax error '%s' at line %d.\n", yytext, yylineno);
	exit(1);
}