#ifndef __ASM_WRITER_H__
#define __ASM_WRITER_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include <stdbool.h>

#include "symbol_list.h"
#include "helper.h"

char *getParameterRegister(int, int);

char *getRegister(char *);

char *getByteRegister(char *);

void asmFunction(char *, long);

void asmAddRegister(char *, char *);

void asmAddValue(long, char *);

void asmSubRegister(char *, char *);

void asmSubValue(long, char *);

void asmMulRegister(char *, char *);

void asmMulValue(long, char *);

void asmMoveRegister(char *, char *);

void asmMoveValue(long, char *);

void asmAndRegister(char *, char *);

void asmAndValue(long, char *);

void asmEqualRegister(char *, char *, char *);

void asmEqualValue(long, char *, char *);

void asmGreaterRegister(char *, char *, char *);

void asmGreaterValueRegister(long, char *, char *);

void asmGreaterRegisterValue(char *, long, char *);

void asmNegateRegister(char *);

void asmNotRegister(char *);

void asmReadArrayRegister(char *, char *, char *);

void asmReadArrayValue(char *, int, char *);

void asmGoto(char *);

void asmLabelDef(ListNode*, char*);

void asmReturn();

void asmReturnValue(char *);

#endif