#include "code_generator.h"

char* getFirstRegister() {
    return "rax";
}

char* getNextRegister(char* lastRegister) {

    if (lastRegister == NULL) {
        return "rax";
    }
    
    char *registers[] = { "rax", "r11", "r10", "r9", "r8", "rcx", "rdx", "rsi", "rdi" };

    for (int i = 0; i < 8; i++) {
        if (strcmp(registers[i], lastRegister) == 0) {
            return registers[i+1];
        }
    }

    fprintf(stderr, "No more registers available or previous register not found: '%s'\n", lastRegister);
    exit(3);
}

char* getParameterRegister(int index) {     
    char *registers[] = { "rdi", "rsi", "rdx", "rcx", "r8", "r9" };

    if (index >= 0 && index <= 5) {
        return registers[index];
    }

    fprintf(stderr, "Invalid register index specified for getParameterRegister: %i\n", index);
    exit(3);
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

void assembleFunctionLevel_1(char *name) {
    fprintf(stdout, "\t.global\t%s\n", name);
    fprintf(stdout, "\t.type\t%s, @function\n", name);
    fprintf(stdout, "%s:\n", name);
}

void assembleFunctionLevel_2(char *name) {
    fprintf(stdout, "\t.global\t%s\n", name);
    fprintf(stdout, "\t.type\t%s, @function\n", name);
    fprintf(stdout, "%s:\n", name);
}

void assembleAdd(char *src, char *dst) {
    fprintf(stdout, "\taddq\t%%%s, %%%s\n", src, dst);
}

void assembleAddv(long value, char *dst) {
    fprintf(stdout, "\taddq\t$%ld, %%%s\n", value, dst);
}

void assembleSub(char *src, char *dst) {
    fprintf(stdout, "\tsubq\t%%%s, %%%s\n", src, dst);
}

void assembleSubv(long value, char *dst) {
    fprintf(stdout, "\tsubq\t$%ld, %%%s\n", value, dst);
}

void assembleMul(char *src, char *dst) {
    fprintf(stdout, "\timulq\t%%%s, %%%s\n", src, dst);
}

void assembleMulv(long value, char *dst) {
    fprintf(stdout, "\timulq\t$%ld, %%%s\n", value, dst);
}

void assembleMove(char *src, char *dst) {
    fprintf(stdout, "\tmovq\t%%%s, %%%s\n", src, dst);
}

void assembleMovev(long value, char *dst) {
    fprintf(stdout, "\tmovq\t$%ld, %%%s\n", value, dst);
}

void assembleAnd(char *src, char *dst) {
    fprintf(stdout, "\tand\t%%%s, %%%s\n", src, dst);
}
void assembleAndv(long value, char *dst) {
    fprintf(stdout, "\tand\t$%ld, %%%s\n", value, dst);
}

void assembleNeg(char *name){
    fprintf(stdout, "\tnegq\t%%%s\n", name);
}

void assembleNot(char *name) {
    fprintf(stdout, "\tnotq\t%%%s\n", name);
}

void assembleAddressRead(char *src, char *dst) {
    fprintf(stdout, "\tmovq\t(%%%s), %%%s\n", src, dst); 
}

void assembleAddressReadv(long value, char *dst) {
    fprintf(stdout, "\tmovq\t($%ld), %%%s\n", value, dst); 
}

void assembleEqual(char *first, char *second, char *dst) {
    fprintf(stdout, "\tcmp\t%%%s, %%%s\n", first, second);
    fprintf(stdout, "\tsetne\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t$1, %%%s\n", dst);
    assembleNeg(dst);
}

void assembleEqualv(long value, char *second, char *dst) {
    fprintf(stdout, "\tcmp\t\t$%ld, %%%s\n", value, second);
    fprintf(stdout, "\tsetne\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", dst);
    assembleNeg(dst);
}

void assembleGreater(char *first, char *second, char *dst) {
    fprintf(stdout, "\tcmp\t\t%%%s, %%%s\n", first, second);
    fprintf(stdout, "\tsetle\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", dst);
    assembleNeg(dst);
}

void assembleGreaterFv(long value, char *second, char *dst) {
    fprintf(stdout, "\tcmp\t\t$%ld, %%%s\n", value, second);
    fprintf(stdout, "\tsetle\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", dst);
    assembleNeg(dst);
}

void assembleGreaterSv(char *first, long value, char *dst) {
    fprintf(stdout, "\tcmp\t\t$%ld, %%%s\n", value, first);
    fprintf(stdout, "\tsetnle\t%%%s\n", getByteRegisterName(dst));
    fprintf(stdout, "\tand\t\t$1, %%%s\n", dst);
    assembleNeg(dst);
}

void assembleReturn() {
    fprintf(stdout, "\tret\n");
}

void assembleReturnWithValue(char *retRegister) {
    
    if (retRegister != NULL && strcmp(retRegister, "rax") != 0) {
        assembleMove(retRegister, "rax");
    }

    assembleReturn();
}
