#include "asm_writer.h"

int getIntegerLength(int value) {
    int l = 1;
    while (value > 9) {
        l++;
        value /= 10;
    }
    return l;
}

char *getParameterRegister(int paramIndex, int paramOffset) {
    char *registers[] = {"rdi", "rsi", "rdx", "rcx", "r8", "r9"};
    char *registerString;
    registerString = (char *) malloc(4 * sizeof(char));

    if (paramIndex < 0 || paramIndex > 5) {
        printColoredMessage(REGISTER);
        printf("invalid register index specified \n "
               "index must be greater or equal 0 or smaller than 6, but was %i \n", paramIndex);
        exit(3);
    }

    if (paramOffset % 8 != 0) {
        printColoredMessage(REGISTER);
        printf("invalid register offset specified \n "
               "offset must be a multiple of 8 but was %i \n", paramOffset);
        exit(3);
    }

    if (paramOffset >= 8) {
        int digits = getIntegerLength(paramOffset);
        registerString = (char *) realloc(registerString, (strlen(registerString) + digits + 1) * sizeof(char));
        sprintf(registerString, "%d(", paramOffset);
    }

    registerString = (char *) realloc(registerString, (strlen(registerString) + 4) * sizeof(char));
    strcat(registerString, "%");
    strcat(registerString, registers[paramIndex]);

    if (paramOffset >= 8) {
        registerString = (char *) realloc(registerString, (strlen(registerString) + 1) * sizeof(char));
        strcat(registerString, ")");
    }

    return registerString;
}

char *getRegister(char *lastRegister) {
    if (lastRegister == NULL) {
        return "r11";
    }

    char *registers[] = {"r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi"};

    for (int i = 0; i < 7; i++) {
        if (strcmp(registers[i], lastRegister) == 0) {
            return registers[i + 1];
        }
    }

    printColoredMessage(REGISTER);
    if (strcmp("rdi", lastRegister) == 0) {
        printf("no free register available \n "
               "%s was the last available register \n", lastRegister);
    } else {
        printf("register %s is no possible register \n "
               "the error occurred in the last register allocation \n", lastRegister);
    }

    exit(3);
}

char *getByteRegister(char *registerName) {
    if (registerName == NULL) {
        return "al";
    }

    char *registers[] = {"r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi"};
    char *byteRegisters[] = {"r11b", "r10b", "r9b", "r8b", "cl", "dl", "sil", "dil"};

    for (int i = 0; i < 7; i++) {
        if (strcmp(registers[i], registerName) == 0) {
            return byteRegisters[i];
        }
    }

    printColoredMessage(REGISTER);
    printf("no corresponding byte register found \n "
           "could not find a corresponding byte register for %s \n", registerName);
    exit(3);
}

void asmFunction(char *functionName) {
    fprintf(stdout, "\t.global\t%s\n", functionName);
    fprintf(stdout, "\t.type\t%s, @function\n", functionName);
    fprintf(stdout, "%s:\n", functionName);
}

void asmAddRegister(char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\taddq\t%%%s, %%%s\n", sourceRegister, destRegister);
}

void asmAddValue(long numValue, char *destRegister) {
    fprintf(stdout, "\taddq\t$%ld, %%%s\n", numValue, destRegister);
}

void asmSubRegister(char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\tsubq\t%%%s, %%%s\n", sourceRegister, destRegister);
}

void asmSubValue(long numValue, char *destRegister) {
    fprintf(stdout, "\tsubq\t$%ld, %%%s\n", numValue, destRegister);
}

void asmMulRegister(char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\timulq\t%%%s, %%%s\n", sourceRegister, destRegister);
}

void asmMulValue(long numValue, char *destRegister) {
    fprintf(stdout, "\timulq\t$%ld, %%%s\n", numValue, destRegister);
}

void asmMoveRegister(char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\tmovq\t%%%s, %%%s\n", sourceRegister, destRegister);
}

void asmMoveValue(long numValue, char *destRegister) {
    fprintf(stdout, "\tmovq\t$%ld, %%%s\n", numValue, destRegister);
}

void asmMoveRegisterOffset(char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\tmovq\t%s, %%%s\n", sourceRegister, destRegister);
}

void asmAndRegister(char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\tand\t%%%s, %%%s\n", sourceRegister, destRegister);
}

void asmAndValue(long numValue, char *destRegister) {
    fprintf(stdout, "\tand\t$%ld, %%%s\n", numValue, destRegister);
}

void asmEqualRegister(char *registerA, char *registerB, char *destRegister) {
    fprintf(stdout, "\tcmp\t%%%s, %%%s\n", registerA, registerB);
    fprintf(stdout, "\tsete\t%%%s\n", getByteRegister(destRegister));
    fprintf(stdout, "\tand\t$1, %%%s\n", destRegister);
}

void asmEqualValue(long numValue, char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\tcmp\t\t$%ld, %%%s\n", numValue, sourceRegister);
    fprintf(stdout, "\tsete\t%%%s\n", getByteRegister(destRegister));
    fprintf(stdout, "\tand\t$1, %%%s\n", destRegister);
}

void asmGreaterRegister(char *registerA, char *registerB, char *destRegister) {
    fprintf(stdout, "\tcmp\t\t%%%s, %%%s\n", registerB, registerA);
    fprintf(stdout, "\tsetg\t%%%s\n", getByteRegister(destRegister));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", destRegister);
}

void asmGreaterValueRegister(long numValue, char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\tcmp\t\t$%ld, %%%s\n", numValue, sourceRegister);
    fprintf(stdout, "\tsetle\t%%%s\n", getByteRegister(destRegister));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", destRegister);
}

void asmGreaterRegisterValue(char *registerA, long numValue, char *destRegister) {
    fprintf(stdout, "\tcmp\t\t$%ld, %%%s\n", numValue, registerA);
    fprintf(stdout, "\tsetg\t%%%s\n", getByteRegister(destRegister));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", destRegister);
}

void asmNegateRegister(char *sourceRegister) {
    fprintf(stdout, "\tnegq\t%%%s\n", sourceRegister);
}

void asmNotRegister(char *sourceRegister) {
    fprintf(stdout, "\tnotq\t%%%s\n", sourceRegister);
}

void asmReadArrayRegister(char *sourceRegister, char *arrayOffset, char *destRegister) {
    fprintf(stdout, "\tmovq\t(%%%s, %%%s, 8), %%%s\n", sourceRegister, arrayOffset, destRegister);
}

void asmReadArrayValue(char *sourceRegister, int arrayOffset, char *destRegister) {
    arrayOffset = arrayOffset * 8;
    fprintf(stdout, "\tmovq\t%d(%%%s), %%%s\n", arrayOffset, sourceRegister, destRegister);
}

void asmReturn() {
    fprintf(stdout, "\tret\n");
}

void asmReturnValue(char *returnRegister) {
    if (returnRegister != NULL && strcmp("rax", returnRegister) != 0) {
        asmMoveRegister(returnRegister, "rax");
    }

    asmReturn();
}
