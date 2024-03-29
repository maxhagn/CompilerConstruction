%{

#include "scanner.h"

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
\n              { yylineno++; }

{identifier}	return ID; @{ @ID.name@ = strdup(yytext); @ID.line@ = yylineno; @}
{decimal}	    return NUM; @{ @NUM.value@ = strtoul(yytext, NULL, 10); @}
{hex}	        return NUM; @{if(yytext[0] == '$'){memmove(yytext, yytext+1, strlen(yytext));}; @NUM.value@ = strtoul(yytext, NULL, 16); @}

{whitespace}+	;
{comment} 	    ;
.		        syntaxError();

%%

int yywrap(void) {
	return 1;
}

void yyerror (char const *message) {
    setTerminalColorRed();
    printf("\n%s: ", errorTypeToString(PARSING));
    setTerminalColorDefault();

    printf("use of undefined instruction sequence at line %d.\n", yylineno);
    exit(2);
}

void syntaxError(void) {
    setTerminalColorRed();
    printf("\n%s: ", errorTypeToString(SYNTAX));
    setTerminalColorDefault();

	printf("use of undefined token '%s' at line %d.\n", yytext, yylineno);

    setTerminalColorGreen();
    printf("hint: ");
    setTerminalColorDefault();

    printf("token '%s' is not defined in this language. \n possible tokens are: \n", yytext);
    printf("\tinstructions: end, return, goto, if, var, not, and. \n");
    printf("\tdelimiter: ';', ':', ',', '@'. \n");
    printf("\tbrackets: '(', ')', '{', '}', '[', ']'. \n");
    printf("\toperators: '=', '>', '+', '-', '*' \n");



	exit(1);
}