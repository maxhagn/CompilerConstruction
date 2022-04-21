/* output from Ox version G1.04 */
%{
%}
%{

#include "parser.h"

%}

%token END RETURN GOTO IF VAR NOT AND
%token SEMICOLON COLON COMMA
%token BRACKET_OPEN BRACKET_CLOSE
%token CURLY_BRACKET_OPEN CURLY_BRACKET_CLOSE
%token SQUARED_BRACKET_OPEN SQUARED_BRACKET_CLOSE
%token EQUAL ADD MUL GREATER SUB AT_SIGN
%token ID NUM

%start yyyAugNonterm




 
 
    
 
 
 
        






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


struct yyyT6 { ListNode *in; ListNode* out; TreeNode *tree; }; 
typedef struct yyyT6 *yyyP6; 


struct yyyT7 { ListNode *ids; TreeNode *tree; }; 
typedef struct yyyT7 *yyyP7; 
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

%{
#include <stdio.h>

int yyyYok = 1;
int yyyInitDone = 0;
char *yyySTsn;
yyyGNT *yyySTN;
int yyyGNSz = sizeof(yyyGNT);
int yyyProdNum,yyyRHSlength,yyyNattrbs,yyyTypeNum; 

extern yyyFT yyyRCIL[];

void yyyExecuteRRsection();
void yyyYoxInit();
void yyyYoxReset();
void yyyDecorate();
void yyyGenIntNode();
void yyyAdjustINRC();
void yyyPrune();
void yyyUnsolvedInstSearchTrav();
void yyyUnsolvedInstSearchTravAux();
void yyyerror();
void yyyShift();



#define yyyRSU(NUM1,NUM2,NUM3,NUM4) \
   yyyProdNum=NUM1;yyyRHSlength=NUM2;yyyNattrbs=NUM3;yyyTypeNum=NUM4;\
   if ((yychar <= 0) && (!yyyTermBuffer.isEmpty)) yyyShift(); 
%}


%%

yyyAugNonterm 
	:	{if (!yyyInitDone) 
		    {yyyYoxInit(); 
		     yyyInitDone = 1;
		    }
		 yyyYoxReset();
		}
		Program
		{
		 yyyDecorate(); yyyExecuteRRsection();
		}
	;
Program     :
            {if(yyyYok){
yyyRSU(1,0,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);}}| Program Def SEMICOLON
            {if(yyyYok){
yyyRSU(2,3,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);/*yyyPrune(2);*/}};

Def         : ID BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
			{if(yyyYok){
yyyRSU(3,7,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+3);/*yyyPrune(3);*/}}
	    	| ID CURLY_BRACKET_OPEN ParsPointer ParPointer CURLY_BRACKET_CLOSE BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
	   		{if(yyyYok){
yyyRSU(4,11,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+3,yyyRCIL+6);/*yyyPrune(4);*/}}
            ;

Pars        :
	    	{if(yyyYok){
yyyRSU(5,0,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->pars) = newListNode();
            yyyAdjustINRC(yyyRCIL+6,yyyRCIL+9);}}
	    	| Pars ID COMMA
	    	{if(yyyYok){
yyyRSU(6,3,1,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+9,yyyRCIL+12);/*yyyPrune(6);*/}}
            ;

Par         : ID
            {if(yyyYok){
yyyRSU(7,1,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->pars) = add(newListNode(), (((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->name), PARAMETER, (((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->line));
	    	yyyAdjustINRC(yyyRCIL+12,yyyRCIL+15);/*yyyPrune(7);*/}}
            ;

ParsPointer :
	    	{if(yyyYok){
yyyRSU(8,0,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->pars) = newListNode();
            yyyAdjustINRC(yyyRCIL+15,yyyRCIL+18);}}
	    	| ParsPointer ID COMMA
	    	{if(yyyYok){
yyyRSU(9,3,1,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+18,yyyRCIL+21);/*yyyPrune(9);*/}}
            ;

ParPointer  : ID
            {if(yyyYok){
yyyRSU(10,1,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->pars) = add(newListNode(), (((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->name), PARAMETER_POINTER, (((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->line));
	    	yyyAdjustINRC(yyyRCIL+21,yyyRCIL+24);/*yyyPrune(10);*/}}
            ;

Stats       :
			{if(yyyYok){
yyyRSU(11,0,2,5);
yyyGenIntNode();
 (((yyyP5)yyySTsn)->out) = newListNode();
	    	yyyAdjustINRC(yyyRCIL+24,yyyRCIL+27);}}
            | Labeldef Stat SEMICOLON Stats
            {if(yyyYok){
yyyRSU(12,4,2,5);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+27,yyyRCIL+36);}}
            ;

Labeldef    :
			{if(yyyYok){
yyyRSU(13,0,1,4);
yyyGenIntNode();
 (((yyyP4)yyySTsn)->labels) = newListNode();
			yyyAdjustINRC(yyyRCIL+36,yyyRCIL+39);}}
	    	| Labeldef ID COLON
	    	{if(yyyYok){
yyyRSU(14,3,1,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+39,yyyRCIL+42);/*yyyPrune(14);*/}}
	    	;

Stat        : RETURN Expr
	    	{if(yyyYok){
yyyRSU(15,2,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

                yyyAdjustINRC(yyyRCIL+42,yyyRCIL+51);}}
			| GOTO ID
			{if(yyyYok){
yyyRSU(16,2,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

				 (((yyyP6)yyySTsn)->tree) = NULL;

				yyyAdjustINRC(yyyRCIL+51,yyyRCIL+57);/*yyyPrune(16);*/}}
			| IF Expr GOTO ID
			{if(yyyYok){
yyyRSU(17,4,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

				 (((yyyP6)yyySTsn)->tree) = NULL;

				yyyAdjustINRC(yyyRCIL+57,yyyRCIL+66);}}
			| VAR ID EQUAL Expr
			{if(yyyYok){
yyyRSU(18,4,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->tree) = NULL;
			 (((yyyP6)yyySTsn)->out) = add(newListNode(), (((yyyP2)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name), VARIABLE, (((yyyP2)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->line));

				yyyAdjustINRC(yyyRCIL+66,yyyRCIL+75);}}
			| Lexpr EQUAL Expr
			{if(yyyYok){
yyyRSU(19,3,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

				 (((yyyP6)yyySTsn)->tree) = NULL;
			yyyAdjustINRC(yyyRCIL+75,yyyRCIL+87);}}
			| Term
			{if(yyyYok){
yyyRSU(20,1,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

				 (((yyyP6)yyySTsn)->tree) = NULL;
			yyyAdjustINRC(yyyRCIL+87,yyyRCIL+96);}}
            ;

Lexpr       : ID
			{if(yyyYok){
yyyRSU(21,1,2,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tree) = NULL;

                yyyAdjustINRC(yyyRCIL+96,yyyRCIL+99);/*yyyPrune(21);*/}}
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            {if(yyyYok){
yyyRSU(22,4,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+99,yyyRCIL+108);}}
            ;

Expr        : NotOrSub
			{if(yyyYok){
yyyRSU(23,1,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+108,yyyRCIL+114);}}
            | Term AddTerm
            {if(yyyYok){
yyyRSU(24,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+114,yyyRCIL+123);}}
            | Term MulTerm
            {if(yyyYok){
yyyRSU(25,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+123,yyyRCIL+132);}}
            | Term AndTerm
            {if(yyyYok){
yyyRSU(26,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+132,yyyRCIL+141);}}
            | Term GREATER Term
            {if(yyyYok){
yyyRSU(27,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+141,yyyRCIL+150);}}
            | Term EQUAL Term
            {if(yyyYok){
yyyRSU(28,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+150,yyyRCIL+159);}}
            ;

NotOrSub    : Term
			{if(yyyYok){
yyyRSU(29,1,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+159,yyyRCIL+165);}}
	    	| NOT NotOrSub
	    	{if(yyyYok){
yyyRSU(30,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+165,yyyRCIL+171);}}
            | SUB NotOrSub
            {if(yyyYok){
yyyRSU(31,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+171,yyyRCIL+177);}}
            ;

AddTerm     : ADD Term
            {if(yyyYok){
yyyRSU(32,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+177,yyyRCIL+183);}}| ADD Term AddTerm
            {if(yyyYok){
yyyRSU(33,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+183,yyyRCIL+192);}}
            ;

MulTerm     : MUL Term
            {if(yyyYok){
yyyRSU(34,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+192,yyyRCIL+198);}}| MUL Term MulTerm
            {if(yyyYok){
yyyRSU(35,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+198,yyyRCIL+207);}}
            ;

AndTerm     : AND Term
            {if(yyyYok){
yyyRSU(36,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+207,yyyRCIL+213);}}| AND Term AndTerm
            {if(yyyYok){
yyyRSU(37,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+213,yyyRCIL+222);}}
            ;

Term        : BRACKET_OPEN Expr BRACKET_CLOSE
            {if(yyyYok){
yyyRSU(38,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+222,yyyRCIL+228);}}| NUM
            {if(yyyYok){
yyyRSU(39,1,2,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tree) = newNumberTreeNode((((yyyP1)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->value));
			yyyAdjustINRC(yyyRCIL+228,yyyRCIL+231);/*yyyPrune(39);*/}}
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            {if(yyyYok){
yyyRSU(40,4,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+231,yyyRCIL+240);}}
            | ID
            {if(yyyYok){
yyyRSU(41,1,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+240,yyyRCIL+243);}}
            | ID BRACKET_OPEN RepeatExpr Expr BRACKET_CLOSE
            {if(yyyYok){
yyyRSU(42,5,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+243,yyyRCIL+252);}}
            | ID CURLY_BRACKET_OPEN RepeatExpr Expr CURLY_BRACKET_CLOSE
            {if(yyyYok){
yyyRSU(43,5,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+252,yyyRCIL+261);}}
            | Term AT_SIGN BRACKET_OPEN RepeatExpr Expr BRACKET_CLOSE
            {if(yyyYok){
yyyRSU(44,6,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+261,yyyRCIL+273);}}
            ;

RepeatExpr  :
			{if(yyyYok){
yyyRSU(45,0,2,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tree) = NULL;
			yyyAdjustINRC(yyyRCIL+273,yyyRCIL+276);}}
            | RepeatExpr Expr COMMA
            {if(yyyYok){
yyyRSU(46,3,2,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tree) = NULL;
			yyyAdjustINRC(yyyRCIL+276,yyyRCIL+285);}}
            ;


%%

int main(void)
{
    yyparse();
    return 0;
}                                                      /*custom*/  
long yyyMaxNbytesNodeStg = 2000000; 
long yyyMaxNrefCounts =    500000; 
long yyyMaxNchildren =     60000; 
long yyyMaxStackSize =     2000; 
long yyySSALspaceSize =    20000; 
long yyyRSmaxSize =        1000; 
long yyyTravStackMaxSize = 2000; 


struct yyyTB yyyTermBuffer; 

char *yyyNodeAndStackSpace; 

char *yyyNodeSpace;
char *yyyNextNodeSpace; 
char *yyyAfterNodeSpace; 


 
struct yyyGenNode **yyyChildListSpace;  
struct yyyGenNode **yyyNextCLspace; 
struct yyyGenNode **yyyAfterChildListSpace; 



yyyRCT *yyyRefCountListSpace;
yyyRCT *yyyNextRCLspace;  
yyyRCT *yyyAfterRefCountListSpace;   



struct yyySolvedSAlistCell {yyyWAT attrbNum; 
                            long next; 
                           }; 
#define yyyLambdaSSAL 0 
long yyySSALCfreeList = yyyLambdaSSAL; 
long yyyNewSSALC = 1; 
 
struct yyySolvedSAlistCell *yyySSALspace; 


 
struct yyyStackItem {struct yyyGenNode *node; 
                     long solvedSAlist; 
                     struct yyyGenNode *oldestNode; 
                    };  

long yyyNbytesStackStg; 
struct yyyStackItem *yyyStack; 
struct yyyStackItem *yyyAfterStack; 
struct yyyStackItem *yyyStackTop; 



struct yyyRSitem {yyyGNT *node; 
                  yyyWST whichSym; 
                  yyyWAT wa;  
                 };  

struct yyyRSitem *yyyRS;  
struct yyyRSitem *yyyRSTop;  
struct yyyRSitem *yyyAfterRS;  
 





yyyFT yyyRCIL[] = {
5,0,3, 9,0,5, yyyR,0,0, yyyR,0,1, yyyR,0,0, yyyR,0,0, 
yyyR,0,1, yyyR,0,0, yyyR,1,0, yyyR,1,2, 1,0,1, 3,0,2, 
yyyR,0,0, yyyR,0,1, yyyR,1,0, yyyR,2,1, 1,0,1, yyyR,1,0, 
yyyR,2,0, yyyR,1,0, yyyR,2,0, 1,0,1, yyyR,1,0, yyyR,2,0, 
3,0,1, yyyR,1,0, yyyR,2,0, 0,0,1, 2,0,1, yyyR,1,0, 
yyyR,2,0, 0,0,1, yyyR,1,0, yyyR,1,1, 0,0,1, 2,0,1, 
yyyR,1,1, 0,0,1, yyyR,1,2, 0,0,1, 1,0,1, yyyR,1,2, 
0,0,1, 1,0,1, yyyR,1,2, 0,0,1, 1,0,1, yyyR,1,2, 
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,1, 
0,0,1, yyyR,1,1, 1,0,1, yyyR,1,1, 1,0,1, yyyR,1,1, 
1,0,1, yyyR,1,2, 1,0,1, 2,0,1, yyyR,1,1, 1,0,1, 
yyyR,1,2, 1,0,1, 2,0,1, yyyR,1,1, 1,0,1, yyyR,1,2, 
1,0,1, 2,0,1, yyyR,1,1, 1,0,1, yyyR,1,0, yyyR,1,1, 
0,0,1, 2,0,1, yyyR,1,1, yyyR,1,1, 2,0,1, 3,0,1, 
yyyR,1,1, 2,0,1, 3,0,1, yyyR,1,1, 0,0,1, 3,0,1, 
4,0,1, yyyR,1,0, yyyR,1,0, 0,0,1, 1,0,1, 
};

short yyyIIIEL[] = {0,
0,1,5,13,25,26,30,32,33,37,
39,40,45,46,50,53,56,61,66,70,
72,74,79,81,84,87,90,94,98,100,
103,106,109,113,116,120,123,127,131,133,
138,140,146,152,159,160,
};

long yyyIIEL[] = {
0,0,0,0,0,0,0,2,2,3,4,4,
6,6,6,8,8,9,10,10,10,11,12,12,
14,14,15,16,17,19,19,20,22,23,24,25,
27,27,28,30,32,34,35,38,38,40,41,42,
43,45,45,48,48,50,53,53,55,58,58,60,
60,62,65,65,67,67,69,72,74,74,76,79,
81,83,85,87,89,89,91,91,93,95,97,99,
101,103,105,107,109,111,113,115,117,117,119,121,
123,123,125,127,129,131,131,133,135,135,137,139,
139,141,143,143,145,147,149,149,151,153,153,155,
157,159,159,161,163,163,165,167,169,169,171,171,
173,174,176,178,178,180,180,182,184,186,188,188,
190,192,192,194,196,196,198,200,200,202,204,204,
204,206,208,208,210,212,214,216,
};

long yyyIEL[] = {
0,0,0,2,4,4,6,6,
6,8,10,12,14,14,16,16,
16,18,20,22,22,24,26,26,
26,28,30,32,32,34,36,36,
36,40,40,42,42,44,44,44,
46,46,46,48,50,52,54,54,
54,54,56,56,56,56,56,56,
58,58,58,58,58,58,58,60,
60,60,62,64,64,64,68,68,
68,68,68,68,68,70,70,70,
70,70,70,70,70,70,74,74,
74,76,76,76,78,78,78,80,
84,84,84,86,86,88,92,92,
92,94,94,96,100,100,100,102,
102,104,108,108,108,110,110,112,
116,116,116,118,118,120,122,122,
122,124,126,126,126,128,130,130,
130,132,134,134,134,136,140,140,
140,142,142,144,146,146,146,148,
152,152,152,154,154,156,158,158,
158,160,164,164,164,166,166,168,
170,170,170,172,172,172,174,178,
178,178,180,180,180,182,182,184,
184,190,190,192,192,192,192,192,
192,198,198,200,200,200,200,200,
200,206,206,206,208,208,208,208,
208,208,208,212,212,212,212,212,
212,
};

yyyFT yyyEntL[] = {
6,0,6,0,6,0,10,0,10,0,10,0,10,0,10,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,4,0,2,0,0,1,4,0,0,1,0,0,
0,0,0,0,2,0,0,2,2,0,4,0,0,1,0,1,
1,0,3,0,1,0,3,0,1,0,0,1,1,0,0,1,
2,0,1,0,0,1,0,1,2,0,1,0,0,1,0,1,
2,0,1,0,0,1,0,1,3,0,1,0,0,1,0,1,
3,0,1,0,0,1,0,1,1,0,0,1,2,0,0,1,
2,0,0,1,2,0,0,1,3,0,2,0,0,1,0,1,
2,0,0,1,3,0,2,0,0,1,0,1,2,0,0,1,
3,0,2,0,0,1,0,1,2,0,0,1,0,1,3,0,
1,0,0,1,0,1,0,1,0,1,4,0,3,0,0,1,
0,1,4,0,3,0,0,1,5,0,4,0,1,0,0,1,
2,0,1,0,
};

#define yyyPermitUserAlloc  0 


void yyyfatal(msg)
  char *msg; 
{fprintf(stderr,msg);exit(-1);} 



#define yyyNSof   'n' 
#define yyyRCof   'r' 
#define yyyCLof   'c' 
#define yyySof    's' 
#define yyySSALof 'S' 
#define yyyRSof   'q' 
#define yyyTSof   't' 



void yyyHandleOverflow(which) 
  char which; 
  {char *msg1,*msg2; 
   long  oldSize,newSize; 
   switch(which) 
     {
      case yyyNSof   : 
           msg1 = "node storage overflow: ";
           oldSize = yyyMaxNbytesNodeStg; 
           break; 
      case yyyRCof   : 
           msg1 = "dependee count overflow: ";
           oldSize = yyyMaxNrefCounts; 
           break; 
      case yyyCLof   : 
           msg1 = "child list overflow: ";
           oldSize = yyyMaxNchildren; 
           break; 
      case yyySof    : 
           msg1 = "parse-tree stack overflow: ";
           oldSize = yyyMaxStackSize; 
           break; 
      case yyySSALof : 
           msg1 = "SSAL overflow: ";
           oldSize = yyySSALspaceSize; 
           break; 
      case yyyRSof   : 
           msg1 = "ready set overflow: ";
           oldSize = yyyRSmaxSize; 
           break; 
      case yyyTSof   : 
           msg1 = "traversal stack overflow: ";
           oldSize = yyyTravStackMaxSize; 
           break; 
      default        :;  
     }
   newSize = (3*oldSize)/2; 
   if (newSize < 100) newSize = 100; 
   fprintf(stderr,msg1); 
   fprintf(stderr,"size was %d.\n",oldSize); 
   if (yyyPermitUserAlloc) 
      msg2 = "     Try -Y%c%d option.\n"; 
      else 
      msg2 = "     Have to modify evaluator:  -Y%c%d.\n"; 
   fprintf(stderr,msg2,which,newSize); 
   exit(-1); 
  }



void yyySignalEnts(node,startP,stopP) 
  register yyyGNT *node; 
  register yyyFT *startP,*stopP;  
  {register yyyGNT *dumNode; 

   while (startP < stopP)  
     {
      if (!(*startP)) dumNode = node;  
         else dumNode = (node->cL)[(*startP)-1];   
      if (!(--((dumNode->refCountList)[*(startP+1)]
              ) 
           )
         ) 
         { 
          if (++yyyRSTop == yyyAfterRS) 
             {yyyHandleOverflow(yyyRSof); 
              break; 
             }
          yyyRSTop->node = dumNode; 
          yyyRSTop->whichSym = *startP;  
          yyyRSTop->wa = *(startP+1);  
         }  
      startP += 2;  
     }  
  } 




#define yyyCeiling(num,inc) (((inc) * ((num)/(inc))) + (((num)%(inc))?(inc):0)) 



int yyyAlignSize = 4;
int yyyNdSz[8];

int yyyNdPrSz[8];

typedef int yyyCopyType;

int yyyNdCopySz[8];
long yyyBiggestNodeSize = 0;

void yyyNodeSizeCalc()
  {int i;
   yyyGNSz = yyyCeiling(yyyGNSz,yyyAlignSize); 
   yyyNdSz[0] = 0;
   yyyNdSz[1] = sizeof(struct yyyT1);
   yyyNdSz[2] = sizeof(struct yyyT2);
   yyyNdSz[3] = sizeof(struct yyyT3);
   yyyNdSz[4] = sizeof(struct yyyT4);
   yyyNdSz[5] = sizeof(struct yyyT5);
   yyyNdSz[6] = sizeof(struct yyyT6);
   yyyNdSz[7] = sizeof(struct yyyT7);
   for (i=0;i<8;i++) 
       {yyyNdSz[i] = yyyCeiling(yyyNdSz[i],yyyAlignSize); 
        yyyNdPrSz[i] = yyyNdSz[i] + yyyGNSz;
        if (yyyBiggestNodeSize < yyyNdSz[i])
           yyyBiggestNodeSize = yyyNdSz[i];
        yyyNdCopySz[i] = yyyCeiling(yyyNdSz[i],sizeof(yyyCopyType)) / 
                         sizeof(yyyCopyType); 
       }
  }




void yyySolveAndSignal() {
register long yyyiDum,*yyypL;
register int yyyws,yyywa;
register yyyGNT *yyyRSTopN,*yyyRefN; 
register void *yyyRSTopNp; 


yyyRSTopNp = (yyyRSTopN = yyyRSTop->node)->parent;
yyyRefN= (yyyws = (yyyRSTop->whichSym))?((yyyGNT *)yyyRSTopNp):yyyRSTopN;
yyywa = yyyRSTop->wa; 
yyyRSTop--;
switch(yyyRefN->prodNum) {
case 1:  /***yacc rule 1***/
  switch (yyyws) {
  }
break;
case 2:  /***yacc rule 2***/
  switch (yyyws) {
  }
break;
case 3:  /***yacc rule 3***/
  switch (yyyws) {
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in) = merge(3, (((yyyP3)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->pars), (((yyyP3)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->pars), (((yyyP5)(((char *)((yyyRefN->cL)[5]))+yyyGNSz))->out));

                    break;
    }
  break;
  }
break;
case 4:  /***yacc rule 4***/
  switch (yyyws) {
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    }
  break;
  case 7:  /**/
    switch (yyywa) {
    }
  break;
  case 8:  /**/
    switch (yyywa) {
    }
  break;
  case 10:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in) = merge(5, (((yyyP3)(((char *)((yyyRefN->cL)[6]))+yyyGNSz))->pars), (((yyyP3)(((char *)((yyyRefN->cL)[7]))+yyyGNSz))->pars), (((yyyP3)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->pars), (((yyyP3)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->pars), (((yyyP5)(((char *)((yyyRefN->cL)[9]))+yyyGNSz))->out));

                    break;
    }
  break;
  }
break;
case 5:  /***yacc rule 5***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 6:  /***yacc rule 6***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->pars) = add((((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->pars), (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), PARAMETER, (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->line));
	    	    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 7:  /***yacc rule 7***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 8:  /***yacc rule 8***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 9:  /***yacc rule 9***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->pars) = add((((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->pars), (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), PARAMETER_POINTER, (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->line));
	    	    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 10:  /***yacc rule 10***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 11:  /***yacc rule 11***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 12:  /***yacc rule 12***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->out) = merge(2, (((yyyP4)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->labels), (((yyyP5)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->out));
            	    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in)   = (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->in);
            	    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in)  = merge(2, (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP6)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->out));

            	    break;
    }
  break;
  }
break;
case 13:  /***yacc rule 13***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 14:  /***yacc rule 14***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels) = add((((yyyP4)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->labels), (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), LABEL, (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->line));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 15:  /***yacc rule 15***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_RETURN, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), NULL);
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
                    break;
    }
  break;
  }
break;
case 16:  /***yacc rule 16***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 17:  /***yacc rule 17***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 18:  /***yacc rule 18***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  }
break;
case 19:  /***yacc rule 19***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  }
break;
case 20:  /***yacc rule 20***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  }
break;
case 21:  /***yacc rule 21***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 22:  /***yacc rule 22***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 23:  /***yacc rule 23***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 24:  /***yacc rule 24***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_ADD, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree));

				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 25:  /***yacc rule 25***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_MUL, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 26:  /***yacc rule 26***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 27:  /***yacc rule 27***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_GREATER, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 28:  /***yacc rule 28***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_EQUAL, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 29:  /***yacc rule 29***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 30:  /***yacc rule 30***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_NOT, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), NULL);
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 31:  /***yacc rule 31***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_SUB, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), NULL);
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 32:  /***yacc rule 32***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 33:  /***yacc rule 33***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_ADD, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 34:  /***yacc rule 34***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 35:  /***yacc rule 35***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_MUL, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 36:  /***yacc rule 36***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 37:  /***yacc rule 37***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 38:  /***yacc rule 38***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 39:  /***yacc rule 39***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 40:  /***yacc rule 40***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 41:  /***yacc rule 41***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newRegisterTreeNode((((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name), getIndex((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)), getOffset((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)));

				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 42:  /***yacc rule 42***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newRegisterTreeNode((((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name), getIndex((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)), getOffset((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 43:  /***yacc rule 43***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newRegisterTreeNode((((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name), getIndex((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)), getOffset((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 44:  /***yacc rule 44***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 5:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 45:  /***yacc rule 45***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 46:  /***yacc rule 46***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
} /* switch */ 

if (yyyws)  /* the just-solved instance was inherited. */ 
   {if (yyyRSTopN->prodNum) 
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopN->prodNum]] + yyywa;
        yyySignalEnts(yyyRSTopN,yyyEntL + yyyIEL[yyyiDum],
                                yyyEntL + yyyIEL[yyyiDum+1]
                     );
       }
   } 
   else     /* the just-solved instance was synthesized. */ 
   {if ((char *)yyyRSTopNp >= yyyNodeSpace) /* node has a parent. */ 
       {yyyiDum = yyyIIEL[yyyIIIEL[((yyyGNT *)yyyRSTopNp)->prodNum] + 
                          yyyRSTopN->whichSym 
                         ] + 
                  yyywa;
        yyySignalEnts((yyyGNT *)yyyRSTopNp,
                      yyyEntL + yyyIEL[yyyiDum],
                      yyyEntL + yyyIEL[yyyiDum+1] 
                     );
       } 
       else   /* node is still on the stack--it has no parent yet. */ 
       {yyypL = &(((struct yyyStackItem *)yyyRSTopNp)->solvedSAlist); 
        if (yyySSALCfreeList == yyyLambdaSSAL) 
           {yyySSALspace[yyyNewSSALC].next = *yyypL; 
            if ((*yyypL = yyyNewSSALC++) == yyySSALspaceSize) 
               yyyHandleOverflow(yyySSALof); 
           }  
           else
           {yyyiDum = yyySSALCfreeList; 
            yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
            yyySSALspace[yyyiDum].next = *yyypL; 
            *yyypL = yyyiDum;  
           } 
        yyySSALspace[*yyypL].attrbNum = yyywa; 
       } 
   }

} /* yyySolveAndSignal */ 






#define condStg unsigned int conds;
#define yyyClearConds {yyyTST->conds = 0;}
#define yyySetCond(n) {yyyTST->conds += (1<<(n));}
#define yyyCond(n) ((yyyTST->conds & (1<<(n)))?1:0)



struct yyyTravStackItem {yyyGNT *node; 
                         char isReady;
                         condStg
                        };



void yyyDoTraversals()
{struct yyyTravStackItem *yyyTravStack,*yyyTST,*yyyAfterTravStack;
 register yyyGNT *yyyTSTn,**yyyCLptr1,**yyyCLptr2; 
 register int yyyi,yyyRL,yyyPass;

 if (!yyyYok) return;
 if ((yyyTravStack = 
                 ((struct yyyTravStackItem *) 
                  malloc((yyyTravStackMaxSize * 
                                  sizeof(struct yyyTravStackItem)
                                 )
                        )
                 )
     )
     == 
     (struct yyyTravStackItem *)NULL
    ) 
    {fprintf(stderr,"malloc error in traversal stack allocation\n"); 
     exit(-1); 
    } 

yyyAfterTravStack = yyyTravStack + yyyTravStackMaxSize; 
yyyTravStack++; 


for (yyyi=0; yyyi<3; yyyi++) {
yyyTST = yyyTravStack; 
yyyTST->node = yyyStack->node;
yyyTST->isReady = 0;
yyyClearConds

while(yyyTST >= yyyTravStack)
  {yyyTSTn = yyyTST->node;
   if (yyyTST->isReady)  
      {yyyPass = 1;
       goto yyyTravSwitch;
yyyTpop:
       yyyTST--;
      } 
      else 
      {yyyPass = 0;
       goto yyyTravSwitch;
yyyTpush:
       yyyTST->isReady = 1;  
       if (yyyTSTn->prodNum)
          if (yyyRL)
             {yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                {if (++yyyTST == yyyAfterTravStack)
                    yyyHandleOverflow(yyyTSof);
                    else
                    {yyyTST->node = *yyyCLptr2; 
                     yyyTST->isReady = 0; 
                     yyyClearConds
                    }
                 yyyCLptr2++; 
                } 
             } /* right to left */
             else  /* left to right */
             {yyyCLptr1 = yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                yyyCLptr2++; 
              while (yyyCLptr2-- > yyyCLptr1)
                if (++yyyTST == yyyAfterTravStack)
                   yyyHandleOverflow(yyyTSof);
                   else
                   {yyyTST->node = *yyyCLptr2; 
                    yyyTST->isReady = 0; 
                    yyyClearConds
                   }
             } /* left to right */
      } /* else */
   continue;
yyyTravSwitch:
				switch(yyyTSTn->prodNum)	{
case 1:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 2:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 3:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if ( (1)) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { }
if (yyyCond(1) != yyyPass) { assembleFunction((((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name));
            }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 4:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if ( (1)) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { }
if (yyyCond(1) != yyyPass) { assembleFunction((((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name));
	    	}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 5:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 6:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 7:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 8:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 9:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 10:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 11:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 12:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { invoke_burm((((yyyP6)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree));
	    	}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 13:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 14:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 15:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg = getFirstRegister();
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
            }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 16:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { isVisible((((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->in), (((yyyP2)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name), LABEL, (((yyyP2)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->line));
			}
				break;
					}
		break;
			}

break;
case 17:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { isVisible((((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->in), (((yyyP2)(((char *)((yyyTSTn->cL)[3]))+yyyGNSz))->name), LABEL, (((yyyP2)(((char *)((yyyTSTn->cL)[3]))+yyyGNSz))->line));
			}
				break;
					}
		break;
			}

break;
case 18:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 19:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 20:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 21:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { isVisible((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name), VARIABLE, (((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->line));
            }
				break;
					}
		break;
			}

break;
case 22:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 23:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 24:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 25:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 26:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 27:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 28:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 29:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
            }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 30:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 31:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 32:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 33:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 34:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 35:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 36:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 37:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 38:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 39:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 40:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 41:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { isVisible((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name), VARIABLE, (((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->line));
			}
				break;
					}
		break;
			}

break;
case 42:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 43:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 44:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 45:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 46:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
								} /* switch */ 
   if (yyyPass) goto yyyTpop; else goto yyyTpush; 
  } /* while */ 
 } /* for */ 
} /* yyyDoTraversals */ 

void yyyExecuteRRsection()  {
   int yyyi; 
   long yyynRefCounts; 
   long cycleSum = 0;
   long nNZrc = 0;

   if (!yyyYok) return; 
   yyynRefCounts = yyyNextRCLspace - yyyRefCountListSpace; 
   for (yyyi=0;yyyi<yyynRefCounts;yyyi++) 
     if (yyyRefCountListSpace[yyyi])
        {cycleSum += yyyRefCountListSpace[yyyi]; nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n**********\n");
       fprintf(stderr,
               "cycle detected in completed parse tree");
       fprintf(stderr,
               " after decoration.\n");
       fprintf(stderr,
         "searching parse tree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTravAux(yyyStackTop->node);
      }
   yyyDoTraversals();
} /* yyyExecuteRRsection */ 



yyyWAT yyyLRCIL[3] = {0,1,0,
};



void yyyYoxInit()                                  /*stock*/  
  { 

   yyyNodeSizeCalc(); 

   if ((yyyTermBuffer.snBufPtr = 
        (char *) malloc((yyyBiggestNodeSize + sizeof(yyyCopyType)))
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in yyyTermBuffer allocation\n");  
  
  
   yyyNbytesStackStg = yyyMaxStackSize*sizeof(struct yyyStackItem); 
   yyyNbytesStackStg = ((yyyNbytesStackStg/yyyAlignSize)+1)*yyyAlignSize;  
   if ((yyyNodeAndStackSpace = 
        (char *) malloc((yyyNbytesStackStg + 
                                 yyyMaxNbytesNodeStg + 
                                 yyyGNSz + 
                                 yyyBiggestNodeSize + 
                                 sizeof(yyyCopyType) 
                                )
                       )
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in ox node and stack space allocation\n");
   yyyStack = (struct yyyStackItem *) yyyNodeAndStackSpace; 
   yyyAfterStack = yyyStack + yyyMaxStackSize;  
   yyyNodeSpace = yyyNodeAndStackSpace + yyyNbytesStackStg;
   yyyAfterNodeSpace = yyyNodeSpace + yyyMaxNbytesNodeStg;
 
 
   if ((yyyRS = (struct yyyRSitem *) 
         malloc(((yyyRSmaxSize+1)*sizeof(struct yyyRSitem)))
       )  
       == 
       ((struct yyyRSitem *) NULL) 
      )   
      yyyfatal("malloc error in ox ready set space allocation\n");  
   yyyRS++; 
   yyyAfterRS = yyyRS + yyyRSmaxSize; 

 
   if ((yyyChildListSpace = 
        (yyyGNT **) malloc((yyyMaxNchildren*sizeof(yyyGNT *)))
       )  
       == 
       ((yyyGNT **) NULL) 
      )   
      yyyfatal("malloc error in ox child list space allocation\n");  
   yyyAfterChildListSpace = yyyChildListSpace + yyyMaxNchildren; 

 
   if ((yyyRefCountListSpace = 
        (yyyRCT *) malloc((yyyMaxNrefCounts * sizeof(yyyRCT)))
       )  
       == 
       ((yyyRCT *) NULL) 
      )   
      yyyfatal("malloc error in ox reference count list space allocation\n");  
   yyyAfterRefCountListSpace = yyyRefCountListSpace + yyyMaxNrefCounts;  
  
 
   if ((yyySSALspace = (struct yyySolvedSAlistCell *) 
          malloc(((yyySSALspaceSize+1) * 
                          sizeof(struct yyySolvedSAlistCell))
                         ) 
       ) 
       == 
       ((struct yyySolvedSAlistCell *) NULL) 
      ) 
      yyyfatal("malloc error in stack solved list space allocation\n"); 
  } /* yyyYoxInit */ 



void yyyYoxReset() 
  { 
   yyyTermBuffer.isEmpty = 1; 
   yyyStackTop = yyyStack; 
   while (yyyStackTop != yyyAfterStack) 
     (yyyStackTop++)->solvedSAlist = yyyLambdaSSAL; 
   yyyStackTop = yyyStack - 1; 
   yyyNextNodeSpace = yyyNodeSpace; 
   yyyRSTop = yyyRS - 1; 
   yyyNextCLspace = yyyChildListSpace;
   yyyNextRCLspace = yyyRefCountListSpace; 
  }  



void yyyDecorate() 
  { 
   while (yyyRSTop >= yyyRS) 
      yyySolveAndSignal();  
  } 



void yyyShift() 
  {yyyRCT *rcPdum; 
   register yyyCopyType *CTp1,*CTp2,*CTp3; 
   register yyyWAT *startP,*stopP;  

   if ((++yyyStackTop) == yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   CTp2 = (yyyCopyType *)(yyyStackTop->oldestNode = 
                          yyyStackTop->node = 
                          (yyyGNT *)yyyNextNodeSpace 
                         ); 
   yyyTermBuffer.isEmpty = 1;
   ((yyyGNT *)CTp2)->parent = (void *)yyyStackTop; 
   ((yyyGNT *)CTp2)->cL = yyyNextCLspace;  
   rcPdum = ((yyyGNT *)CTp2)->refCountList = yyyNextRCLspace;  
   ((yyyGNT *)CTp2)->prodNum = 0; 
   if ((yyyNextRCLspace += yyyTermBuffer.nAttrbs) 
       > 
       yyyAfterRefCountListSpace 
      ) 
      yyyHandleOverflow(yyyRCof); 
   startP = yyyTermBuffer.startP;  
   stopP = yyyTermBuffer.stopP;  
   while (startP < stopP) rcPdum[*(startP++)] = 0; 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTermBuffer.typeNum]) 
       > 
       yyyAfterNodeSpace 
      ) 
      yyyHandleOverflow(yyyNSof);  
   CTp1 = (yyyCopyType *)(yyyTermBuffer.snBufPtr); 
   CTp2 = (yyyCopyType *)(((char *)CTp2) + yyyGNSz); 
   CTp3 = CTp2 + yyyNdCopySz[yyyTermBuffer.typeNum]; 
   while (CTp2 < CTp3) *CTp2++ = *CTp1++; 
  } 



void yyyGenIntNode() 
  {register yyyWST i;
   register struct yyyStackItem *stDum;  
   register yyyGNT *gnpDum; 

   if ((stDum = (yyyStackTop -= (yyyRHSlength-1))) >= yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   yyySTsn = ((char *)(yyySTN = (yyyGNT *)yyyNextNodeSpace)) + yyyGNSz; 
   yyySTN->parent       =  (void *)yyyStackTop;  
   yyySTN->cL           =  yyyNextCLspace; 
   yyySTN->refCountList =  yyyNextRCLspace; 
   yyySTN->prodNum      =  yyyProdNum; 
   if ((yyyNextCLspace+yyyRHSlength) > yyyAfterChildListSpace) 
      yyyHandleOverflow(yyyCLof); 
   for (i=1;i<=yyyRHSlength;i++) 
     {gnpDum = *(yyyNextCLspace++) = (stDum++)->node;  
      gnpDum->whichSym = i;  
      gnpDum->parent = (void *)yyyNextNodeSpace; 
     } 
   if ((yyyNextRCLspace += yyyNattrbs) > yyyAfterRefCountListSpace) 
      yyyHandleOverflow(yyyRCof); 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTypeNum]) > yyyAfterNodeSpace) 
      yyyHandleOverflow(yyyNSof);  
  } 



#define yyyDECORfREQ 50 



void yyyAdjustINRC(startP,stopP) 
  register yyyFT *startP,*stopP;
  {yyyWST i;
   long SSALptr,SSALptrHead,*cPtrPtr; 
   long *pL; 
   struct yyyStackItem *stDum;  
   yyyGNT *gnpDum; 
   long iTemp;
   register yyyFT *nextP;
   static unsigned short intNodeCount = yyyDECORfREQ;

   nextP = startP;
   while (nextP < stopP) 
     {if ((*nextP) == yyyR)  
         {(yyySTN->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
         else 
         {(((yyySTN->cL)[*nextP])->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
      nextP += 3;  
     }
   pL = yyyIIEL + yyyIIIEL[yyyProdNum]; 
   stDum = yyyStackTop;  
   for (i=1;i<=yyyRHSlength;i++) 
     {pL++; 
      SSALptrHead = SSALptr = *(cPtrPtr = &((stDum++)->solvedSAlist)); 
      if (SSALptr != yyyLambdaSSAL) 
         {*cPtrPtr = yyyLambdaSSAL; 
          do 
            {
             iTemp = (*pL+yyySSALspace[SSALptr].attrbNum);
             yyySignalEnts(yyySTN,
                           yyyEntL + yyyIEL[iTemp],
                           yyyEntL + yyyIEL[iTemp+1]
                          );  
             SSALptr = *(cPtrPtr = &(yyySSALspace[SSALptr].next)); 
            } 
            while (SSALptr != yyyLambdaSSAL);  
          *cPtrPtr = yyySSALCfreeList;  
          yyySSALCfreeList = SSALptrHead;  
         } 
     } 
   nextP = startP + 2;
   while (nextP < stopP) 
     {if (!(*nextP))
         {if ((*(nextP-2)) == yyyR)  
             {pL = &(yyyStackTop->solvedSAlist); 
              if (yyySSALCfreeList == yyyLambdaSSAL) 
                 {yyySSALspace[yyyNewSSALC].next = *pL; 
                  if ((*pL = yyyNewSSALC++) == yyySSALspaceSize) 
                     yyyHandleOverflow(yyySSALof); 
                 }  
                 else
                 {iTemp = yyySSALCfreeList; 
                  yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
                  yyySSALspace[iTemp].next = *pL; 
                  *pL = iTemp;  
                 } 
              yyySSALspace[*pL].attrbNum = *(nextP-1); 
             } 
             else 
             {if ((gnpDum = (yyySTN->cL)[*(nextP-2)])->prodNum != 0)
                 {
                  iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + *(nextP-1);
                  yyySignalEnts(gnpDum, 
                                yyyEntL + yyyIEL[iTemp],  
                                yyyEntL + yyyIEL[iTemp+1] 
                               );    
                 }  
             } 
         } 
      nextP += 3; 
     } 
   yyyStackTop->node = yyySTN;
   if (!yyyRHSlength) yyyStackTop->oldestNode = yyySTN; 
   if (!--intNodeCount) 
      {intNodeCount = yyyDECORfREQ; 
       yyyDecorate(); 
      } 
  } 



void yyyPrune(prodNum) 
  long prodNum;
  {  
   int i,n; 
   register char *cp1,*cp2;  
   register yyyRCT *rcp1,*rcp2,*rcp3;  
   long cycleSum = 0;
   long nNZrc = 0;
   yyyRCT *tempNextRCLspace;
   
   yyyDecorate();
   tempNextRCLspace = yyyNextRCLspace;
   yyyNextRCLspace = 
     (rcp1 = rcp2 = (yyyStackTop->oldestNode)->refCountList) + yyyNattrbs;
   rcp3 = (yyyStackTop->node)->refCountList; 
   while (rcp2 < rcp3) 
     if (*rcp2++) {cycleSum += *(rcp2 - 1); nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n----------\n");
       fprintf(stderr,
         "cycle detected during pruning of a subtree\n");
       fprintf(stderr,
         "  at whose root production %d is applied.\n",prodNum);
       yyyNextRCLspace = tempNextRCLspace; 
       fprintf(stderr,
         "prune aborted: searching subtree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTrav(yyyStackTop->node);
       return; 
      }
   for (i=0;i<yyyNattrbs;i++) rcp1[i] = rcp3[i]; 
   yyyNextCLspace = (yyyStackTop->oldestNode)->cL; 
   yyyNextNodeSpace = (char *)(yyyStackTop->oldestNode) + 
                      (n = yyyNdPrSz[yyyTypeNum]);
   cp1 = (char *)yyyStackTop->oldestNode; 
   cp2 = (char *)yyyStackTop->node; 
   for (i=0;i<n;i++) *cp1++ = *cp2++; 
   yyyStackTop->node = yyyStackTop->oldestNode; 
   (yyyStackTop->node)->refCountList = rcp1; 
   (yyyStackTop->node)->cL = yyyNextCLspace; 
  } 



void yyyGenLeaf(nAttrbs,typeNum,startP,stopP) 
  int nAttrbs,typeNum; 
  yyyWAT *startP,*stopP; 
  {
   if  (!(yyyTermBuffer.isEmpty)) yyyShift(); 
   yyyTermBuffer.isEmpty = 0;
   yyyTermBuffer.typeNum = typeNum; 
   yyyTermBuffer.nAttrbs = nAttrbs; 
   yyyTermBuffer.startP = startP; 
   yyyTermBuffer.stopP = stopP; 
   
  } 



void yyyerror()
  {yyyYok = 0; 
  } 



/* read the command line for changes in sizes of 
                  the evaluator's data structures */
void yyyCheckForResizes(argc,argv) 
  int argc; 
  char *argv[]; 
  {int i; 
   long dum; 
 
   if (!yyyPermitUserAlloc) return; 
   for (i=1;i<argc;i++) 
     { 
      if ((argv[i][0] != '-') || (argv[i][1] != 'Y')) continue; 
      if (strlen(argv[i]) < 4) goto yyyErrO1; 
      if (sscanf(argv[i]+3,"%d",&dum) != 1) goto yyyErrO1;
      if (dum < 2) dum = 2;
      switch (argv[i][2]) 
        {case yyyNSof:   yyyMaxNbytesNodeStg = dum; break; 
         case yyyRCof:   yyyMaxNrefCounts    = dum; break; 
         case yyyCLof:   yyyMaxNchildren     = dum; break; 
         case yyySof:    yyyMaxStackSize     = dum; break; 
         case yyySSALof: yyySSALspaceSize    = dum; break; 
         case yyyRSof:   yyyRSmaxSize        = dum; break; 
         case yyyTSof:   yyyTravStackMaxSize = dum; break; 
         default : goto yyyErrO1; 
        }
      continue;  
   yyyErrO1 : fprintf(stderr,"invalid command line option: %s\n",
                             argv[i] 
                     ); 
     } 
  } 
   
   
   


#define yyyLastProdNum 46


#define yyyNsorts 7


int yyyProdsInd[] = {
   0,
   0,   1,   5,  13,  25,  26,  30,  32,  33,  37,
  39,  40,  45,  46,  50,  53,  56,  61,  66,  70,
  72,  74,  79,  81,  84,  87,  90,  94,  98, 100,
 103, 106, 109, 113, 116, 120, 123, 127, 131, 133,
 138, 140, 146, 152, 159, 160,
 164,
};


int yyyProds[][2] = {
{1013,   0},{1013,   0},{1013,   0},{  21,   0},{ 537,   0},
{  21,   0},{ 619,   2},{ 431,   0},{ 114,   3},{ 769,   3},
{ 869,   0},{  63,   5},{ 124,   0},{  21,   0},{ 619,   2},
{ 462,   0},{ 787,   3},{ 786,   3},{ 900,   0},{ 431,   0},
{ 114,   3},{ 769,   3},{ 869,   0},{  63,   5},{ 124,   0},
{ 114,   3},{ 114,   3},{ 114,   3},{ 619,   2},{1203,   0},
{ 769,   3},{ 619,   2},{ 787,   3},{ 787,   3},{ 787,   3},
{ 619,   2},{1203,   0},{ 786,   3},{ 619,   2},{  63,   5},
{  63,   5},{  12,   4},{ 246,   6},{ 537,   0},{  63,   5},
{  12,   4},{  12,   4},{  12,   4},{ 619,   2},{ 597,   0},
{ 246,   6},{ 838,   0},{ 430,   7},{ 246,   6},{ 762,   0},
{ 619,   2},{ 246,   6},{ 635,   0},{ 430,   7},{ 762,   0},
{ 619,   2},{ 246,   6},{ 933,   0},{ 619,   2},{ 705,   0},
{ 430,   7},{ 246,   6},{ 286,   7},{ 705,   0},{ 430,   7},
{ 246,   6},{ 997,   7},{ 286,   7},{ 619,   2},{ 286,   7},
{ 997,   7},{ 448,   0},{ 430,   7},{ 886,   0},{ 430,   7},
{ 676,   7},{ 430,   7},{ 997,   7},{ 973,   7},{ 430,   7},
{ 997,   7},{1121,   7},{ 430,   7},{ 997,   7},{1053,   7},
{ 430,   7},{ 997,   7},{ 687,   0},{ 997,   7},{ 430,   7},
{ 997,   7},{ 705,   0},{ 997,   7},{ 676,   7},{ 997,   7},
{ 676,   7},{1165,   0},{ 676,   7},{ 676,   7},{  66,   0},
{ 676,   7},{ 973,   7},{  40,   0},{ 997,   7},{ 973,   7},
{  40,   0},{ 997,   7},{ 973,   7},{1121,   7},{ 700,   0},
{ 997,   7},{1121,   7},{ 700,   0},{ 997,   7},{1121,   7},
{1053,   7},{ 120,   0},{ 997,   7},{1053,   7},{ 120,   0},
{ 997,   7},{1053,   7},{ 997,   7},{ 431,   0},{ 430,   7},
{ 869,   0},{ 997,   7},{ 765,   1},{ 997,   7},{ 997,   7},
{ 448,   0},{ 430,   7},{ 886,   0},{ 997,   7},{ 619,   2},
{ 997,   7},{ 619,   2},{ 431,   0},{ 297,   7},{ 430,   7},
{ 869,   0},{ 997,   7},{ 619,   2},{ 462,   0},{ 297,   7},
{ 430,   7},{ 900,   0},{ 997,   7},{ 997,   7},{ 234,   0},
{ 431,   0},{ 297,   7},{ 430,   7},{ 869,   0},{ 297,   7},
{ 297,   7},{ 297,   7},{ 430,   7},{1203,   0},
};


int yyySortsInd[] = {
  0,
  0,  1,  3,  4,  5,  7, 10,
 12,
};


int yyySorts[] = {
  793,  381,  955,  146,  766,  987, 1088,  987, 1088,  121,
  882,  121,
};



char *yyyStringTab[] = {
0,0,0,0,0,
0,0,0,0,0,
0,0,"Labeldef","isVisible",0,
0,0,0,0,0,
0,"Def",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"ADD",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Stats",0,
0,"SUB",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"memmove",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"Pars",
0,0,0,0,0,
"AND","tree","y",0,"END",
0,0,0,0,0,
0,"reg",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"pars",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"strtoul",0,0,0,
0,0,0,0,0,
"LABEL",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"NULL",0,0,
0,0,0,0,0,
0,0,0,0,"AT_SIGN",
0,0,0,0,0,
0,0,0,0,0,
0,"Stat",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"Lexpr",0,0,0,
0,0,0,0,0,
0,0,"RepeatExpr",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"name",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"visibility",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"strdup",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"Expr","BRACKET_OPEN",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"SQUARED_BRACKET_OPEN",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"CURLY_BRACKET_OPEN",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"yylineno",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"SEMICOLON",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"PARAMETER",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"COLON",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"ID",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"IF",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"codegen",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"POINTER",0,0,
0,"NotOrSub",0,0,0,
0,0,0,0,0,
0,0,"GREATER",0,"invoke",
0,0,0,0,0,
0,0,0,0,0,
"MUL",0,0,0,0,
"EQUAL",0,0,0,0,
0,0,0,"strlen",0,
0,0,0,0,0,
0,"OP",0,0,0,
0,0,0,0,0,
0,"ListNode",0,0,0,
0,"newListNode","newTreeNode",0,0,
0,0,"newNumberTreeNode",0,"newRegisterTreeNode",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"GOTO",0,0,
"NUM","labels",0,0,"Par",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"ParPointer","ParsPointer",0,0,
0,0,0,"value",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"TreeNode",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"RETURN",0,
0,0,0,0,0,
0,"getNextRegister","getFirstRegister",0,0,
"register",0,0,0,0,
0,0,"VARIABLE",0,0,
0,0,0,0,0,
0,0,0,0,"BRACKET_CLOSE",
0,0,0,0,0,
0,0,0,0,0,
0,0,"ids",0,0,
0,"SQUARED_BRACKET_CLOSE",0,0,0,
0,0,0,"assembleFunction",0,
0,0,0,0,0,
"CURLY_BRACKET_CLOSE",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"if",0,
0,0,0,0,0,
0,0,0,"VAR",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"line",0,0,0,0,
0,0,0,0,0,
0,0,0,"getOffset",0,
0,0,0,"AddTerm",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"in",0,0,
0,0,0,0,0,
0,0,"Term",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Program",0,
0,0,0,0,0,
0,0,0,"yytext",0,
0,0,0,0,0,
0,0,0,0,"merge",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"AndTerm",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"out",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"MulTerm",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"burm",
0,0,0,0,0,
"add",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"NOT",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"COMMA",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"getIndex",0,
0,0,0,0,0,
0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num)+1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum,symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[(prodNum)] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num)+1] - yyySortsInd[(num)])

#define yyySortOf(prodNum,symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1]) 

#define yyyAttrbStr(prodNum,symPos,attrbNum)                      \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum,symPos)] + \
                         (attrbNum)                               \
                        ]                                         \
               ]                                                  \
  )



void yyyShowProd(i)
  int i;
  {int j,nSyms;

   nSyms = yyySizeofProd(i);
   for (j=0; j<nSyms; j++)
     {
      fprintf(stderr,"%s",yyyGSoccurStr(i,j));
      if (j == 0) fprintf(stderr," : "); else fprintf(stderr," ");
     }
   fprintf(stderr,";\n");
  }



void yyyShowProds()
  {int i; for (i=1; i<=yyyLastProdNum; i++) yyyShowProd(i);}



void yyyShowSymsAndSorts()
  {int i; 

   for (i=1; i<=yyyLastProdNum; i++) 
     {int j, nSyms;

      fprintf(stderr,
              "\n\n\n---------------------------------- %3.1d\n",i);
      /* yyyShowProd(i); */ 
      nSyms = yyySizeofProd(i); 
      for (j=0; j<nSyms; j++) 
        {int k, sortSize;

         fprintf(stderr,"%s\n",yyyGSoccurStr(i,j));
         sortSize = yyySizeofSort(yyySortOf(i,j));
         for (k=0; k<sortSize; k++) 
            fprintf(stderr,"  %s\n",yyyAttrbStr(i,j,k));
         if (j == 0) fprintf(stderr,"->\n"); 
              else 
              fprintf(stderr,"\n"); 
        }
     }
  }



void yyyCheckNodeInstancesSolved(np)
  yyyGNT *np;
  {int mysort,sortSize,i,prodNum,symPos,inTerminalNode;
   int nUnsolvedInsts = 0;

   if (np->prodNum != 0)
     {inTerminalNode = 0;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = 1;
      prodNum = ((yyyGNT *)(np->parent))->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum,symPos);
   sortSize = yyySizeofSort(mysort);
   for (i=0; i<sortSize; i++)
     if ((np->refCountList)[i] != 0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts)
     {fprintf(stderr,
      "\nFound node that has %d unsolved attribute instance(s).\n",
              nUnsolvedInsts
             );
      fprintf(stderr,"Node is labeled \"%s\".\n",
             yyyGSoccurStr(prodNum,symPos));
      if (inTerminalNode)
        {fprintf(stderr,
                 "Node is terminal.  Its parent production is:\n  ");
         yyyShowProd(prodNum);
        }
      else
        {fprintf(stderr,"Node is nonterminal.  ");
         if (((char *)(np->parent)) >= yyyNodeSpace)
           {fprintf(stderr,
                    "Node is %dth child in its parent production:\n  ",
                   np->whichSym
                  );
            yyyShowProd(((yyyGNT *)(np->parent))->prodNum);
           }
         fprintf(stderr,
                 "Node is on left hand side of this production:\n  ");
         yyyShowProd(np->prodNum);
        }
      fprintf(stderr,"The following instances are unsolved:\n");
      for (i=0; i<sortSize; i++)
        if ((np->refCountList)[i] != 0)
          fprintf(stderr,"     %-16s still has %1d dependencies.\n",
                  yyyAttrbStr(prodNum,symPos,i),(np->refCountList)[i]);
     }
  }



void yyyUnsolvedInstSearchTravAux(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCheckNodeInstancesSolved(pNode); 
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



void yyyUnsolvedInstSearchTrav(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



