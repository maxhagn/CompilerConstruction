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
@autosyn tree

@attributes { long value; } NUM
@attributes { char *name; int lineNr; } ID
@attributes { ListNode *pars; } Pars Par
@attributes { ListNode *labels; } Labeldef
@attributes { ListNode *in; ListNode* out; } Stats
@attributes { ListNode *in; ListNode* out; TreeNode *tree; } Stat

@attributes { ListNode *ids; TreeNode *tree; } Expr RepeatExpr Term AndTerm MulTerm AddTerm NotOrSub Lexpr

@traversal @preorder reg
@traversal @postorder codegen
@traversal @postorder vis

%%

Program     :
            | Program Def SEMICOLON
            ;

Def         : ID BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
			@{
                @i @Stats.in@ = merge(merge(@Pars.pars@, @Par.pars@), @Stats.out@);

                @codegen @revorder(1) writeEnterFunction(@ID.name@);
            @}
	    	| ID CURLY_BRACKET_OPEN Pars Par CURLY_BRACKET_CLOSE BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
	   		@{
                @i @Stats.in@ = merge(merge(@Pars.pars@, @Par.pars@), @Stats.out@);

                @codegen @revorder(1) writeEnterFunction(@ID.name@);
	    	@}
            ;

Pars        :
	    	@{
                @i @Pars.pars@ = newListNode();
            @}
	    	| Pars ID COMMA
	    	@{
	        	@i @Pars.pars@ = add(@Pars.1.pars@, @ID.name@, PARAMETER, @ID.lineNr@);
	    	@}
            ;

Par         : ID
            @{
                @i @Par.pars@ = add(newListNode(), @ID.name@, PARAMETER, @ID.lineNr@);
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

            	@codegen invoke_burm(@Stat.tree@);
	    	@}
            ;

Labeldef    :
			@{
				@i @Labeldef.labels@ = newListNode();
			@}
	    	| Labeldef ID COLON
	    	@{
				@i @Labeldef.labels@ = add(@Labeldef.1.labels@, @ID.name@, LABEL, @ID.lineNr@);
			@}
	    	;

Stat        : RETURN Expr
	    	@{
                @i @Expr.ids@ = @Stat.in@;
                @i @Stat.out@ = newListNode();

                @i @Stat.tree@ = newTreeNode(OP_RETURN, @Expr.tree@, NULL);
				@reg @Stat.tree@->regStor = getFirstRegister();
				@reg @Expr.tree@->regStor = @Stat.tree@->regStor;
            @}
			| GOTO ID
			@{
				@i @Stat.out@ = newListNode();

				@i @Stat.tree@ = NULL;

				@vis isVisible(@Stat.in@, @ID.name@, LABEL, @ID.lineNr@);
			@}
			| IF Expr GOTO ID
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();

				@i @Stat.tree@ = NULL;

				@vis isVisible(@Stat.in@, @ID.name@, LABEL, @ID.lineNr@);
			@}
			| VAR ID EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = add(newListNode(), @ID.name@, VARIABLE, @ID.lineNr@);

				@i @Stat.tree@ = NULL;
			@}
			| Lexpr EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Lexpr.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();

				@i @Stat.tree@ = NULL;
			@}
			| Term
			@{
				@i @Term.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();

				@i @Stat.tree@ = NULL;
			@}
            ;

Lexpr       : ID
			@{
                @i @Lexpr.tree@ = NULL;

                @vis isVisible(@Lexpr.ids@, @ID.name@, VARIABLE, @ID.lineNr@);
            @}
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            @{
				@i @Lexpr.tree@ = newTreeNode(OP_AND, @Term.tree@, @Term.tree@);
			@}
            ;

Expr        : NotOrSub
			@{
				@reg @NotOrSub.tree@->regStor = @Expr.tree@->regStor;
			@}
            | Term AddTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_ADD, @Term.tree@, @AddTerm.tree@);

				@reg @Term.tree@->regStor = @Expr.tree@->regStor;
				@reg @AddTerm.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            | Term MulTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_MUL, @Term.tree@, @MulTerm.tree@);
				@reg @Term.tree@->regStor = @Expr.tree@->regStor;
				@reg @MulTerm.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            | Term AndTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_AND, @Term.tree@, @AndTerm.tree@);
				@reg @Term.tree@->regStor = @Expr.tree@->regStor;
				@reg @AndTerm.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            | Term GREATER Term
            @{
				@i @Expr.tree@ = newTreeNode(OP_LESS_EQUAL, @Term.0.tree@, @Term.1.tree@);
				@reg @Term.0.tree@->regStor = @Expr.tree@->regStor;
				@reg @Term.1.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            | Term EQUAL Term
            @{
				@i @Expr.tree@ = newTreeNode(OP_LESS_EQUAL, @Term.0.tree@, @Term.1.tree@);
				@reg @Term.0.tree@->regStor = @Expr.tree@->regStor;
				@reg @Term.1.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            ;

NotOrSub    : Term
			@{
                @reg @Term.tree@->regStor = @NotOrSub.0.tree@->regStor;
            @}
	    	| NOT NotOrSub
	    	@{
				@i @NotOrSub.0.tree@ = newTreeNode(OP_NOT, @NotOrSub.1.tree@, NULL);
				@reg @NotOrSub.1.tree@->regStor = @NotOrSub.0.tree@->regStor;
			@}
            | SUB NotOrSub
            @{
				@i @NotOrSub.0.tree@ = newTreeNode(OP_MINUS, @NotOrSub.1.tree@, NULL);
				@reg @NotOrSub.1.tree@->regStor = @NotOrSub.0.tree@->regStor;
			@}
            ;

AddTerm     : ADD Term
            | ADD Term AddTerm
            @{
				@i @AddTerm.0.tree@ = newTreeNode(OP_ADD, @Term.tree@, @AddTerm.1.tree@);
				@reg @Term.tree@->regStor = @AddTerm.0.tree@->regStor;
				@reg @AddTerm.1.tree@->regStor = getNextRegister(@AddTerm.0.tree@->regStor);
			@}
            ;

MulTerm     : MUL Term
            | MUL Term MulTerm
            @{
				@i @MulTerm.0.tree@ = newTreeNode(OP_MUL, @Term.tree@, @MulTerm.1.tree@);
				@reg @Term.tree@->regStor = @MulTerm.0.tree@->regStor;
				@reg @MulTerm.1.tree@->regStor = getNextRegister(@MulTerm.0.tree@->regStor);
			@}
            ;

AndTerm     : AND Term
            | AND Term AndTerm
            @{
				@i @AndTerm.0.tree@ = newTreeNode(OP_AND, @Term.tree@, @AndTerm.1.tree@);
				@reg @Term.tree@->regStor = @AndTerm.0.tree@->regStor;
				@reg @AndTerm.1.tree@->regStor = getNextRegister(@AndTerm.0.tree@->regStor);
			@}
            ;

Term        : BRACKET_OPEN Expr BRACKET_CLOSE
            | NUM
            @{
				@i @Term.tree@ = newNumberTreeNode(@NUM.value@);
			@}
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            @{
				@i @Term.tree@ = newTreeNode(OP_AND, @Term.1.tree@, @Term.1.tree@);
			@}
            | ID
            @{
           		@i @Term.tree@ = newRegisterTreeNode(@ID.name@, getParameterIndex(@Term.ids@, @ID.name@));

				@vis isVisible(@Term.ids@, @ID.name@, VARIABLE, @ID.lineNr@);
			@}
            | ID BRACKET_OPEN RepeatExpr Expr BRACKET_CLOSE
            @{
				@i @Term.tree@ = newRegisterTreeNode(@ID.name@, getParameterIndex(@Term.ids@, @ID.name@));
			@}
            | ID CURLY_BRACKET_OPEN RepeatExpr Expr CURLY_BRACKET_CLOSE
            @{
				@i @Term.tree@ = newRegisterTreeNode(@ID.name@, getParameterIndex(@Term.ids@, @ID.name@));
			@}
            | Term AT_SIGN BRACKET_OPEN RepeatExpr Expr BRACKET_CLOSE
            @{
				@i @Term.tree@ = newTreeNode(OP_AND, @Term.1.tree@, @Term.1.tree@);
			@}
            ;

RepeatExpr  :
			@{
				@i @RepeatExpr.tree@ = NULL;
			@}
            | RepeatExpr Expr COMMA
            @{
            	@i @RepeatExpr.tree@ = NULL;
			@}
            ;

%%

int main(void)
{
    yyparse();
    return 0;
}