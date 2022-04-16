#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "list.h"
#include "tree.h"
#include "code_generator.h"

void yyerror(char const*);
extern int yylex();