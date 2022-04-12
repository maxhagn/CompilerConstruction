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

%start Program

@autoinh ids

@attributes { char *name; int lineNr; } ID
@attributes { node_t *pars; } Pars Par
@attributes { node_t *labels; } Labeldef
@attributes { node_t *in; node_t* out; } Stats
@attributes { node_t *in; node_t* out; } Stat
@attributes { node_t *ids; } Expr RepeatExpr Term AndTerm MulTerm AddTerm NotOrSub Lexpr

@traversal @postorder vis
@traversal @postorder print

%%

Program     :
            | Program Def SEMICOLON
            ;

Def         : ID BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
			@{
                @i @Stats.in@ = mergeThreeDev(@Pars.pars@, @Par.pars@, @Stats.out@, "Def");
            @}
	    	| ID CURLY_BRACKET_OPEN Pars Par CURLY_BRACKET_CLOSE BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
	   		@{
                @i @Stats.in@ = mergeThreeDev(@Pars.pars@, @Par.pars@, @Stats.out@, "Def");
	    	@}
            ;

Pars        :
	    	@{
                @i @Pars.pars@ = newList();
            @}
	    	| Pars ID COMMA
	    	@{
	        	@i @Pars.pars@ = addDev(@Pars.1.pars@, @ID.name@, PARAMETER, @ID.lineNr@, "Pars - Pars ID");
	    	@}
            ;

Par         : ID
            @{
                @i @Par.pars@ = addDev(newList(), @ID.name@, PARAMETER, @ID.lineNr@, "Par - ID");
	    	@}
            ;

Stats       :
			@{
            	@i @Stats.out@ = newList();
	    	@}
            | Labeldef Stat SEMICOLON Stats
            @{
            	@i @Stat.0.in@ = @Stats.0.in@;
            	@i @Stats.0.out@ = mergeDev(@Labeldef.labels@,@Stats.1.out@, "dunnio");
            	@i @Stats.1.in@ = mergeDev(@Stats.0.in@, @Stat.out@, "Stats");
	    	@}
            ;

Labeldef    :
			@{
				@i @Labeldef.labels@ = newList();
			@}
	    	| Labeldef ID COLON
	    	@{
				@i @Labeldef.labels@ = addDev(@Labeldef.1.labels@, @ID.name@, LABEL, @ID.lineNr@, "Labeldef");
			@}
	    	;

Stat        : RETURN Expr
	    	@{
                @i @Expr.ids@ = @Stat.in@;
                @i @Stat.out@ = newList();
            @}
			| GOTO ID
			@{
				@i @Stat.out@ = newList();
				@vis isVisible(@Stat.in@, @ID.name@, LABEL, @ID.lineNr@);
			@}
			| IF Expr GOTO ID
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = newList();
				@vis isVisible(@Stat.in@, @ID.name@, LABEL, @ID.lineNr@);
			@}
			| VAR ID EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = addDev(newList(), @ID.name@, VARIABLE, @ID.lineNr@, "Stat - VAR ASSIGN");
			@}
			| Lexpr EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Lexpr.ids@ = @Stat.in@;
				@i @Stat.out@ = newList();
			@}
			| Term
			@{
				@i @Term.ids@ = @Stat.in@;
				@i @Stat.out@ = newList();
			@}
            ;

Lexpr       : ID
			@{
                @vis isVisible(@Lexpr.ids@, @ID.name@, VARIABLE, @ID.lineNr@);
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
				@vis isVisible(@Term.ids@, @ID.name@, VARIABLE, @ID.lineNr@);
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