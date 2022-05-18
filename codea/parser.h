#ifndef __PARSER_H__
#define __PARSER_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbol_list.h"
#include "grammar_tree.h"
#include "asm_writer.h"

void yyerror(char const *);

extern int yylex();

extern void invoke_burm(NODEPTR_TYPE root);

#endif