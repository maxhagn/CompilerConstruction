%{

/* output from Ox version 1.10.1 */

/* Ox-generated Attribute Grammar Evaluator parser specification
   for Yacc-compatible parser generators

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
   parser specification skeleton and distribute that work under terms of
   your own choice, so long as that work isn't itself an
   Attribute Grammar Evaluator generator using the skeleton or a
   modified version thereof as an evaluator parser specification
   skeleton.  */

/* Identify Ox output. */
#define YYYOX 1

#if defined (lint)
#include <note.h>
#endif

%}
#line 1 "gram.y"
%{

#include "gram.h"

%}

%token END RETURN GOTO IF VAR NOT AND
%token SEMICOLON COLON COMMA
%token BRACKET_OPEN BRACKET_CLOSE
%token CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE
%token SQUARED_BRACKET_OPEN SQUARED_BRACKET_CLOSE
%token EQUAL ADD MUL GREATER SUB AT_SIGN
%token ID NUM

%start
#line 57 "oxout.y"
yyyAugNonterm
#line 15 "gram.y"




#line 64 "oxout.y"
%{
struct yyyT1 {
#line 19 "gram.y"
 char *name; int lineNr;
#line 69 "oxout.y"

};

struct yyyT2 {
#line 20 "gram.y"
 node_t *pars;
#line 76 "oxout.y"

};

struct yyyT3 {
#line 21 "gram.y"
 node_t *labels;
#line 83 "oxout.y"

};

struct yyyT4 {
#line 22 "gram.y"
 node_t *in; node_t* out;
#line 90 "oxout.y"

};

struct yyyT5 {
#line 23 "gram.y"
 node_t *in; node_t* out;
#line 97 "oxout.y"

};

struct yyyT6 {
#line 24 "gram.y"
 node_t *ids;
#line 104 "oxout.y"

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
%}
%{
#define yyyinit()
%}
%{
struct yyyRSitem {yyyGNT *node;
                  yyyWST whichSym;
                  yyyWAT whichAttrb;
                 };

static struct yyyRSitem *yyyRS;
static long yyyRSTop = 0L;
#define yyyRSBottom 1L
static long yyyAfterRS = 1L;

#include <limits.h>
#define yyyR USHRT_MAX
%}

%type <yyyOxAttrbs> yyyAugNonterm

%union {
struct {
struct yyySemEl *semEl;
} yyyOxAttrbs;
}

%{
#include <stdio.h>
#include <stdarg.h>

bool yyyYok = true;
void yyyabort (void);

static void yyyExecuteRRsection (yyyGNT *);
static void yyyDoTraversals (yyyGNT *);
static void yyyGenIntNode (long, int, int, int, yyyOxAttrbs *, ...);
static void yyyReclaimSemStkEls (int, ...);
static void yyyAdjustINRC (long, int, long, long, yyyOxAttrbs *, ...);
static void yyyCheckUnsolvedInstTrav (yyyGNT *, long *, long *);
static void yyyUnsolvedInstSearchTravAux (yyyGNT *);
static void yyyDecorate (bool pruning);
%}

#line 30 "gram.y"
%%

#line 213 "oxout.y"

yyyAugNonterm
	:		Program
		{
		 yyyDecorate(true);
		 yyyExecuteRRsection($<yyyOxAttrbs>1.semEl->node);
		 yyyDoTraversals($<yyyOxAttrbs>1.semEl->node);
		}
	;
#line 32 "gram.y"
Program     :
#line 225 "oxout.y"

{if(yyyYok){
yyyGenIntNode(1,0,0,0,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyAdjustINRC(1,0,0,0,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 33 "gram.y"
            | Program Def SEMICOLON
#line 235 "oxout.y"

{if(yyyYok){
yyyGenIntNode(2,3,0,0,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(2,3,0,0,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 34 "gram.y"
            ;

Def         : ID BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
#line 247 "oxout.y"

{if(yyyYok){
yyyGenIntNode(3,7,0,0,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6,&$<yyyOxAttrbs>7);
yyyAdjustINRC(3,7,0,3,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6,&$<yyyOxAttrbs>7);
yyyDecorate(false);
yyyReclaimSemStkEls(7,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6,&$<yyyOxAttrbs>7);
}}
#line 39 "gram.y"

	    	| ID CURLY_BRACKET_OPEN Pars Par CURLY_BRACKET_CLOSE BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
#line 258 "oxout.y"

{if(yyyYok){
yyyGenIntNode(4,11,0,0,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6,&$<yyyOxAttrbs>7,&$<yyyOxAttrbs>8,&$<yyyOxAttrbs>9,&$<yyyOxAttrbs>10,&$<yyyOxAttrbs>11);
yyyAdjustINRC(4,11,3,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6,&$<yyyOxAttrbs>7,&$<yyyOxAttrbs>8,&$<yyyOxAttrbs>9,&$<yyyOxAttrbs>10,&$<yyyOxAttrbs>11);
yyyDecorate(false);
yyyReclaimSemStkEls(11,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6,&$<yyyOxAttrbs>7,&$<yyyOxAttrbs>8,&$<yyyOxAttrbs>9,&$<yyyOxAttrbs>10,&$<yyyOxAttrbs>11);
}}
#line 43 "gram.y"

            ;

Pars        :
#line 271 "oxout.y"

{if(yyyYok){
yyyGenIntNode(5,0,1,2,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb2.pars
#line 48 "gram.y"
 = newList();
#line 278 "oxout.y"
yyyAdjustINRC(5,0,6,9,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 49 "gram.y"

	    	| Pars ID COMMA
#line 286 "oxout.y"

{if(yyyYok){
yyyGenIntNode(6,3,1,2,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(6,3,9,12,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 53 "gram.y"

            ;

Par         : ID
#line 299 "oxout.y"

{if(yyyYok){
yyyGenIntNode(7,1,1,2,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb2.pars
#line 58 "gram.y"
 = addDev(newList(),
#line 306 "oxout.y"
$<yyyOxAttrbs>$.semEl->node->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 58 "gram.y"
, PARAMETER,
#line 310 "oxout.y"
$<yyyOxAttrbs>$.semEl->node->cL[0]->yyyAttrbs.yyyAttrb1.lineNr
#line 58 "gram.y"
, "Par - ID");
#line 314 "oxout.y"
yyyAdjustINRC(7,1,12,15,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyDecorate(false);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);
}}
#line 59 "gram.y"

            ;

Stats       :
#line 324 "oxout.y"

{if(yyyYok){
yyyGenIntNode(8,0,2,4,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb4.out
#line 64 "gram.y"
 = newList();
#line 331 "oxout.y"
yyyAdjustINRC(8,0,15,18,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 65 "gram.y"

            | Labeldef Stat SEMICOLON Stats
#line 339 "oxout.y"

{if(yyyYok){
yyyGenIntNode(9,4,2,4,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyAdjustINRC(9,4,18,27,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyDecorate(false);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
}}
#line 71 "gram.y"

            ;

Labeldef    :
#line 352 "oxout.y"

{if(yyyYok){
yyyGenIntNode(10,0,1,3,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb3.labels
#line 76 "gram.y"
 = newList();
#line 359 "oxout.y"
yyyAdjustINRC(10,0,27,30,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 77 "gram.y"

	    	| Labeldef ID COLON
#line 367 "oxout.y"

{if(yyyYok){
yyyGenIntNode(11,3,1,3,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(11,3,30,33,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 81 "gram.y"

	    	;

Stat        : RETURN Expr
#line 380 "oxout.y"

{if(yyyYok){
yyyGenIntNode(12,2,2,5,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb5.out
#line 87 "gram.y"
 = newList();
#line 387 "oxout.y"
yyyAdjustINRC(12,2,33,39,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyDecorate(false);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
}}
#line 88 "gram.y"

			| GOTO ID
#line 395 "oxout.y"

{if(yyyYok){
yyyGenIntNode(13,2,2,5,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb5.out
#line 91 "gram.y"
 = newList();
#line 402 "oxout.y"
yyyAdjustINRC(13,2,39,42,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyDecorate(false);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
}}
#line 93 "gram.y"

			| IF Expr GOTO ID
#line 410 "oxout.y"

{if(yyyYok){
yyyGenIntNode(14,4,2,5,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb5.out
#line 97 "gram.y"
 = newList();
#line 417 "oxout.y"
yyyAdjustINRC(14,4,42,48,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyDecorate(false);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
}}
#line 99 "gram.y"

			| VAR ID EQUAL Expr
#line 425 "oxout.y"

{if(yyyYok){
yyyGenIntNode(15,4,2,5,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb5.out
#line 103 "gram.y"
 = addDev(newList(),
#line 432 "oxout.y"
$<yyyOxAttrbs>$.semEl->node->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 103 "gram.y"
, VARIABLE,
#line 436 "oxout.y"
$<yyyOxAttrbs>$.semEl->node->cL[1]->yyyAttrbs.yyyAttrb1.lineNr
#line 103 "gram.y"
, "Stat - VAR ASSIGN");
#line 440 "oxout.y"
yyyAdjustINRC(15,4,48,54,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyDecorate(false);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
}}
#line 104 "gram.y"

			| Lexpr EQUAL Expr
#line 448 "oxout.y"

{if(yyyYok){
yyyGenIntNode(16,3,2,5,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb5.out
#line 109 "gram.y"
 = newList();
#line 455 "oxout.y"
yyyAdjustINRC(16,3,54,63,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 110 "gram.y"

			| Term
#line 463 "oxout.y"

{if(yyyYok){
yyyGenIntNode(17,1,2,5,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
$<yyyOxAttrbs>$.semEl->node->yyyAttrbs.yyyAttrb5.out
#line 114 "gram.y"
 = newList();
#line 470 "oxout.y"
yyyAdjustINRC(17,1,63,69,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyDecorate(false);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);
}}
#line 115 "gram.y"

            ;

Lexpr       : ID
#line 480 "oxout.y"

{if(yyyYok){
yyyGenIntNode(18,1,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(18,1,69,69,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyDecorate(false);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);
}}
#line 121 "gram.y"

            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
#line 491 "oxout.y"

{if(yyyYok){
yyyGenIntNode(19,4,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyAdjustINRC(19,4,69,75,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyDecorate(false);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
}}
#line 123 "gram.y"
            ;

Expr        : NotOrSub
#line 503 "oxout.y"

{if(yyyYok){
yyyGenIntNode(20,1,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(20,1,75,78,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyDecorate(false);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);
}}
#line 126 "gram.y"
            | Term ADD Term AddTerm
#line 513 "oxout.y"

{if(yyyYok){
yyyGenIntNode(21,4,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyAdjustINRC(21,4,78,87,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyDecorate(false);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
}}
#line 127 "gram.y"
            | Term MUL Term MulTerm
#line 523 "oxout.y"

{if(yyyYok){
yyyGenIntNode(22,4,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyAdjustINRC(22,4,87,96,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyDecorate(false);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
}}
#line 128 "gram.y"
            | Term AND Term AndTerm
#line 533 "oxout.y"

{if(yyyYok){
yyyGenIntNode(23,4,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyAdjustINRC(23,4,96,105,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyDecorate(false);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
}}
#line 129 "gram.y"
            | Term GREATER Term
#line 543 "oxout.y"

{if(yyyYok){
yyyGenIntNode(24,3,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(24,3,105,111,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 130 "gram.y"
            | Term EQUAL Term
#line 553 "oxout.y"

{if(yyyYok){
yyyGenIntNode(25,3,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(25,3,111,117,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 131 "gram.y"
            ;

NotOrSub    : Term
#line 565 "oxout.y"

{if(yyyYok){
yyyGenIntNode(26,1,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(26,1,117,120,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyDecorate(false);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);
}}
#line 134 "gram.y"
	    	| NOT NotOrSub
#line 575 "oxout.y"

{if(yyyYok){
yyyGenIntNode(27,2,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyAdjustINRC(27,2,120,123,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyDecorate(false);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
}}
#line 135 "gram.y"
            | SUB NotOrSub
#line 585 "oxout.y"

{if(yyyYok){
yyyGenIntNode(28,2,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyAdjustINRC(28,2,123,126,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
yyyDecorate(false);
yyyReclaimSemStkEls(2,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2);
}}
#line 136 "gram.y"
            ;

AddTerm     :
#line 597 "oxout.y"

{if(yyyYok){
yyyGenIntNode(29,0,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyAdjustINRC(29,0,126,126,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 139 "gram.y"
            | AddTerm ADD Term
#line 607 "oxout.y"

{if(yyyYok){
yyyGenIntNode(30,3,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(30,3,126,132,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 140 "gram.y"
            ;

MulTerm     :
#line 619 "oxout.y"

{if(yyyYok){
yyyGenIntNode(31,0,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyAdjustINRC(31,0,132,132,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 143 "gram.y"
            | MulTerm MUL Term
#line 629 "oxout.y"

{if(yyyYok){
yyyGenIntNode(32,3,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(32,3,132,138,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 144 "gram.y"
            ;

AndTerm     :
#line 641 "oxout.y"

{if(yyyYok){
yyyGenIntNode(33,0,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyAdjustINRC(33,0,138,138,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 147 "gram.y"
            | AndTerm AND Term
#line 651 "oxout.y"

{if(yyyYok){
yyyGenIntNode(34,3,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(34,3,138,144,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 148 "gram.y"
            ;

Term        : BRACKET_OPEN Expr BRACKET_CLOSE
#line 663 "oxout.y"

{if(yyyYok){
yyyGenIntNode(35,3,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(35,3,144,147,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 151 "gram.y"
            | NUM
#line 673 "oxout.y"

{if(yyyYok){
yyyGenIntNode(36,1,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(36,1,147,147,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyDecorate(false);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);
}}
#line 152 "gram.y"
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
#line 683 "oxout.y"

{if(yyyYok){
yyyGenIntNode(37,4,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyAdjustINRC(37,4,147,153,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
yyyDecorate(false);
yyyReclaimSemStkEls(4,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4);
}}
#line 153 "gram.y"
            | ID
#line 693 "oxout.y"

{if(yyyYok){
yyyGenIntNode(38,1,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyAdjustINRC(38,1,153,153,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1);
yyyDecorate(false);
yyyReclaimSemStkEls(1,&$<yyyOxAttrbs>1);
}}
#line 156 "gram.y"

            | ID BRACKET_OPEN RepeatExpr Expr BRACKET_CLOSE
#line 704 "oxout.y"

{if(yyyYok){
yyyGenIntNode(39,5,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyAdjustINRC(39,5,153,159,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyDecorate(false);
yyyReclaimSemStkEls(5,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
}}
#line 158 "gram.y"
            | ID CURLY_BRACKET_OPEN RepeatExpr Expr CURLY_BRACKET_CLOSE
#line 714 "oxout.y"

{if(yyyYok){
yyyGenIntNode(40,5,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyAdjustINRC(40,5,159,165,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
yyyDecorate(false);
yyyReclaimSemStkEls(5,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5);
}}
#line 159 "gram.y"
            | Term AT_SIGN BRACKET_OPEN RepeatExpr Expr BRACKET_CLOSE
#line 724 "oxout.y"

{if(yyyYok){
yyyGenIntNode(41,6,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6);
yyyAdjustINRC(41,6,165,174,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6);
yyyDecorate(false);
yyyReclaimSemStkEls(6,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3,&$<yyyOxAttrbs>4,&$<yyyOxAttrbs>5,&$<yyyOxAttrbs>6);
}}
#line 160 "gram.y"
            ;

RepeatExpr  :
#line 736 "oxout.y"

{if(yyyYok){
yyyGenIntNode(42,0,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyAdjustINRC(42,0,174,174,(yyyOxAttrbs *)&$<yyyOxAttrbs>$);
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 163 "gram.y"
            | RepeatExpr Expr COMMA
#line 746 "oxout.y"

{if(yyyYok){
yyyGenIntNode(43,3,1,6,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyAdjustINRC(43,3,174,180,(yyyOxAttrbs *)&$<yyyOxAttrbs>$,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
yyyDecorate(false);
yyyReclaimSemStkEls(3,&$<yyyOxAttrbs>1,&$<yyyOxAttrbs>2,&$<yyyOxAttrbs>3);
}}
#line 164 "gram.y"
            ;

%%

int main(void)
{
    yyparse();
    return 0;
}
#line 764 "oxout.y"
/* The maximum size of the Ready Set. */
static long yyyRSmaxSize =        0L;
/* The maximum size of the postdecoration-traversal stack; */
/* needed for a depth-first traversal of the parse tree. */
static long yyyTravStackMaxSize = 1000L;

#define yyyLambdaSSAL (yyySSALC *) NULL
static yyySSALC *yyySSALCfreeList = yyyLambdaSSAL;



static yyyFT yyyRCIL[] = {
5,0,3, 9,0,3, yyyR,0,0, yyyR,0,1, yyyR,0,0, yyyR,1,0,
yyyR,1,2, 1,0,1, 3,0,2, yyyR,0,0, yyyR,0,1, yyyR,1,0,
1,0,1, yyyR,1,0, yyyR,1,0, 1,0,1, yyyR,1,0, 3,0,1,
yyyR,1,0, 0,0,1, 2,0,1, yyyR,1,0, 0,0,1, 0,0,1,
2,0,1, 0,0,1, 0,0,1, 2,0,1, 3,0,1, 0,0,1,
2,0,1, 3,0,1, 0,0,1, 2,0,1, 3,0,1, 0,0,1,
2,0,1, 0,0,1, 2,0,1, 0,0,1, 1,0,1, 1,0,1,
0,0,1, 2,0,1, 0,0,1, 2,0,1, 0,0,1, 2,0,1,
1,0,1, 0,0,1, 2,0,1, 2,0,1, 3,0,1, 2,0,1,
3,0,1, 0,0,1, 3,0,1, 4,0,1, 0,0,1, 1,0,1,

};

static short yyyIIIEL[] = {0,
0,1,5,13,25,26,30,32,33,38,
39,43,46,49,54,59,63,65,67,72,
74,79,84,89,93,97,99,102,105,106,
110,111,115,116,120,124,126,131,133,139,
145,152,153,
};

static long yyyIIEL[] = {
0,0,0,0,0,0,0,2,2,3,4,4,
6,6,6,8,8,9,10,10,10,11,12,12,
14,14,15,16,17,19,19,20,22,24,26,27,
29,29,31,32,33,34,36,36,38,38,39,41,
41,43,45,45,46,46,48,50,50,52,52,53,
55,56,56,57,59,60,61,63,64,65,65,66,
66,67,68,69,70,70,71,72,73,74,74,75,
76,77,78,78,79,80,81,82,82,83,84,85,
85,86,87,88,89,89,90,91,91,92,93,94,
95,95,96,97,98,99,99,100,101,102,103,103,
104,105,105,106,106,107,107,108,109,109,110,110,
111,113,114,116,116,117,118,118,119,121,121,122,
123,123,124,125,125,125,126,127,127,128,129,130,
131,
};

static long yyyIEL[] = {
0,0,0,2,4,4,6,6,
6,8,10,10,10,10,12,12,
12,14,16,18,18,20,22,22,
22,26,26,28,28,30,30,32,
32,32,34,36,38,40,40,40,
40,40,40,40,42,42,42,42,
42,44,44,46,48,48,52,52,
52,52,54,54,54,54,54,54,
58,58,58,60,60,66,66,66,
66,72,72,72,72,78,78,78,
78,82,82,82,86,86,86,88,
88,90,90,92,92,92,96,96,
96,96,100,100,100,100,104,104,
104,106,106,106,110,110,110,110,
110,110,114,114,114,114,114,118,
118,118,118,118,124,124,124,124,
124,128,128,128,
};

static yyyFT yyyEntL[] = {
6,0,6,0,6,0,10,0,10,0,10,0,0,0,0,0,
0,0,0,0,0,0,4,0,2,0,0,1,4,0,0,1,
0,0,0,0,0,0,2,0,2,0,4,0,0,1,0,1,
1,0,3,0,1,0,3,0,1,0,1,0,4,0,3,0,
1,0,4,0,3,0,1,0,4,0,3,0,1,0,3,0,
1,0,3,0,1,0,1,0,2,0,2,0,3,0,1,0,
3,0,1,0,3,0,1,0,2,0,3,0,1,0,4,0,
3,0,4,0,3,0,5,0,4,0,1,0,2,0,1,0,

};

/* GCC (and some other compilers) define '__attribute__', but */
/* just in case '__attribute__' isn't defined, make a dummy.  */
#if !(defined (__GNUC__) || defined (__attribute__))
#define __attribute__(p) /* nothing */
#endif

static __attribute__((__noreturn__)) void yyyfatal (const char *fmt, ...)
  {va_list ap;
   va_start (ap, fmt);
   (void) vfprintf (stderr, fmt, ap);
   va_end (ap);
   exit (EXIT_FAILURE);
#if defined (S_SPLINT_S)
   /*@notreached@*/ ;
#elif defined (lint)
   NOTE(NOTREACHED)
#elif defined (__GNUC__)
   __builtin_unreachable ();
#endif
  }



static void yyySignalEnts (yyyGNT *node, long startP, long stopP)
  {yyyGNT *dumNode;

   while (startP < stopP)
     {if (yyyEntL[startP]==0) dumNode = node;
      else dumNode = (node->cL)[yyyEntL[startP]-1];
      if ((--((dumNode->refCountList)[yyyEntL[startP +1]]))==0)
         {if (++yyyRSTop==yyyAfterRS)
             {/* reallocate 'yyyRS' data structure */
#if defined (__cplusplus)
              long oldRSmaxSize = yyyRSmaxSize;
              yyyRSmaxSize += 500L;
              try {
                 struct yyyRSitem *newRS =
                    new struct yyyRSitem [yyyRSmaxSize +1];
                 for (int i = 0; i < oldRSmaxSize; i++)
                    newRS [i] = yyyRS [i];
                 delete[] yyyRS; yyyRS = newRS;
              } catch (std::bad_alloc) {
                 yyyfatal ("error in Ox Ready Set space allocation\n");
              }
#else /* !defined (__cplusplus) */
              yyyRSmaxSize += 500L;
              if ((yyyRS =
                   (struct yyyRSitem *) realloc (yyyRS,
                                                 (size_t) ((size_t) (yyyRSmaxSize +1) * sizeof (struct yyyRSitem)))
                  )==(struct yyyRSitem *) NULL
                 )
                 yyyfatal ("realloc error in Ox Ready Set space allocation\n");
#endif /* !defined (__cplusplus) */
              yyyAfterRS = yyyRSmaxSize +1;
             }
          yyyRS[yyyRSTop].node = dumNode;
          yyyRS[yyyRSTop].whichSym = yyyEntL[startP];
          yyyRS[yyyRSTop].whichAttrb = yyyEntL[startP +1];
         }
      startP += 2;
     }
  }



static void yyyDecorate (bool pruning)
  {



#define yyyDECORfREQ 50



   static unsigned short intNodeCount = yyyDECORfREQ;
   if (--intNodeCount==0)
      intNodeCount = yyyDECORfREQ;
   else
      if (!pruning) return;
   while (yyyRSTop >= yyyRSBottom)
     {
yyyWST whichSym; yyyWAT whichAttrb;
yyyGNT *RSTopNode, *RSNode;
yyyParent RSTopParent;


RSTopParent = (RSTopNode = yyyRS[yyyRSTop].node)->parent;
RSNode = ((whichSym = (yyyRS[yyyRSTop].whichSym))!=0) ? RSTopParent.noderef : RSTopNode;
whichAttrb = yyyRS[yyyRSTop].whichAttrb;
yyyRSTop--;
switch (RSNode->prodNum) {
case 3:  /***Yacc rule 3***/
  switch (whichSym) {
  case 6:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb4.in
#line 38 "gram.y"
 = mergeThreeDev(
#line 946 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb2.pars
#line 38 "gram.y"
,
#line 950 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb2.pars
#line 38 "gram.y"
,
#line 954 "oxout.y"
RSNode->cL[5]->yyyAttrbs.yyyAttrb4.out
#line 38 "gram.y"
, "Def");
#line 958 "oxout.y"
    break;
    }
  break;
  }
break;
case 4:  /***Yacc rule 4***/
  switch (whichSym) {
  case 10:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb4.in
#line 42 "gram.y"
 = mergeThreeDev(
#line 972 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb2.pars
#line 42 "gram.y"
,
#line 976 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb2.pars
#line 42 "gram.y"
,
#line 980 "oxout.y"
RSNode->cL[9]->yyyAttrbs.yyyAttrb4.out
#line 42 "gram.y"
, "Def");
#line 984 "oxout.y"
    break;
    }
  break;
  }
break;
case 5:  /***Yacc rule 5***/
  switch (whichSym) {
  }
break;
case 6:  /***Yacc rule 6***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb2.pars
#line 52 "gram.y"
 = addDev(
#line 1002 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb2.pars
#line 52 "gram.y"
,
#line 1006 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 52 "gram.y"
, PARAMETER,
#line 1010 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb1.lineNr
#line 52 "gram.y"
, "Pars - Pars ID");
#line 1014 "oxout.y"
    break;
    }
  break;
  }
break;
case 7:  /***Yacc rule 7***/
  switch (whichSym) {
  }
break;
case 8:  /***Yacc rule 8***/
  switch (whichSym) {
  }
break;
case 9:  /***Yacc rule 9***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb4.out
#line 69 "gram.y"
 = mergeDev(
#line 1036 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb3.labels
#line 69 "gram.y"
,
#line 1040 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb4.out
#line 69 "gram.y"
, "dunnio");
#line 1044 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb5.in
#line 68 "gram.y"
 =
#line 1054 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb4.in
#line 68 "gram.y"
;
#line 1058 "oxout.y"
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb4.in
#line 70 "gram.y"
 = mergeDev(
#line 1068 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb4.in
#line 70 "gram.y"
,
#line 1072 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb5.out
#line 70 "gram.y"
, "Stats");
#line 1076 "oxout.y"
    break;
    }
  break;
  }
break;
case 10:  /***Yacc rule 10***/
  switch (whichSym) {
  }
break;
case 11:  /***Yacc rule 11***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb3.labels
#line 80 "gram.y"
 = addDev(
#line 1094 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb3.labels
#line 80 "gram.y"
,
#line 1098 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 80 "gram.y"
, LABEL,
#line 1102 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb1.lineNr
#line 80 "gram.y"
, "Labeldef");
#line 1106 "oxout.y"
    break;
    }
  break;
  }
break;
case 12:  /***Yacc rule 12***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 86 "gram.y"
 =
#line 1120 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 86 "gram.y"
;
#line 1124 "oxout.y"
    break;
    }
  break;
  }
break;
case 13:  /***Yacc rule 13***/
  switch (whichSym) {
  }
break;
case 14:  /***Yacc rule 14***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 96 "gram.y"
 =
#line 1142 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 96 "gram.y"
;
#line 1146 "oxout.y"
    break;
    }
  break;
  }
break;
case 15:  /***Yacc rule 15***/
  switch (whichSym) {
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 102 "gram.y"
 =
#line 1160 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 102 "gram.y"
;
#line 1164 "oxout.y"
    break;
    }
  break;
  }
break;
case 16:  /***Yacc rule 16***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 108 "gram.y"
 =
#line 1178 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 108 "gram.y"
;
#line 1182 "oxout.y"
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 107 "gram.y"
 =
#line 1192 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 107 "gram.y"
;
#line 1196 "oxout.y"
    break;
    }
  break;
  }
break;
case 17:  /***Yacc rule 17***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 113 "gram.y"
 =
#line 1210 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 113 "gram.y"
;
#line 1214 "oxout.y"
    break;
    }
  break;
  }
break;
case 18:  /***Yacc rule 18***/
  switch (whichSym) {
  }
break;
case 19:  /***Yacc rule 19***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 20:  /***Yacc rule 20***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 21:  /***Yacc rule 21***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 22:  /***Yacc rule 22***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 23:  /***Yacc rule 23***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 24:  /***Yacc rule 24***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 25:  /***Yacc rule 25***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 26:  /***Yacc rule 26***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 27:  /***Yacc rule 27***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 28:  /***Yacc rule 28***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 29:  /***Yacc rule 29***/
  switch (whichSym) {
  }
break;
case 30:  /***Yacc rule 30***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 31:  /***Yacc rule 31***/
  switch (whichSym) {
  }
break;
case 32:  /***Yacc rule 32***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 33:  /***Yacc rule 33***/
  switch (whichSym) {
  }
break;
case 34:  /***Yacc rule 34***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 35:  /***Yacc rule 35***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 36:  /***Yacc rule 36***/
  switch (whichSym) {
  }
break;
case 37:  /***Yacc rule 37***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 38:  /***Yacc rule 38***/
  switch (whichSym) {
  }
break;
case 39:  /***Yacc rule 39***/
  switch (whichSym) {
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 40:  /***Yacc rule 40***/
  switch (whichSym) {
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 41:  /***Yacc rule 41***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 5:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 42:  /***Yacc rule 42***/
  switch (whichSym) {
  }
break;
case 43:  /***Yacc rule 43***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
} /* switch */

if (whichSym!=0) /* the just-solved instance was inherited. */
   {if (RSTopNode->prodNum!=0)
       {long iDum = yyyIIEL[yyyIIIEL[RSTopNode->prodNum]] + whichAttrb;
        yyySignalEnts (RSTopNode, yyyIEL[iDum],
                                  yyyIEL[iDum +1]
                      );
       }
   }
else     /* the just-solved instance was synthesized. */
   {if (!(RSTopNode->parentIsStack)) /* node has a parent. */
       {long iDum = yyyIIEL[yyyIIIEL[RSTopParent.noderef->prodNum] +
                          RSTopNode->whichSym
                         ] +
                  whichAttrb;
        yyySignalEnts (RSTopParent.noderef,
                       yyyIEL[iDum],
                       yyyIEL[iDum +1]
                      );
       }
    else   /* node is still on the stack--it has no parent yet. */
       {yyySSALC **pL = &(RSTopParent.stackref->solvedSAlist);
        yyySSALC *iDum;
        if (yyySSALCfreeList==yyyLambdaSSAL)
#if defined (__cplusplus)
            try {
               iDum = new yyySSALC;
            } catch (std::bad_alloc) {
               yyyfatal ("error in Ox Stack Solved List space allocation\n");
            }
#else
           {iDum = (yyySSALC *) malloc ((size_t) sizeof (yyySSALC));
            if (iDum==yyyLambdaSSAL)
               yyyfatal ("malloc error in Ox Stack Solved List space allocation\n");
           }
#endif
        else
           {iDum = yyySSALCfreeList;
            yyySSALCfreeList = yyySSALCfreeList->next;
           }
        iDum->next = *pL;
        iDum->attrbNum = (yyyWAT) whichAttrb;
        *pL = iDum;
       }
   }

     }
  }




#define yyyCondStg unsigned char conds;
#define yyyClearConds {travStack[travStkPtr].conds = 0;}
#define yyySetCond(n) {travStack[travStkPtr].conds |= (1<<(n));}
#define yyyCond(n) (((travStack[travStkPtr].conds & (1<<(n)))!=0)?1:0)



struct yyyTravStackItem {yyyGNT *node;
                         bool isReady;
                         yyyCondStg
                        };



static void yyyDoTraversals(yyyGNT *rootNode)
{struct yyyTravStackItem *travStack;
 long travStkPtr,afterTravStack;
 yyyGNT *travNode,**cLptr2;
 bool righttoleft=false; int pass;
 int i;

 if (!yyyYok) return;
 if ((travStack =
                 ((struct yyyTravStackItem *)
                  calloc((size_t)yyyTravStackMaxSize,
                         (size_t)sizeof(struct yyyTravStackItem)
                        )
                 )
     )
     ==
     (struct yyyTravStackItem *) NULL
    )
    yyyfatal("malloc error in Ox Traversal Stack allocation\n");

afterTravStack = yyyTravStackMaxSize;
#define yyyTSBottom 1L


for (int travN=0; travN<2; travN++) {
travStkPtr = 1L;
travStack[travStkPtr].node = rootNode;
travStack[travStkPtr].isReady = false;
yyyClearConds

while(travStkPtr >= yyyTSBottom)
  {travNode = travStack[travStkPtr].node;
   if (travStack[travStkPtr].isReady)
      {pass = 1;
       goto travSwitch;
popTravStack:
       travStkPtr--;
      }
   else
      {pass = 0;
       goto travSwitch;
pushTravStack:
       travStack[travStkPtr].isReady = true;
       if (travNode->prodNum!=0)
          {if (righttoleft)
             {cLptr2 = travNode->cL;
              i = travNode->cLlen;
              while ((i--)>0)
                {if (++travStkPtr == afterTravStack)
                    {/* realloc `travStack' data structure */
                     yyyTravStackMaxSize += 500L;
                     if ((travStack = (struct yyyTravStackItem *)
                          realloc(travStack,
                                  (size_t)((size_t)yyyTravStackMaxSize*sizeof(struct yyyTravStackItem)))
                         ) == (struct yyyTravStackItem *) NULL)
                        yyyfatal("malloc error in Ox Traversal Stack allocation\n");
                     afterTravStack = yyyTravStackMaxSize;
                    }
                 travStack[travStkPtr].node = *cLptr2;
                 travStack[travStkPtr].isReady = false;
                 yyyClearConds
                 cLptr2++;
                }
             } /* right to left */
          else  /* left to right */
             {i = travNode->cLlen;
              cLptr2 = travNode->cL + i;
              while ((i--)>0)
                {cLptr2--;
                 if (++travStkPtr == afterTravStack)
                    {/* realloc `travStack' data structure */
                     yyyTravStackMaxSize += 500L;
                     if ((travStack = (struct yyyTravStackItem *)
                          realloc(travStack,
                                  (size_t)((size_t)yyyTravStackMaxSize*sizeof(struct yyyTravStackItem)))
                         ) == (struct yyyTravStackItem *) NULL)
                        yyyfatal("malloc error in Ox Traversal Stack allocation\n");
                     afterTravStack = yyyTravStackMaxSize;
                    }
                  travStack[travStkPtr].node = *cLptr2;
                  travStack[travStkPtr].isReady = false;
                  yyyClearConds
                }
             } /* left to right */
          }
      } /* else */
   continue;
travSwitch:
				switch(travNode->prodNum)	{
case 1:  /***Yacc rule 1***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 2:  /***Yacc rule 2***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 3:  /***Yacc rule 3***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 4:  /***Yacc rule 4***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 5:  /***Yacc rule 5***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 6:  /***Yacc rule 6***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 7:  /***Yacc rule 7***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 8:  /***Yacc rule 8***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 9:  /***Yacc rule 9***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 10:  /***Yacc rule 10***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 11:  /***Yacc rule 11***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 12:  /***Yacc rule 12***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 13:  /***Yacc rule 13***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
#if (__APPLE__ && __clang__ && defined (__apple_build_version__) && __clang_major__ > 11) || \
    (__linux__ && __GNUC__ > 6)
/* Apple Xcode 10 & 11 gcc (tested):
   warning: declaration does not declare anything
   GNU 4, 5 & 6 gcc (tested):
   error: expected primary-expression before '__attribute__'
 */
__attribute__((fallthrough));
#elif defined (S_SPLINT_S)
/*@fallthrough@*/
#elif defined (lint)
NOTE(FALLTHROUGH)
#endif
				case 1:
if (yyyCond(0) != pass) {
#line 92 "gram.y"
isVisible(
#line 1966 "oxout.y"
travNode->yyyAttrbs.yyyAttrb5.in
#line 92 "gram.y"
,
#line 1970 "oxout.y"
travNode->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 92 "gram.y"
, LABEL,
#line 1974 "oxout.y"
travNode->cL[1]->yyyAttrbs.yyyAttrb1.lineNr
#line 92 "gram.y"
);
#line 1978 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 14:  /***Yacc rule 14***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
#if (__APPLE__ && __clang__ && defined (__apple_build_version__) && __clang_major__ > 11) || \
    (__linux__ && __GNUC__ > 6)
/* Apple Xcode 10 & 11 gcc (tested):
   warning: declaration does not declare anything
   GNU 4, 5 & 6 gcc (tested):
   error: expected primary-expression before '__attribute__'
 */
__attribute__((fallthrough));
#elif defined (S_SPLINT_S)
/*@fallthrough@*/
#elif defined (lint)
NOTE(FALLTHROUGH)
#endif
				case 1:
if (yyyCond(0) != pass) {
#line 98 "gram.y"
isVisible(
#line 2015 "oxout.y"
travNode->yyyAttrbs.yyyAttrb5.in
#line 98 "gram.y"
,
#line 2019 "oxout.y"
travNode->cL[3]->yyyAttrbs.yyyAttrb1.name
#line 98 "gram.y"
, LABEL,
#line 2023 "oxout.y"
travNode->cL[3]->yyyAttrbs.yyyAttrb1.lineNr
#line 98 "gram.y"
);
#line 2027 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 15:  /***Yacc rule 15***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 16:  /***Yacc rule 16***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 17:  /***Yacc rule 17***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 18:  /***Yacc rule 18***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
#if (__APPLE__ && __clang__ && defined (__apple_build_version__) && __clang_major__ > 11) || \
    (__linux__ && __GNUC__ > 6)
/* Apple Xcode 10 & 11 gcc (tested):
   warning: declaration does not declare anything
   GNU 4, 5 & 6 gcc (tested):
   error: expected primary-expression before '__attribute__'
 */
__attribute__((fallthrough));
#elif defined (S_SPLINT_S)
/*@fallthrough@*/
#elif defined (lint)
NOTE(FALLTHROUGH)
#endif
				case 1:
if (yyyCond(0) != pass) {
#line 120 "gram.y"
isVisible(
#line 2115 "oxout.y"
travNode->yyyAttrbs.yyyAttrb6.ids
#line 120 "gram.y"
,
#line 2119 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 120 "gram.y"
, VARIABLE,
#line 2123 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb1.lineNr
#line 120 "gram.y"
);
#line 2127 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 19:  /***Yacc rule 19***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 20:  /***Yacc rule 20***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 21:  /***Yacc rule 21***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 22:  /***Yacc rule 22***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 23:  /***Yacc rule 23***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 24:  /***Yacc rule 24***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 25:  /***Yacc rule 25***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 26:  /***Yacc rule 26***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 27:  /***Yacc rule 27***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 28:  /***Yacc rule 28***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 29:  /***Yacc rule 29***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 30:  /***Yacc rule 30***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 31:  /***Yacc rule 31***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 32:  /***Yacc rule 32***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 33:  /***Yacc rule 33***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 34:  /***Yacc rule 34***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 35:  /***Yacc rule 35***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 36:  /***Yacc rule 36***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 37:  /***Yacc rule 37***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 38:  /***Yacc rule 38***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
#if (__APPLE__ && __clang__ && defined (__apple_build_version__) && __clang_major__ > 11) || \
    (__linux__ && __GNUC__ > 6)
/* Apple Xcode 10 & 11 gcc (tested):
   warning: declaration does not declare anything
   GNU 4, 5 & 6 gcc (tested):
   error: expected primary-expression before '__attribute__'
 */
__attribute__((fallthrough));
#elif defined (S_SPLINT_S)
/*@fallthrough@*/
#elif defined (lint)
NOTE(FALLTHROUGH)
#endif
				case 1:
if (yyyCond(0) != pass) {
#line 155 "gram.y"
isVisible(
#line 2487 "oxout.y"
travNode->yyyAttrbs.yyyAttrb6.ids
#line 155 "gram.y"
,
#line 2491 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 155 "gram.y"
, VARIABLE,
#line 2495 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb1.lineNr
#line 155 "gram.y"
);
#line 2499 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 39:  /***Yacc rule 39***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 40:  /***Yacc rule 40***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 41:  /***Yacc rule 41***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 42:  /***Yacc rule 42***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 43:  /***Yacc rule 43***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
								} /* switch */
   if (pass!=0) goto popTravStack; else goto pushTravStack;
  } /* while */
 } /* for */
} /* yyyDoTraversals */

static void yyyExecuteRRsection (yyyGNT *rootNode)
  {
   long cycleSum = 0;
   long nNZrc = 0;

   if (!yyyYok) return;
   yyyCheckUnsolvedInstTrav (rootNode, &nNZrc, &cycleSum);
   if (nNZrc>0)
      {
       (void) fputs ("\n\n\n**********\n", stderr);
       (void) fputs ("cycle detected in completed parse tree", stderr);
       (void) fputs (" after decoration.\n", stderr);
#if CYCLE_VERBOSE
       (void) fprintf (stderr, "number of unsolved attribute instances == %ld.\n",
                               nNZrc
                      );
       (void) fprintf (stderr, "total number of remaining dependencies == %ld.\n",
                               cycleSum
                      );
       (void) fputs ("average number of remaining dependencies\n", stderr);
       (void) fprintf (stderr, "  per unsolved instance == %f.\n",
                               ((float) (cycleSum) / (float) (nNZrc))
                      );
#endif
       (void) fprintf (stderr, "searching parse tree for %ld unsolved instances:\n",
                               nNZrc
                      );
       yyyUnsolvedInstSearchTravAux (rootNode);
      }
  } /* yyyExecuteRRsection */



static yyyWAT yyyLRCIL[2] = {0,1,
};



static void yyyGenIntNode (long ProdNum, int RHSlength, int Nattrbs,
#if defined (S_SPLINT_S)
                           /*@unused@*/
#endif
                           __attribute__((unused))
                           int typeNum, yyyOxAttrbs *val_OxAttrbs, ...)
  {
#if defined (lint)
   NOTE(ARGUNUSED(typeNum))
#endif
   yyySIT **LHSsemEl = &val_OxAttrbs->semEl;

#if defined (__cplusplus)
   try {
      (*LHSsemEl) = new yyySIT;
   } catch (std::bad_alloc) {
      yyyfatal ("error in Ox/Yacc semantic stack space allocation\n");
   }
   try {
      (*LHSsemEl)->node = new yyyGNT;
   } catch (std::bad_alloc) {
      yyyfatal ("error in Ox Semantic Node space allocation\n");
   }
#else /* !defined (__cplusplus) */
   (*LHSsemEl) = (yyySIT *) malloc ((size_t) sizeof (yyySIT));
   if (*LHSsemEl==(yyySIT *) NULL)
      yyyfatal ("malloc error in Ox/Yacc semantic stack space allocation\n");
   (*LHSsemEl)->node = (yyyGNT *) malloc ((size_t) sizeof (yyyGNT));
   if ((*LHSsemEl)->node==(yyyGNT *) NULL)
      yyyfatal ("malloc error in Ox Semantic Node space allocation\n");
#endif /* !defined (__cplusplus) */
   (*LHSsemEl)->solvedSAlist = yyyLambdaSSAL;
   (*LHSsemEl)->node->parent.stackref = (*LHSsemEl);
   (*LHSsemEl)->node->parentIsStack = true;
   (*LHSsemEl)->node->cLlen  = RHSlength;
   if (RHSlength>0)
#if defined (__cplusplus)
      try {
         (*LHSsemEl)->node->cL = new yyyGNT * [RHSlength];
      } catch (std::bad_alloc) {
         yyyfatal ("error in Ox Child List space allocation\n");
      }
#else /* !defined (__cplusplus) */
     {(*LHSsemEl)->node->cL =
            (yyyGNT **) calloc ((size_t)RHSlength, (size_t)sizeof (yyyGNT *));
      if ((*LHSsemEl)->node->cL==(yyyGNT **) NULL)
         yyyfatal ("calloc error in Ox Child List space allocation\n");
     }
#endif /* !defined (__cplusplus) */
   else
      (*LHSsemEl)->node->cL = (yyyGNT **) NULL;
   (*LHSsemEl)->node->refCountListLen = Nattrbs;
   if (Nattrbs>0)
#if defined (__cplusplus)
      try {
         (*LHSsemEl)->node->refCountList = new yyyRCT [Nattrbs];
         for (int i = 0; i < Nattrbs; i++)
            (*LHSsemEl)->node->refCountList [i] = 0;
      } catch (std::bad_alloc) {
         yyyfatal ("error in Ox Reference Count List space allocation\n");
      }
#else /* !defined (__cplusplus) */
     {(*LHSsemEl)->node->refCountList =
            (yyyRCT *) calloc ((size_t) Nattrbs, (size_t) sizeof (yyyRCT));
      if ((*LHSsemEl)->node->refCountList==(yyyRCT *) NULL)
         yyyfatal ("calloc error in Ox Reference Count List space allocation\n");
     }
#endif /* !defined (__cplusplus) */
   else
      (*LHSsemEl)->node->refCountList = (yyyRCT *) NULL;
   (*LHSsemEl)->node->prodNum = (yyyPNT)ProdNum;
   if (RHSlength>0)
     {va_list ap;
      va_start (ap, val_OxAttrbs);
      for (yyyWST i = 1; i <= RHSlength; i++)
        {yyyOxAttrbs *RHSattrbs = va_arg (ap, yyyOxAttrbs *);
         if (RHSattrbs != (yyyOxAttrbs *) NULL)
           {yyySIT *RHSsemEl = RHSattrbs->semEl;
            yyyGNT *gnpDum = (*LHSsemEl)->node->cL[i-1] = RHSsemEl->node;
            gnpDum->whichSym = i;
            gnpDum->parent.noderef = (*LHSsemEl)->node;
            gnpDum->parentIsStack = false;
           }
        }
      va_end (ap);
     }
  }



static void yyyReclaimSemStkEls (int RHSlength, ...)
  {if (RHSlength>0)
     {va_list ap;
      va_start (ap, RHSlength);
      for (yyyWST i = 1; i <= RHSlength; i++)
        {yyyOxAttrbs *RHSattrbs = va_arg (ap, yyyOxAttrbs *);
         if (RHSattrbs != (yyyOxAttrbs *) NULL)
           {yyySIT *RHSsemEl = RHSattrbs->semEl;
            RHSsemEl->node = (yyyGNT *) NULL;
#if defined (__cplusplus)
            delete RHSsemEl;
#else
            free (RHSsemEl);
#endif
           }
        }
      va_end (ap);
     }
  }



static void yyyAdjustINRC (long ProdNum, int RHSlength, long startP, long stopP, yyyOxAttrbs *val_OxAttrbs, ...)
  {yyySIT *LHSsemEl = val_OxAttrbs->semEl;
   yyySSALC *SSALptr,*SSALptrHead,**cPtrPtr;
   yyyGNT *gnpDum;
   long nextP;

   nextP = startP;
   while (nextP < stopP)
     {if (yyyRCIL[nextP]==yyyR)
         {(LHSsemEl->node->refCountList)[yyyRCIL[nextP +1]] = yyyRCIL[nextP+2];
         }
      else
         {(((LHSsemEl->node->cL)[yyyRCIL[nextP]])->refCountList)[yyyRCIL[nextP +1]] = yyyRCIL[nextP+2];
         }
      nextP += 3;
     }
   if (RHSlength>0)
     {long *pL = yyyIIEL + yyyIIIEL[ProdNum];
      long iTemp;
      va_list ap;
      va_start (ap, val_OxAttrbs);
      for (yyyWST i = 1; i <= RHSlength; i++)
        {yyyOxAttrbs *RHSattrbs = va_arg (ap, yyyOxAttrbs *);
         if (RHSattrbs != (yyyOxAttrbs *) NULL)
           {yyySIT *RHSsemEl = RHSattrbs->semEl;
            pL++;
            SSALptrHead = SSALptr = *(cPtrPtr = &(RHSsemEl->solvedSAlist));
            if (SSALptr != yyyLambdaSSAL)
              {*cPtrPtr = yyyLambdaSSAL;
               do
                 {iTemp = (*pL+SSALptr->attrbNum);
                  yyySignalEnts (LHSsemEl->node,
                                 yyyIEL[iTemp],
                                 yyyIEL[iTemp +1]
                                );
                  SSALptr = *(cPtrPtr = &(SSALptr->next));
                 }
               while (SSALptr != yyyLambdaSSAL);
               *cPtrPtr = yyySSALCfreeList;
               yyySSALCfreeList = SSALptrHead;
              }
           }
        }
      va_end (ap);
     }
   nextP = startP + 2;
   while (nextP < stopP)
     {if (yyyRCIL[nextP]==0)
         {if (yyyRCIL[nextP-2]==yyyR)
             {yyySSALC **pL = &(LHSsemEl->solvedSAlist);
              yyySSALC *iTemp;
              if (yyySSALCfreeList==yyyLambdaSSAL)
#if defined (__cplusplus)
                 try {
                    iTemp = new yyySSALC;
                 } catch (std::bad_alloc) {
                    yyyfatal ("error in Ox Stack Solved List space allocation\n");
                 }
#else /* !defined (__cplusplus) */
                 {iTemp = (yyySSALC *) malloc ((size_t) sizeof (yyySSALC));
                  if (iTemp==yyyLambdaSSAL)
                     yyyfatal ("malloc error in Ox Stack Solved List space allocation\n");
                 }
#endif /* !defined (__cplusplus) */
              else
                 {iTemp = yyySSALCfreeList;
                  yyySSALCfreeList = yyySSALCfreeList->next;
                 }
              iTemp->next = *pL;
              iTemp->attrbNum = yyyRCIL[nextP-1];
              *pL = iTemp;
             }
          else
             {if ((gnpDum = (LHSsemEl->node->cL)[yyyRCIL[nextP-2]])->prodNum!=0)
                 {long iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + yyyRCIL[nextP-1];
                  yyySignalEnts (gnpDum,
                                 yyyIEL[iTemp],
                                 yyyIEL[iTemp +1]
                                );
                 }
             }
         }
      nextP += 3;
     }
  }



void yyyGenLeaf (int nAttrbs,
#if defined (S_SPLINT_S)
                /*@unused@*/
#endif
                __attribute__((unused))
                 int typeNum, long startP, long stopP, YYSTYPE *lval)
  {
#if defined (lint)
   NOTE(ARGUNUSED(typeNum))
#endif
   yyySIT **LHSsemEl = &((yyyOxAttrbs *)lval)->semEl;
#if defined (__cplusplus)
   try {
      (*LHSsemEl) = new yyySIT;
   } catch (std::bad_alloc) {
      yyyfatal ("error in Ox/Yacc semantic stack space allocation\n");
   }
   try {
      (*LHSsemEl)->node = new yyyGNT;
   } catch (std::bad_alloc) {
      yyyfatal ("error in Ox Semantic Node space allocation\n");
   }
#else /* !defined (__cplusplus) */
   (*LHSsemEl) = (yyySIT *) malloc ((size_t) sizeof (yyySIT));
   if ((*LHSsemEl)==(yyySIT *) NULL)
      yyyfatal ("malloc error in Ox/Yacc semantic stack space allocation\n");
   (*LHSsemEl)->node = (yyyGNT *) malloc ((size_t) sizeof (yyyGNT));
   if ((*LHSsemEl)->node==(yyyGNT *) NULL)
      yyyfatal ("malloc error in Ox Semantic Node space allocation\n");
#endif /* !defined (__cplusplus) */
   (*LHSsemEl)->solvedSAlist = yyyLambdaSSAL;
   (*LHSsemEl)->node->parent.stackref = (*LHSsemEl);
   (*LHSsemEl)->node->parentIsStack = true;
   (*LHSsemEl)->node->cLlen = 0;
   (*LHSsemEl)->node->cL = (yyyGNT **) NULL;
   (*LHSsemEl)->node->refCountListLen = nAttrbs;
   if (nAttrbs>0)
     {yyyRCT *rcPdum;
#if defined (__cplusplus)
      try {
         rcPdum = (*LHSsemEl)->node->refCountList = new yyyRCT [nAttrbs];
      } catch (std::bad_alloc) {
         yyyfatal ("error in Ox Reference Count List space allocation\n");
      }
#else /* !defined (__cplusplus) */
      rcPdum = (*LHSsemEl)->node->refCountList =
               (yyyRCT *) calloc ((size_t) nAttrbs, (size_t) sizeof (yyyRCT));
      if (rcPdum==(yyyRCT *) NULL)
         yyyfatal ("calloc error in Ox Reference Count List space allocation\n");
#endif /* !defined (__cplusplus) */
      while (startP < stopP) rcPdum[yyyLRCIL[startP++]] = 0;
     }
   else
      (*LHSsemEl)->node->refCountList = (yyyRCT *) NULL;
   (*LHSsemEl)->node->prodNum = 0;
   (*LHSsemEl)->node->whichSym = 0;
  }



void yyyabort (void) {yyyYok = false;}




#define yyyLastProdNum 43


static int yyyProdsInd[] = {
   0,
   0,   1,   5,  13,  25,  26,  30,  32,  33,  38,
  39,  43,  46,  49,  54,  59,  63,  65,  67,  72,
  74,  79,  84,  89,  93,  97,  99, 102, 105, 106,
 110, 111, 115, 116, 120, 124, 126, 131, 133, 139,
 145, 152, 153,
 157,
};


static int yyyProds[][2] = {
{  25,   0},{  25,   0},{  25,   0},{  51,   0},{   8,   0},
{  51,   0},{  23,   1},{  11,   0},{  31,   2},{  32,   2},
{  12,   0},{  37,   4},{   1,   0},{  51,   0},{  23,   1},
{  13,   0},{  31,   2},{  32,   2},{  14,   0},{  11,   0},
{  31,   2},{  32,   2},{  12,   0},{  37,   4},{   1,   0},
{  31,   2},{  31,   2},{  31,   2},{  23,   1},{  10,   0},
{  32,   2},{  23,   1},{  37,   4},{  37,   4},{  34,   3},
{  38,   5},{   8,   0},{  37,   4},{  34,   3},{  34,   3},
{  34,   3},{  23,   1},{   9,   0},{  38,   5},{   2,   0},
{  39,   6},{  38,   5},{   3,   0},{  23,   1},{  38,   5},
{   4,   0},{  39,   6},{   3,   0},{  23,   1},{  38,   5},
{   5,   0},{  23,   1},{  17,   0},{  39,   6},{  38,   5},
{  46,   6},{  17,   0},{  39,   6},{  38,   5},{  41,   6},
{  46,   6},{  23,   1},{  46,   6},{  41,   6},{  15,   0},
{  39,   6},{  16,   0},{  39,   6},{  45,   6},{  39,   6},
{  41,   6},{  18,   0},{  41,   6},{  44,   6},{  39,   6},
{  41,   6},{  19,   0},{  41,   6},{  43,   6},{  39,   6},
{  41,   6},{   7,   0},{  41,   6},{  42,   6},{  39,   6},
{  41,   6},{  20,   0},{  41,   6},{  39,   6},{  41,   6},
{  17,   0},{  41,   6},{  45,   6},{  41,   6},{  45,   6},
{   6,   0},{  45,   6},{  45,   6},{  21,   0},{  45,   6},
{  44,   6},{  44,   6},{  44,   6},{  18,   0},{  41,   6},
{  43,   6},{  43,   6},{  43,   6},{  19,   0},{  41,   6},
{  42,   6},{  42,   6},{  42,   6},{   7,   0},{  41,   6},
{  41,   6},{  11,   0},{  39,   6},{  12,   0},{  41,   6},
{  24,   0},{  41,   6},{  41,   6},{  15,   0},{  39,   6},
{  16,   0},{  41,   6},{  23,   1},{  41,   6},{  23,   1},
{  11,   0},{  40,   6},{  39,   6},{  12,   0},{  41,   6},
{  23,   1},{  13,   0},{  40,   6},{  39,   6},{  14,   0},
{  41,   6},{  41,   6},{  22,   0},{  11,   0},{  40,   6},
{  39,   6},{  12,   0},{  40,   6},{  40,   6},{  40,   6},
{  39,   6},{  10,   0},
};


static int yyySortsInd[] = {
  0,
  0,  2,  3,  4,  6,  8,
  9,
};


static int yyySorts[] = {
   27,   28,   30,   33,   35,   36,   35,   36,   26,
};



static const char *const yyyStringTab[] = {
"NIO","END","RETURN","GOTO","IF",
"VAR","NOT","AND","SEMICOLON","COLON",
"COMMA","BRACKET_OPEN","BRACKET_CLOSE","CURLY_BRACKET_OPEN","CURLY_BRACKET_CLOSE",
"SQUARED_BRACKET_OPEN","SQUARED_BRACKET_CLOSE","EQUAL","ADD","MUL",
"GREATER","SUB","AT_SIGN","ID","NUM",
"Program","ids","name","lineNr",0,
"pars","Pars","Par","labels","Labeldef",
"in","out","Stats","Stat","Expr",
"RepeatExpr","Term","AndTerm","MulTerm","AddTerm",
"NotOrSub","Lexpr",0,0,"__y",
"error","Def",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num) +1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum, symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[prodNum] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num) +1] - yyySortsInd[(num)])

#define yyySortOf(prodNum, symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1])

#define yyyAttrbStr(prodNum, symPos, attrbNum)                     \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum, symPos)] + \
                         (attrbNum)                                \
                        ]                                          \
               ]                                                   \
  )



static void yyyShowProd (int i)
  {int nSyms;

   nSyms = yyySizeofProd(i);
   for (int j = 0; j < nSyms; j++)
     {
      (void) fprintf (stderr, "%s", yyyGSoccurStr(i, j));
      if (j==0) (void) fputs (" : ", stderr); else (void) putc (' ', stderr);
     }
   (void) fputs (";\n", stderr);
  }



static void yyyCheckNodeInstancesSolved (yyyGNT *np)
  {int mysort, sortSize, prodNum, symPos;
   int nUnsolvedInsts = 0;
   bool inTerminalNode;

   if (np->prodNum!=0)
     {inTerminalNode = false;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = true;
      prodNum = np->parent.noderef->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum, symPos);
   sortSize = yyySizeofSort(mysort);
   for (int i = 0; i < sortSize; i++)
     if ((np->refCountList)[i]>0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts>0)
     {(void) fprintf (stderr, "\nFound node that has %d unsolved attribute instance(s).\n",
                              nUnsolvedInsts
                     );
      (void) fprintf (stderr, "Node is labeled \"%s\".\n",
                              yyyGSoccurStr(prodNum, symPos));
      if (inTerminalNode)
        {(void) fputs ("Node is terminal.  Its parent production is:\n  ", stderr);
         yyyShowProd (prodNum);
        }
      else
        {(void) fputs ("Node is nonterminal.  ", stderr);
         if (!(np->parentIsStack))
           {(void) fprintf (stderr, "Node is %huth child in its parent production:\n  ",
                                    np->whichSym
                           );
            yyyShowProd (np->parent.noderef->prodNum);
           }
         (void) fputs ("Node is on left hand side of this production:\n  ", stderr);
         yyyShowProd (np->prodNum);
        }
      (void) fputs ("The following instances are unsolved:\n", stderr);
      for (int i = 0; i < sortSize; i++)
        if ((np->refCountList)[i]>0)
          (void) fprintf (stderr, "     %-16s still has %1hu dependencies.\n",
                                  yyyAttrbStr(prodNum, symPos, i),
                                  (np->refCountList)[i]
                         );
     }
  }



static void yyyCheckUnsolvedInstTrav (yyyGNT *pNode, long *nNZrc, long *cycleSum)
  {yyyGNT **cLpdum;
   yyyRCT *rcp;
   int i;

   /* visit the refCountList of each node in the tree, and sum the non-zero refCounts */
   rcp = pNode->refCountList;
   i = pNode->refCountListLen;
   while ((i--)>0)
      if ((*rcp++)>0) {*cycleSum += *(rcp -1); (*nNZrc)++;}
   cLpdum = pNode->cL;
   i = pNode->cLlen;
   while ((i--)>0)
     {
      yyyCheckUnsolvedInstTrav (*cLpdum, nNZrc, cycleSum);
      cLpdum++;
     }
  }



static void yyyUnsolvedInstSearchTravAux (yyyGNT *pNode)
  {yyyGNT **cLpdum;
   int i;

   yyyCheckNodeInstancesSolved (pNode);
   cLpdum = pNode->cL;
   i = pNode->cLlen;
   while ((i--)>0)
     {
      yyyUnsolvedInstSearchTravAux (*cLpdum);
      cLpdum++;
     }
  }



