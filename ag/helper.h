#include <stdio.h>

enum ErrorType {
    UNDECLARED   = 0,
    REDEFINITION = 1
};

enum IdentifierType {
    VARIABLE  = 0,
    LABEL     = 1,
    PARAMETER = 2
};

const char* errorTypeToString(short errorType);
const char* identifierTypeToString(short identifierType);
void setTerminalColorRed();
void setTerminalColorDefault();