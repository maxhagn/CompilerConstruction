#include "helper.h"

const char* errorTypeToString(short errorType) {

    switch (errorType) {
        case UNDECLARED:
            return "undeclared error";
        case REDEFINITION:
            return "redefinition error";
        default:
            return "undefined error";
    }

}

const char* identifierTypeToString(short identifierType) {

    switch (identifierType) {
        case VARIABLE:
            return "variable";
        case LABEL:
            return "label";
        case PARAMETER:
            return "parameter";
        default:
            return "undefined identifier";
    }

}

void setTerminalColorRed() {
    printf("\033[0;31m");
}

void setTerminalColorDefault() {
    printf("\033[0m");
}