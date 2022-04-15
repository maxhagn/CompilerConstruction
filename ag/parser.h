#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

enum IdentifierType {
    VARIABLE  = 0,
    LABEL     = 1,
    PARAMETER = 2
};

void yyerror(char const*);
extern int yylex();