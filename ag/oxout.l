%{

/* output from Ox version 1.10.1 */

/* Ox-generated Attribute Grammar Evaluator lexer specification
   for Lex-compatible lexer generators

   Copyright (C) 1992-1994  Kurt M. Bischoff
   Copyright (C) 2004-2022  Thomas E. Shields

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As an exception to the standard GNU General Public License, you may
   create a larger work that contains the Ox Attribute Grammar Evaluator
   lexer specification skeleton and distribute that work under terms of
   your own choice, so long as that work isn't itself an
   Attribute Grammar Evaluator generator using the skeleton or a
   modified version thereof as an evaluator lexer specification
   skeleton.  */

/* Identify Ox output. */
#define YYYOX 1

#if defined (__cplusplus)
#include <cstdbool>
#else
#include <stdbool.h>
#endif
%}
 #line 1 "scanner.l"
%{

#include "scanner.h"

%}

comment 	    \/\/.*
identifier 	    [_a-zA-Z][_a-zA-Z0-9]*
decimal		    [0-9]+
hex     	    $([0-9a-fA-F])+
whitespace	    [\t\n ]

 #line 55 "oxout.l"

%{
struct yyyT1 {
#line 19 "gram.y"
 char *name; int lineNr;
 #line 61 "oxout.l"

};

struct yyyT2 {
#line 20 "gram.y"
 node_t *pars;
 #line 68 "oxout.l"

};

struct yyyT3 {
#line 21 "gram.y"
 node_t *labels;
 #line 75 "oxout.l"

};

struct yyyT4 {
#line 22 "gram.y"
 node_t *in; node_t* out;
 #line 82 "oxout.l"

};

struct yyyT5 {
#line 23 "gram.y"
 node_t *in; node_t* out;
 #line 89 "oxout.l"

};

struct yyyT6 {
#line 24 "gram.y"
 node_t *ids;
 #line 96 "oxout.l"

};

#if defined (__cplusplus)
#include <cstring>
#include <new>
#endif

union yyyAttrbs {
  struct yyyT1 yyyAttrb1;
  struct yyyT2 yyyAttrb2;
  struct yyyT3 yyyAttrb3;
  struct yyyT4 yyyAttrb4;
  struct yyyT5 yyyAttrb5;
  struct yyyT6 yyyAttrb6;
};

#if defined (__cplusplus)
#include <cstdbool>
#include <cstdlib>
#else
#include <stdbool.h>
#include <stdlib.h>
#endif

typedef unsigned short yyyWAT;
typedef unsigned short yyyRCT;
typedef unsigned short yyyPNT;
typedef unsigned short yyyWST;
 /* funny type; as wide as the widest of yyyWAT, yyyWST, yyyRCT */
typedef unsigned short yyyFT;



struct yyySolvedSAlistCell {yyyWAT attrbNum;
                            struct yyySolvedSAlistCell *next;
                           };
typedef struct yyySolvedSAlistCell yyySSALC;

struct yyySemEl {struct yyyGenNode *node;
                 struct yyySolvedSAlistCell *solvedSAlist;
                };
typedef struct yyySemEl yyySIT;

typedef struct yyyOxAttrbs {
struct yyySemEl *semEl;
} yyyOxAttrbs;

typedef union{struct yyySemEl *stackref; struct yyyGenNode *noderef;} yyyParent;
struct yyyGenNode {yyyParent parent;
                   bool parentIsStack; /* =true =>  `(yyySIT *) parent' is referenced on the Yacc semantic stack  */
                                       /* =false => `(yyyGNT *) parent' is this node's parent node  */
                   int cLlen; /* length of child list */
                   struct yyyGenNode **cL; /* child list */
                   int refCountListLen; /* length of RCL */
                   yyyRCT *refCountList;
                   yyyPNT prodNum;
                   yyyWST whichSym; /* which child of parent? */
                   union yyyAttrbs yyyAttrbs; /* the Ox semantic attributes */
                  };
typedef struct yyyGenNode yyyGNT;
#define yyyinit()
extern void yyyGenLeaf (int, int, long, long, YYSTYPE *);
extern void yyyabort (void);
extern bool yyyYok;
%}
 #line 13 "scanner.l"
%%
 #line 165 "oxout.l"

%{
	yyyinit(); /* initialize the Ox-generated evaluator */
%}
 #line 13 "scanner.l"


"end"		    {if(yyyYok){
 #line 174 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 15 "scanner.l"
return END;}}
"return"	    {if(yyyYok){
 #line 179 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 16 "scanner.l"
return RETURN;}}
"goto"		    {if(yyyYok){
 #line 184 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 17 "scanner.l"
return GOTO;}}
"if"		    {if(yyyYok){
 #line 189 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 18 "scanner.l"
return IF;}}
"var"		    {if(yyyYok){
 #line 194 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 19 "scanner.l"
return VAR;}}
"not"		    {if(yyyYok){
 #line 199 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 20 "scanner.l"
return NOT;}}
"and"		    {if(yyyYok){
 #line 204 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 21 "scanner.l"
return AND;}}

";"		        {if(yyyYok){
 #line 210 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 23 "scanner.l"
return SEMICOLON;}}
"("		        {if(yyyYok){
 #line 215 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 24 "scanner.l"
return BRACKET_OPEN;}}
")"		        {if(yyyYok){
 #line 220 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 25 "scanner.l"
return BRACKET_CLOSE;}}
"{"		        {if(yyyYok){
 #line 225 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 26 "scanner.l"
return CURLY_BRACKET_OPEN;}}
"}"		        {if(yyyYok){
 #line 230 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 27 "scanner.l"
return CURLY_BRACKET_CLOSE;}}
","	    	    {if(yyyYok){
 #line 235 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 28 "scanner.l"
return COMMA;}}
":"	    	    {if(yyyYok){
 #line 240 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 29 "scanner.l"
return COLON;}}
"="	    	    {if(yyyYok){
 #line 245 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 30 "scanner.l"
return EQUAL;}}
"["	    	    {if(yyyYok){
 #line 250 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 31 "scanner.l"
return SQUARED_BRACKET_OPEN;}}
"]"		        {if(yyyYok){
 #line 255 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 32 "scanner.l"
return SQUARED_BRACKET_CLOSE;}}
"+"		        {if(yyyYok){
 #line 260 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 33 "scanner.l"
return ADD;}}
"*"		        {if(yyyYok){
 #line 265 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 34 "scanner.l"
return MUL;}}
">"	            {if(yyyYok){
 #line 270 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 35 "scanner.l"
return GREATER;}}
"-"		        {if(yyyYok){
 #line 275 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 36 "scanner.l"
return SUB;}}
"@"		        {if(yyyYok){
 #line 280 "oxout.l"
yyyGenLeaf(0,0,0,0,&yylval);
 #line 37 "scanner.l"
return AT_SIGN;}}

{identifier}	{if(yyyYok){
 #line 286 "oxout.l"
yyyGenLeaf(2,1,0,2,&yylval);
 #line 39 "scanner.l"
 #line 289 "oxout.l"
yylval.yyyOxAttrbs.semEl->node->yyyAttrbs.yyyAttrb1.name
 #line 39 "scanner.l"
 = strdup(yytext);
 #line 293 "oxout.l"
yylval.yyyOxAttrbs.semEl->node->yyyAttrbs.yyyAttrb1.lineNr
 #line 39 "scanner.l"
 = yylineno;return ID;}}
{decimal}	    {if(yyyYok){
 #line 298 "oxout.l"
yyyGenLeaf(0,0,2,2,&yylval);
 #line 40 "scanner.l"
return NUM;}}
{hex}	        {if(yyyYok){
 #line 303 "oxout.l"
yyyGenLeaf(0,0,2,2,&yylval);
 #line 41 "scanner.l"
return NUM;}}
{whitespace}+	;
{comment} 	    ;
.		        lexicalError();

%%

int yywrap(void) {
	return 1;
}

void yyerror (char const *message)
{
    fprintf(stderr, "Parsing error '%s' at line %d.\n", message, yylineno);
    exit(2);
}

void lexicalError(void) {
	fprintf(stderr, "Syntax error '%s' at line %d.\n", yytext, yylineno);
	exit(1);
}