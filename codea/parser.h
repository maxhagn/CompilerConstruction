#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbol_table.h"
#include "tree.h"
#include "code_generator.h"

void yyerror(char const*);
extern int yylex();
void burm_label(tree_t*);
void burm_reduce(tree_t*,int);