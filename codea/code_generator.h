#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

char* getFirstRegister();
char* getNextRegister(char*);
char* getParameterRegister(int, int);
char* getByteRegisterName(char*);

void assembleFunction(char*);

void assembleAdd(char*, char*);
void assembleAddv(long, char*);

void assembleSub(char*, char*);
void assembleSubv(long, char*);

void assembleMul(char*, char*);
void assembleMulv(long, char*);

void assembleMove(char*, char*);
void assembleMovev(long, char*);

void assembleAnd(char*, char*);
void assembleAndv(long, char*);

void assembleNeg(char*);
void assembleNot(char*);

void assembleAddressRead(char*, char*);
void assembleAddressReadv(long, char*);

void assembleEqual(char*, char*, char*);
void assembleEqualv(long, char*, char*);

void assembleGreater(char*, char*, char*);
void assembleGreaterFv(long, char*, char*);
void assembleGreaterSv(char*, long, char*);

void assembleReturn();
void assembleReturnWithValue(char*);


