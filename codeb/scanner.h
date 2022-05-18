#ifndef __SCANNER_H__
#define __SCANNER_H__

#include <stdio.h>
#include <string.h>

#include "y.tab.h"
#include "symbol_list.h"
#include "grammar_tree.h"
#include "asm_writer.h"

void syntaxError(void);

#endif