#ifndef __HELPER_H__
#define __HELPER_H__

#include <stdio.h>

enum ErrorType {
    SYNTAX = 0,
    PARSING = 1,
    UNDECLARED = 2,
    REDEFINITION = 3,
    HINT = 4,
    COMPILE = 5,
    REGISTER = 6
};

enum IdentifierType {
    VARIABLE = 0,
    LABEL = 1,
    PARAMETER = 2,
    PARAMETER_POINTER = 3
};

enum Color {
    RED = 0,
    PURPLE = 1,
    GREEN = 2,
    DEFAULT = 3
};

const char *identifierTypeToString(short);

void setTerminalColorRed();

void setTerminalColorPurple();

void setTerminalColorGreen();

void setTerminalColorDefault();

void printColoredMessage(short);

#endif