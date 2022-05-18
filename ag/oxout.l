/* output from Ox version G1.04 */
%{

#include "scanner.h"

%}

comment 	    \/\/.*
identifier 	    [_a-zA-Z][_a-zA-Z0-9]*
decimal		    [0-9]+
hex     	    $([0-9a-fA-F])+
whitespace	    [\t\n ]


%{


struct yyyT1 { long value; }; 
typedef struct yyyT1 *yyyP1; 


struct yyyT2 { char *name; int line; }; 
typedef struct yyyT2 *yyyP2; 


struct yyyT3 { ListNode *pars; }; 
typedef struct yyyT3 *yyyP3; 


struct yyyT4 { ListNode *labels; }; 
typedef struct yyyT4 *yyyP4; 


struct yyyT5 { ListNode *in; ListNode* out; }; 
typedef struct yyyT5 *yyyP5; 


struct yyyT6 { ListNode *ids; }; 
typedef struct yyyT6 *yyyP6; 
                                                      /*custom*/  
typedef unsigned char yyyWAT; 
typedef unsigned char yyyRCT; 
typedef unsigned short yyyPNT; 
typedef unsigned char yyyWST; 

#include <limits.h>
#define yyyR UCHAR_MAX  

 /* funny type; as wide as the widest of yyyWAT,yyyWST,yyyRCT  */ 
typedef unsigned short yyyFT;

                                                      /*stock*/  




struct yyyGenNode {void *parent;  
                   struct yyyGenNode **cL; /* child list */ 
                   yyyRCT *refCountList; 
                   yyyPNT prodNum;                      
                   yyyWST whichSym; /* which child of parent? */ 
                  }; 

typedef struct yyyGenNode yyyGNT; 



struct yyyTB {int isEmpty; 
              int typeNum; 
              int nAttrbs; 
              char *snBufPtr; 
              yyyWAT *startP,*stopP; 
             };  




extern struct yyyTB yyyTermBuffer; 
extern yyyWAT yyyLRCIL[]; 
extern void yyyGenLeaf(); 


%}
%%

"end"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return END;}
"return"	    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return RETURN;}
"goto"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return GOTO;}
"if"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return IF;}
"var"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return VAR;}
"not"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return NOT;}
"and"		    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return AND;}

";"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return SEMICOLON;}
"("		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return BRACKET_OPEN;}
")"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return BRACKET_CLOSE;}
"{"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return CURLY_BRACKET_OPEN;}
"}"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return CURLY_BRACKET_CLOSE;}
","	    	    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return COMMA;}
":"	    	    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return COLON;}
"="	    	    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return EQUAL;}
"["	    	    {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return SQUARED_BRACKET_OPEN;}
"]"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return SQUARED_BRACKET_CLOSE;}
"+"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return ADD;}
"*"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return MUL;}
">"	            {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return GREATER;}
"-"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return SUB;}
"@"		        {yyyGenLeaf(0,0,yyyLRCIL+0,yyyLRCIL+0);return AT_SIGN;}
\n              { yylineno++; }

{identifier}	{yyyGenLeaf(2,2,yyyLRCIL+0,yyyLRCIL+2); (((yyyP2)(yyyTermBuffer.snBufPtr))->name) = strdup(yytext); (((yyyP2)(yyyTermBuffer.snBufPtr))->line) = yylineno; return ID;} 
{decimal}	    {yyyGenLeaf(1,1,yyyLRCIL+2,yyyLRCIL+3); (((yyyP1)(yyyTermBuffer.snBufPtr))->value) = strtoul(yytext, NULL, 10); return NUM;} 
{hex}	        {yyyGenLeaf(1,1,yyyLRCIL+2,yyyLRCIL+3);if(yytext[0] == '$'){memmove(yytext, yytext+1, strlen(yytext));}; (((yyyP1)(yyyTermBuffer.snBufPtr))->value) = strtoul(yytext, NULL, 16); return NUM;} 

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