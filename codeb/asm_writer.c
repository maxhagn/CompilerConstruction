#include "asm_writer.h"

bool withVariables = false;

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

    if (paramIndex < -1 || paramIndex > 5) {
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

void asmFunction(char *functionName, long variableCount)
{
    fprintf(stdout, "\t.global\t%s\n", functionName);
    fprintf(stdout, "\t.type\t%s, @function\n", functionName);
    fprintf(stdout, "%s:\n", functionName);

    if (variableCount > 0)
    {
        fprintf(stdout, "\tenter\t$%li, $0\n", variableCount * 8);

        withVariables = true;
    }
    else
    {
        withVariables = false;
    }
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

void asmMoveParameter(char *sourceRegister, char *destRegister) {
    fprintf(stdout, "\tmovq\t%s, %%%s\n", sourceRegister, destRegister);
}

void asmMoveValueStack(long numValue, long offset)
{
    offset = offset * 8;
    fprintf(stdout, "\tmovq\t$%ld, %ld(%%rsp)\n", numValue, offset);
}

void asmMoveRegisterStack(char *sourceRegister, long offset)
{
    offset = offset * 8;
    fprintf(stdout, "\tmovq\t%%%s, %ld(%%rsp)\n", sourceRegister, offset);
}

void asmMoveRegisterParameter(char *sourceRegister, char *destRegister)
{
    fprintf(stdout, "\tmovq\t%%%s, %%%s\n", sourceRegister, destRegister);
}

void asmMoveValueParameter(long numValue, char *destRegister) {
    fprintf(stdout, "\tmovq\t$%ld, %s\n", numValue, destRegister);
}

void asmMoveStackVariable(long offset, char *dst)
{
    fprintf(stdout, "\tmovq\t%ld(%%rsp), %%%s\n", offset, dst);
}

void asmMoveFromStack(long offset, char *dst)
{
    fprintf(stdout, "\tmovq\t%ld(%%rsp), %%%s\n", offset, dst);
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

void asmWriteArrayValue(long numValue, int arrayOffset, char *destRegister) {
    arrayOffset = arrayOffset * 8;
    fprintf(stdout, "\tmovq\t$%ld, %d(%s)\n", numValue, arrayOffset, destRegister);
}

void asmWriteArrayRegister(char *sourceRegister, int arrayOffset, char *destRegister) {
    arrayOffset = arrayOffset * 8;
    fprintf(stdout, "\tmovq\t%%%s, %d(%s)\n", sourceRegister, arrayOffset, destRegister);
}

void asmIf(char *src, char *jumpName)
{
    fprintf(stdout, "\tand \t$1, %%%s\n", getByteRegister(src));
    fprintf(stdout, "\tjz  \t%s\n", jumpName);
}

void asmGoto(char *jumpName)
{
    fprintf(stdout, "\tjmp\t%s\n", jumpName);
}

void asmReturn()
{
    if (withVariables)
    {
        fprintf(stdout, "\tleave\n");
    }

    fprintf(stdout, "\tret\n");
}

void asmLabelDef(ListNode *head) {
    ListNode *nextNode = head;
    while (nextNode != NULL) {
        fprintf(stdout, "%s: ", nextNode->name);
        nextNode = nextNode->next;
    }
    fprintf(stdout, "\n");
}

void asmReturnValue(char *returnRegister) {
    if (returnRegister != NULL && strcmp("rax", returnRegister) != 0) {
        asmMoveRegister(returnRegister, "rax");
    }

    asmReturn();
}
