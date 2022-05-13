#include "helper.h"

const char* errorTypeToString(short errorType) {

    switch (errorType) {
        case SYNTAX:
            return "syntax error";
        case PARSING:
            return "parsing error";
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

void setTerminalColorPurple() {
    printf("\033[0;35m");
}

void setTerminalColorGreen() {
    printf("\033[0;32m");
}

void setTerminalColorDefault() {
    printf("\033[0m");
}

void printColoredMessage(short errorType) {

    switch (errorType) {
        case SYNTAX:
            setTerminalColorRed();
            printf("syntax error: ");
            setTerminalColorDefault();
            break;
        case PARSING:
            setTerminalColorRed();
            printf("parsing error: ");
            setTerminalColorDefault();
            break;
        case UNDECLARED:
            setTerminalColorRed();
            printf("undeclared error: ");
            setTerminalColorDefault();
            break;
        case REDEFINITION:
            setTerminalColorRed();
            printf("redefinition error: ");
            setTerminalColorDefault();
            break;
        case HINT:
            setTerminalColorGreen();
            printf("hint: ");
            setTerminalColorDefault();
            break;
        case COMPILE:
            setTerminalColorRed();
            printf("compilation error: ");
            setTerminalColorDefault();
            break;
        default:
            setTerminalColorRed();
            printf("undefined error: ");
            setTerminalColorDefault();
            break;
    }

}