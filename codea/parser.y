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
@attributes { char *name; int line; } ID
@attributes { ListNode *pars; } Pars Par
@attributes { ListNode *labels; } Labeldef
@attributes { ListNode *in; ListNode* out; } Stats
@attributes { ListNode *in; ListNode* out; TreeNode *tree; } Stat
@attributes { ListNode *ids; TreeNode *tree; } Expr RepeatExpr Term AndTerm MulTerm AddTerm NotOrSub Lexpr

@traversal @preorder register
@traversal @postorder codegen
@traversal @postorder visibility

%%

Program     :
            | Program Def SEMICOLON
            ;

Def         : ID BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
			@{
                @i @Stats.in@ = merge(3, @Pars.pars@, @Par.pars@, @Stats.out@);

                @codegen @revorder(1) writeEnterFunction(@ID.name@);
            @}
	    	| ID CURLY_BRACKET_OPEN Pars Par CURLY_BRACKET_CLOSE BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
	   		@{
                @i @Stats.in@ = merge(5, @Pars.0.pars@, @Par.0.pars@, @Pars.1.pars@, @Par.1.pars@, @Stats.out@);

                @codegen @revorder(1) writeEnterFunction(@ID.name@);
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
            	@i @Stat.0.in@   = @Stats.0.in@;
            	@i @Stats.0.out@ = merge(2, @Labeldef.labels@, @Stats.1.out@);
            	@i @Stats.1.in@  = merge(2, @Stats.0.in@, @Stat.out@);

            	@codegen invoke_burm(@Stat.tree@);
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

                @i @Stat.tree@ = newTreeNode(OP_RETURN, @Expr.tree@, NULL);
				@register @Stat.tree@->regStor = getFirstRegister();
				@register @Expr.tree@->regStor = @Stat.tree@->regStor;
            @}
			| GOTO ID
			@{
				@i @Stat.out@ = newListNode();

				@i @Stat.tree@ = NULL;

				@visibility isVisible(@Stat.in@, @ID.name@, LABEL, @ID.line@);
			@}
			| IF Expr GOTO ID
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();

				@i @Stat.tree@ = NULL;

				@visibility isVisible(@Stat.in@, @ID.name@, LABEL, @ID.line@);
			@}
			| VAR ID EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = add(newListNode(), @ID.name@, VARIABLE, @ID.line@);

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

                @visibility isVisible(@Lexpr.ids@, @ID.name@, VARIABLE, @ID.line@);
            @}
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            @{
				@i @Lexpr.tree@ = newTreeNode(OP_AND, @Term.tree@, @Term.tree@);
			@}
            ;

Expr        : NotOrSub
			@{
				@register @NotOrSub.tree@->regStor = @Expr.tree@->regStor;
			@}
            | Term AddTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_ADD, @Term.tree@, @AddTerm.tree@);

				@register @Term.tree@->regStor = @Expr.tree@->regStor;
				@register @AddTerm.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            | Term MulTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_MUL, @Term.tree@, @MulTerm.tree@);
				@register @Term.tree@->regStor = @Expr.tree@->regStor;
				@register @MulTerm.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            | Term AndTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_AND, @Term.tree@, @AndTerm.tree@);
				@register @Term.tree@->regStor = @Expr.tree@->regStor;
				@register @AndTerm.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            | Term GREATER Term
            @{
				@i @Expr.tree@ = newTreeNode(OP_LESS_EQUAL, @Term.0.tree@, @Term.1.tree@);
				@register @Term.0.tree@->regStor = @Expr.tree@->regStor;
				@register @Term.1.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            | Term EQUAL Term
            @{
				@i @Expr.tree@ = newTreeNode(OP_LESS_EQUAL, @Term.0.tree@, @Term.1.tree@);
				@register @Term.0.tree@->regStor = @Expr.tree@->regStor;
				@register @Term.1.tree@->regStor = getNextRegister(@Expr.tree@->regStor);
			@}
            ;

NotOrSub    : Term
			@{
                @register @Term.tree@->regStor = @NotOrSub.0.tree@->regStor;
            @}
	    	| NOT NotOrSub
	    	@{
				@i @NotOrSub.0.tree@ = newTreeNode(OP_NOT, @NotOrSub.1.tree@, NULL);
				@register @NotOrSub.1.tree@->regStor = @NotOrSub.0.tree@->regStor;
			@}
            | SUB NotOrSub
            @{
				@i @NotOrSub.0.tree@ = newTreeNode(OP_MINUS, @NotOrSub.1.tree@, NULL);
				@register @NotOrSub.1.tree@->regStor = @NotOrSub.0.tree@->regStor;
			@}
            ;

AddTerm     : ADD Term
            | ADD Term AddTerm
            @{
				@i @AddTerm.0.tree@ = newTreeNode(OP_ADD, @Term.tree@, @AddTerm.1.tree@);
				@register @Term.tree@->regStor = @AddTerm.0.tree@->regStor;
				@register @AddTerm.1.tree@->regStor = getNextRegister(@AddTerm.0.tree@->regStor);
			@}
            ;

MulTerm     : MUL Term
            | MUL Term MulTerm
            @{
				@i @MulTerm.0.tree@ = newTreeNode(OP_MUL, @Term.tree@, @MulTerm.1.tree@);
				@register @Term.tree@->regStor = @MulTerm.0.tree@->regStor;
				@register @MulTerm.1.tree@->regStor = getNextRegister(@MulTerm.0.tree@->regStor);
			@}
            ;

AndTerm     : AND Term
            | AND Term AndTerm
            @{
				@i @AndTerm.0.tree@ = newTreeNode(OP_AND, @Term.tree@, @AndTerm.1.tree@);
				@register @Term.tree@->regStor = @AndTerm.0.tree@->regStor;
				@register @AndTerm.1.tree@->regStor = getNextRegister(@AndTerm.0.tree@->regStor);
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

				@visibility isVisible(@Term.ids@, @ID.name@, VARIABLE, @ID.line@);
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