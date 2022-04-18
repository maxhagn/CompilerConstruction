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

%start Program

@autoinh ids

@attributes { long value; } NUM
@attributes { char *name; int line; } ID
@attributes { ListNode *pars; } Pars Par
@attributes { ListNode *labels; } Labeldef
@attributes { ListNode *in; ListNode* out; } Stats Stat
@attributes { ListNode *ids; } Expr RepeatExpr Term AndTerm MulTerm AddTerm NotOrSub Lexpr

@traversal @postorder vis
@traversal @postorder print

%%

Program     :
            | Program Def SEMICOLON
            ;

Def         : ID BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
			@{
                @i @Stats.in@ = merge(merge(@Pars.pars@, @Par.pars@), @Stats.out@);
            @}
	    	| ID CURLY_BRACKET_OPEN Pars Par CURLY_BRACKET_CLOSE BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
	   		@{
                @i @Stats.in@ = merge(merge(@Pars.pars@, @Par.pars@), @Stats.out@);
	    	@}
            ;

Pars        :
	    	@{
                @i @Pars.pars@ = newListNode();
            @}
	    	| Pars ID COMMA
	    	@{
	        	@i @Pars.pars@ = add(@Pars.1.pars@, @ID.name@, PARAMETER, @ID.line@);
	    	@}
            ;

Par         : ID
            @{
                @i @Par.pars@ = add(newListNode(), @ID.name@, PARAMETER, @ID.line@);
	    	@}
            ;

Stats       :
			@{
            	@i @Stats.out@ = newListNode();
	    	@}
            | Labeldef Stat SEMICOLON Stats
            @{
            	@i @Stat.0.in@ = @Stats.0.in@;
            	@i @Stats.0.out@ = merge(@Labeldef.labels@, @Stats.1.out@);
            	@i @Stats.1.in@ = merge(@Stats.0.in@, @Stat.out@);
	    	@}
            ;

Labeldef    :
			@{
				@i @Labeldef.labels@ = newListNode();
			@}
	    	| Labeldef ID COLON
	    	@{
				@i @Labeldef.labels@ = add(@Labeldef.1.labels@, @ID.name@, LABEL, @ID.line@);
			@}
	    	;

Stat        : RETURN Expr
	    	@{
                @i @Expr.ids@ = @Stat.in@;
                @i @Stat.out@ = newListNode();
            @}
			| GOTO ID
			@{
				@i @Stat.out@ = newListNode();
				@vis isVisible(@Stat.in@, @ID.name@, LABEL, @ID.line@);
			@}
			| IF Expr GOTO ID
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();
				@vis isVisible(@Stat.in@, @ID.name@, LABEL, @ID.line@);
			@}
			| VAR ID EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = add(newListNode(), @ID.name@, VARIABLE, @ID.line@);
			@}
			| Lexpr EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Lexpr.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();
			@}
			| Term
			@{
				@i @Term.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();
			@}
            ;

Lexpr       : ID
			@{
                @vis isVisible(@Lexpr.ids@, @ID.name@, VARIABLE, @ID.line@);
            @}
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
            @{
				@vis isVisible(@Term.ids@, @ID.name@, VARIABLE, @ID.line@);
			@}
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