#include <stdio.h>

enum ErrorType {
    SYNTAX = 0,
    PARSING = 1,
    UNDECLARED   = 2,
    REDEFINITION = 3
};

enum IdentifierType {
    VARIABLE  = 0,
    LABEL     = 1,
    PARAMETER = 2,
    PARAMETER_POINTER = 3
};

const char* errorTypeToString(short errorType);
const char* identifierTypeToString(short identifierType);
void        setTerminalColorRed();
void        setTerminalColorPurple();
void        setTerminalColorGreen();
void        setTerminalColorDefault();