#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbol_list.h"
#include "tree_grammar.h"
#include "code_generator.h"

void yyerror(char const*);
extern int yylex();
extern void invoke_burm(NODEPTR_TYPE root);