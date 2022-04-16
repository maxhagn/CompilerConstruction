#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "symbol_table.h"

void yyerror(char const*);
extern int yylex();