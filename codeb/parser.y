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

@autoinh ids variableOffset functionName
@autosyn tree variableCount

@attributes { long value; } NUM
@attributes { char *name; int line; } ID
@attributes { long variableCount; } Def
@attributes { ListNode *pars; } Pars Par ParsPointer ParPointer
@attributes { ListNode *labels; char *functionName; } Labeldef
@attributes { ListNode *in; ListNode* out; long variableCount; long variableOffset; char *functionName; } Stats
@attributes { ListNode *in; ListNode* out; TreeNode *tree; long variableCount; long variableOffset; char *functionName; } Stat
@attributes { ListNode *ids; TreeNode *tree; char *functionName; } Expr ParamsExpr ExprLoop Term AndTerm MulTerm AddTerm NotOrSub Lexpr

@traversal @preorder register
@traversal @preorder codegen
@traversal @postorder visibility

%%

Program     :
            | Program Def SEMICOLON
            ;

Def         : ID BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
			@{
                @i @Stats.in@ = merge(3, @Pars.pars@, @Par.pars@, @Stats.out@);

				@i @Stats.variableOffset@ = 0;
				@i @Stats.functionName@ = @ID.name@;

                @codegen asmFunction(@ID.name@, @Def.variableCount@);
            @}
	    	| ID CURLY_BRACKET_OPEN ParsPointer ParPointer CURLY_BRACKET_CLOSE BRACKET_OPEN Pars Par BRACKET_CLOSE Stats END
	   		@{
                @i @Stats.in@ = merge(5, @Pars.pars@, @Par.pars@, @ParsPointer.pars@, @ParPointer.pars@, @Stats.out@);

                @i @Stats.variableOffset@ = 0;
                @i @Stats.functionName@ = @ID.name@;

                @codegen asmFunction(@ID.name@, @Def.variableCount@);
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

ParsPointer :
	    	@{
                @i @ParsPointer.pars@ = newListNode();
            @}
	    	| ParsPointer ID COMMA
	    	@{
	        	@i @ParsPointer.pars@ = add(@ParsPointer.1.pars@, @ID.name@, PARAMETER_POINTER, @ID.line@);
	    	@}
            ;

ParPointer  : ID
            @{
                @i @ParPointer.pars@ = add(newListNode(), @ID.name@, PARAMETER_POINTER, @ID.line@);
	    	@}
            ;

Stats       :
			@{
				@i @Stats.0.variableCount@ = 0;
            	@i @Stats.out@ = newListNode();
	    	@}
            | Labeldef Stat SEMICOLON Stats
            @{
            	@i @Stat.0.in@   = @Stats.0.in@;
            	@i @Stats.0.out@ = merge(2, @Labeldef.labels@, @Stats.1.out@);
            	@i @Stats.1.in@  = merge(2, @Stats.0.in@, @Stat.out@);

            	@i @Stat.variableOffset@ = @Stats.0.variableOffset@;
				@i @Stats.1.variableOffset@ = @Stat.variableCount@ + @Stats.0.variableOffset@;
            	@i @Stats.0.variableCount@ = @Stat.variableCount@ + @Stats.1.variableCount@;

				@codegen if(@Labeldef.labels@ != NULL) { asmLabelDef(@Labeldef.labels@, @Labeldef.functionName@); }
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

                @i @Stat.variableCount@ = 0;

                @i @Stat.tree@ = newTreeNode(OP_RETURN, @Expr.tree@, NULL);

				@register @Stat.tree@->reg = getRegister(NULL);
				@register @Expr.tree@->reg = @Stat.tree@->reg;
            @}
			| GOTO ID
			@{
				@i @Stat.out@ = newListNode();

				@i @Stat.variableCount@ = 0;

				@i @Stat.tree@ = newNamedTreeNode(OP_GOTO, getLabelName(@Stat.functionName@, @ID.name@), NULL, NULL);

				@visibility isVisible(@Stat.in@, @ID.name@, LABEL, @ID.line@);
			@}
			| IF Expr GOTO ID
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();

				@i @Stat.variableCount@ = 0;

				@i @Stat.tree@ = newTreeNode(OP_IF, newLabelTreeNode(getLabelName(@Stat.functionName@, @ID.name@)), @Expr.tree@);
                @register @Stat.tree@->reg = getRegister(NULL);
                @register @Expr.tree@->reg = @Stat.tree@->reg;

				@visibility isVisible(@Stat.in@, @ID.name@, LABEL, @ID.line@);
			@}
			| VAR ID EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Stat.out@ = add(newListNode(), @ID.name@, VARIABLE, @ID.line@);

				@i @Stat.variableCount@ = 1;

				@i @Stat.tree@ = newTreeNode(OP_EQUAL, newVariableTreeNode(@ID.name@, @Stat.variableOffset@), @Expr.tree@);

				@register @Stat.tree@->reg = getRegister(NULL);
				@register @Expr.tree@->reg = @Stat.tree@->reg;
			@}
			| Lexpr EQUAL Expr
			@{
				@i @Expr.ids@ = @Stat.in@;
				@i @Lexpr.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();

				@i @Stat.variableCount@ = 0;

				@i @Stat.tree@ = newTreeNode(OP_EQUAL, @Lexpr.tree@, @Expr.tree@);

				@register @Stat.tree@->reg = getRegister(NULL);
				@register @Lexpr.tree@->reg = @Stat.tree@->reg;
				@register @Expr.tree@->reg = getRegister(@Stat.tree@->reg);
			@}
			| Term
			@{
				@i @Term.ids@ = @Stat.in@;
				@i @Stat.out@ = newListNode();

				@i @Stat.variableCount@ = 0;

				@i @Stat.tree@ = newTreeNode(OP_TERM, NULL, NULL);
			@}
            ;

Lexpr       : ID
			@{
				@i @Lexpr.tree@ = getIndex(@Lexpr.ids@, @ID.name@) != -1 ? newRegisterTreeNode(@ID.name@, getIndex(@Lexpr.ids@, @ID.name@), getOffset(@Lexpr.ids@, @ID.name@)) : newVariableTreeNode(@ID.name@, getVariableOffset(@Lexpr.ids@, @ID.name@));

                @visibility isVisible(@Lexpr.ids@, @ID.name@, VARIABLE, @ID.line@);
            @}
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            @{
            	@i @Lexpr.tree@ = newTreeNode(OP_WRITE_ARRAY, @Term.0.tree@, @Expr.0.tree@);

				@register @Term.0.tree@->reg =  @Lexpr.0.tree@->reg;
				@register @Expr.0.tree@->reg = getRegister(@Lexpr.0.tree@->reg);
			@}
            ;

Expr        : NotOrSub
			@{
				@register @NotOrSub.tree@->reg = @Expr.tree@->reg;
			@}
            | Term AddTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_ADD, @Term.tree@, @AddTerm.tree@);

				@register @Term.tree@->reg = @Expr.tree@->reg;
				@register @AddTerm.tree@->reg = getRegister(@Expr.tree@->reg);
			@}
            | Term MulTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_MUL, @Term.tree@, @MulTerm.tree@);

				@register @Term.tree@->reg = @Expr.tree@->reg;
				@register @MulTerm.tree@->reg = getRegister(@Expr.tree@->reg);
			@}
            | Term AndTerm
            @{
				@i @Expr.tree@ = newTreeNode(OP_AND, @Term.tree@, @AndTerm.tree@);

				@register @Term.tree@->reg = @Expr.tree@->reg;
				@register @AndTerm.tree@->reg = getRegister(@Expr.tree@->reg);
			@}
            | Term GREATER Term
            @{
				@i @Expr.tree@ = newTreeNode(OP_GREATER, @Term.0.tree@, @Term.1.tree@);

				@register @Term.0.tree@->reg = @Expr.tree@->reg;
				@register @Term.1.tree@->reg = getRegister(@Expr.tree@->reg);
			@}
            | Term EQUAL Term
            @{
				@i @Expr.tree@ = newTreeNode(OP_EQUAL, @Term.0.tree@, @Term.1.tree@);

				@register @Term.0.tree@->reg = @Expr.tree@->reg;
				@register @Term.1.tree@->reg = getRegister(@Expr.tree@->reg);
			@}
            ;

NotOrSub    : Term
			@{
                @register @Term.tree@->reg = @NotOrSub.0.tree@->reg;
            @}
	    	| NOT NotOrSub
	    	@{
				@i @NotOrSub.0.tree@ = newTreeNode(OP_NOT, @NotOrSub.1.tree@, NULL);

				@register @NotOrSub.1.tree@->reg = @NotOrSub.0.tree@->reg;
			@}
            | SUB NotOrSub
            @{
				@i @NotOrSub.0.tree@ = newTreeNode(OP_NEG, @NotOrSub.1.tree@, NULL);

				@register @NotOrSub.1.tree@->reg = @NotOrSub.0.tree@->reg;
			@}
            ;

AddTerm     : ADD Term
            | ADD Term AddTerm
            @{
				@i @AddTerm.0.tree@ = newTreeNode(OP_ADD, @Term.tree@, @AddTerm.1.tree@);

				@register @Term.tree@->reg = @AddTerm.0.tree@->reg;
				@register @AddTerm.1.tree@->reg = getRegister(@AddTerm.0.tree@->reg);
			@}
            ;

MulTerm     : MUL Term
            | MUL Term MulTerm
            @{
				@i @MulTerm.0.tree@ = newTreeNode(OP_MUL, @Term.tree@, @MulTerm.1.tree@);

				@register @Term.tree@->reg = @MulTerm.0.tree@->reg;
				@register @MulTerm.1.tree@->reg = getRegister(@MulTerm.0.tree@->reg);
			@}
            ;

AndTerm     : AND Term
            | AND Term AndTerm
            @{
				@i @AndTerm.0.tree@ = newTreeNode(OP_AND, @Term.tree@, @AndTerm.1.tree@);

				@register @Term.tree@->reg = @AndTerm.0.tree@->reg;
				@register @AndTerm.1.tree@->reg = getRegister(@AndTerm.0.tree@->reg);
			@}
            ;

Term        : BRACKET_OPEN Expr BRACKET_CLOSE
            | NUM
            @{
				@i @Term.tree@ =  newNumberTreeNode(@NUM.value@);
			@}
            | Term SQUARED_BRACKET_OPEN Expr SQUARED_BRACKET_CLOSE
            @{
            	@i @Term.tree@ = newTreeNode(OP_READ_ARRAY, @Term.1.tree@, @Expr.0.tree@);

				@register @Term.1.tree@->reg =  @Term.0.tree@->reg;
				@register @Expr.0.tree@->reg = getRegister(@Term.0.tree@->reg);
			@}
            | ID
            @{
            	@i @Term.tree@ = getIndex(@Term.ids@, @ID.name@) != -1 ? newRegisterTreeNode(@ID.name@, getIndex(@Term.ids@, @ID.name@), getOffset(@Term.ids@, @ID.name@)) : newVariableTreeNode(@ID.name@, getVariableOffset(@Term.ids@, @ID.name@));

				@visibility isVisible(@Term.ids@, @ID.name@, VARIABLE, @ID.line@);
			@}
            | ID BRACKET_OPEN ParamsExpr BRACKET_CLOSE
            @{
				@i @Term.tree@ = newRegisterTreeNode(@ID.name@, getIndex(@Term.ids@, @ID.name@), getOffset(@Term.ids@, @ID.name@));
			@}
            | ID CURLY_BRACKET_OPEN ParamsExpr CURLY_BRACKET_CLOSE
            @{
				@i @Term.tree@ = newNamedTreeNode(OP_NEW_OBJ, @ID.name@, @ParamsExpr.tree@, NULL);

			@}
            | Term AT_SIGN BRACKET_OPEN ParamsExpr BRACKET_CLOSE
            @{
				@i @Term.tree@ = newTreeNode(OP_AND, @Term.1.tree@, @Term.1.tree@);
			@}
            ;

ParamsExpr  : Expr
			@{
				@i @ParamsExpr.tree@ = @Expr.tree@;

				@register @Expr.tree@->reg = getRegister(NULL);
				@register @ParamsExpr.tree@->reg = getRegister(@ParamsExpr.0.tree@->reg);
			@}
            | ExprLoop Expr
            @{
            	@i @ParamsExpr.tree@ = @Expr.tree@;

            	@register @Expr.tree@->reg = getRegister(NULL);
            	@register @ParamsExpr.tree@->reg = getRegister(@ParamsExpr.0.tree@->reg);

			@}
            ;

ExprLoop    : Expr COMMA
			@{
				@i @ExprLoop.tree@ = @Expr.tree@;
			@}
            | ExprLoop Expr COMMA
            @{
            	@i @ExprLoop.tree@ = newTreeNode(OP_ADD, @ExprLoop.1.tree@, @Expr.tree@);

            	@register @Expr.tree@->reg = getRegister(NULL);
            	@register @ExprLoop.tree@->reg = getRegister(@ExprLoop.0.tree@->reg);

			@}
            ;

%%

int main(void)
{
    yyparse();
    return 0;
}