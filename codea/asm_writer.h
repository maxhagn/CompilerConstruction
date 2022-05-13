#ifndef __ASM_WRITER_H__
#define __ASM_WRITER_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "helper.h"

char* getFirstRegister();
char* getNextRegister(char*);
char* getParameterRegister(int, int);
char* getByteRegisterName(char*);

void asmFunction(char*);

void asmAddRegister(char*, char*);
void asmAddValue(long, char*);

void asmSubRegister(char*, char*);
void asmSubValue(long, char*);

void asmMulRegister(char*, char*);
void asmMulValue(long, char*);

void asmMoveRegister(char*, char*);
void asmMoveValue(long, char*);

void asmAndRegister(char*, char*);
void asmAndValue(long, char*);

void asmNegateRegister(char*);
void asmNotRegister(char*);

void asmReadArrayRegister(char*, char*, char*);
void asmReadArrayValue(char*, int, char*);

void asmEqualRegister(char*, char*, char*);
void asmEqualValue(long, char*, char*);

void asmGreaterRegister(char*, char*, char*);
void asmGreaterValueRegister(long, char*, char*);
void asmGreaterRegisterValue(char*, long, char*);

void asmReturn();
void asmReturnValue(char*);

#endif