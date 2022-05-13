#include "asm_writer.h"

char *getFirstRegister() {
    return "rax";
}

char *getNextRegister(char *lastRegister) {

    if (lastRegister == NULL) {
        return "rax";
    }

    char *registers[] = {"rax", "r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi"};

    for (int i = 0; i < 8; i++) {
        if (strcmp(registers[i], lastRegister) == 0) {
            return registers[i + 1];
        }
    }

    fprintf(stderr, "No more registers available or previous register not found: '%s'\n", lastRegister);
    exit(3);
}

int get_int_len (int value){
    int l=1;
    while(value>9){ l++; value/=10; }
    return l;
}

char *getParameterRegister(int index, int offset) {
    char *registers[] = { "rdi", "rsi", "rdx", "rcx", "r8", "r9" };
    char *registerString;
    registerString = (char*) malloc(4*sizeof(char));

    if (index < 0 || index > 5) {
        fprintf(stderr, "Invalid register index specified for getParameterRegister: %i\n", index);
        exit(3);
    }

    assert(offset % 8 == 0);
    if (offset >= 8) {
        int digits = get_int_len(offset);
        registerString = (char*) realloc(registerString,(strlen(registerString)+digits+1)*sizeof(char));
        sprintf(registerString, "%d(", offset);
    }

    registerString = (char*) realloc(registerString,(strlen(registerString)+4)*sizeof(char));
    strcat(registerString,"%");
    strcat(registerString,registers[index]);

    if (offset >= 8) {
        registerString = (char*) realloc(registerString,(strlen(registerString)+1)*sizeof(char));
        strcat(registerString,")");
    }

    return registerString;
}

char* getByteRegisterName(char* name) {

    if (name == NULL) {
        return "al";
    }

    char *registers[] = { "rax", "r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi" };
    char *byteRegisters[] = { "al", "r11b", "r10b", "r9b", "r8b", "cl", "dl", "sil", "dil"  };


    for (int i = 0; i < 8; i++) {
        if (strcmp(registers[i], name) == 0) {
            return byteRegisters[i];
        }
    }

    fprintf(stderr, "Byte register not found for: '%s'", name);
    exit(3);
}

void asmFunction(char *name) {
    fprintf(stdout, "\t.global\t%s\n", name);
    fprintf(stdout, "\t.type\t%s, @function\n", name);
    fprintf(stdout, "%s:\n", name);
}

void asmAddRegister(char *src, char *dst) {
    fprintf(stdout, "\taddq\t%%%s, %%%s\n", src, dst);
}

void asmAddValue(long value, char *dst) {
    fprintf(stdout, "\taddq\t$%ld, %%%s\n", value, dst);
}

void asmSubRegister(char *src, char *dst) {
    fprintf(stdout, "\tsubq\t%%%s, %%%s\n", src, dst);
}

void asmSubValue(long value, char *dst) {
    fprintf(stdout, "\tsubq\t$%ld, %%%s\n", value, dst);
}

void asmMulRegister(char *src, char *dst) {
    fprintf(stdout, "\timulq\t%%%s, %%%s\n", src, dst);
}

void asmMulValue(long value, char *dst) {
    fprintf(stdout, "\timulq\t$%ld, %%%s\n", value, dst);
}

void asmMoveRegister(char *src, char *dst) {
    fprintf(stdout, "\tmovq\t%%%s, %%%s\n", src, dst);
}

void asmMoveValue(long value, char *dst) {
    fprintf(stdout, "\tmovq\t$%ld, %%%s\n", value, dst);
}

void asmMoveRegisterOffset(char *src, char *dst) {
    fprintf(stdout, "\tmovq\t%s, %%%s\n", src, dst);
}

void asmAndRegister(char *src, char *dst) {
    fprintf(stdout, "\tand\t%%%s, %%%s\n", src, dst);
}

void asmAndValue(long value, char *dst) {
    fprintf(stdout, "\tand\t$%ld, %%%s\n", value, dst);
}

void asmNegateRegister(char *name) {
    fprintf(stdout, "\tnegq\t%%%s\n", name);
}

void asmNotRegister(char *name) {
    fprintf(stdout, "\tnotq\t%%%s\n", name);
}

void asmReadArrayRegister(char *src, char *offset, char *dst) {
    fprintf(stdout, "\tmovq\t(%%%s, %%%s, 8), %%%s\n", src, offset, dst);
}

void asmReadArrayValue(char *src, int offset, char *dst) {
    offset = offset * 8;
    fprintf(stdout, "\tmovq\t%d(%%%s), %%%s\n", offset, src, dst);
}

void asmEqualRegister(char *first, char *second, char *dst) {
    fprintf(stdout, "\tcmp\t%%%s, %%%s\n", first, second);
    fprintf(stdout, "\tsete\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t$1, %%%s\n", dst);
}

void asmEqualValue(long value, char *second, char *dst) {
    fprintf(stdout, "\tcmp\t\t$%ld, %%%s\n", value, second);
    fprintf(stdout, "\tsete\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t$1, %%%s\n", dst);
}

void asmGreaterRegister(char *first, char *second, char *dst) {
    fprintf(stdout, "\tcmp\t\t%%%s, %%%s\n", second, first);
    fprintf(stdout, "\tsetg\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", dst);
}

void asmGreaterValueRegister(long value, char *second, char *dst) {
    fprintf(stdout, "\tcmp\t\t%%%s, $%ld\n", second, value);
    fprintf(stdout, "\tsetg\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", dst);
}

void asmGreaterRegisterValue(char *first, long value, char *dst) {
    fprintf(stdout, "\tcmp\t\t$%ld, %%%s\n", value, first);
    fprintf(stdout, "\tsetg\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", dst);
}

void asmReturn() {
    fprintf(stdout, "\tret\n");
}

void asmReturnValue(char *retRegister) {

    if (retRegister != NULL && strcmp(retRegister, "rax") != 0) {
        asmMoveRegister(retRegister, "rax");
    }

    asmReturn();
}
