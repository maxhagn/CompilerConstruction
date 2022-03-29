
#include "scanner.h"

extern int yylex();

extern int yylineno;
extern char *yytext;

int main(void) {
    int token;
    while ((token = yylex())) {

        if (token >= END && token <= AT_SIGN) {
            fprintf(stdout, "%s", yytext);
        } else {
            switch (token) {
                case IDENTIFIER: {
                    fprintf(stdout, "id %s", yytext);
                    break;
                }
                case DECIMAL: {
                    fprintf(stdout, "num %lu", strtoul(yytext, NULL, 10));
                    break;
                }
                case HEX: {
                    if (yytext[0] == '$') {memmove(yytext, yytext+1, strlen(yytext));}
                    fprintf(stdout, "num %lu", strtoul(yytext, NULL, 16));
                    break;
                }
                default: {
                    fprintf(stderr, "Unknown token '%s' at line %d.\n", yytext, yylineno);
                    exit(1);
                    break;
                }
            }

        }
        fprintf(stdout, "\n");
    }

    return 0;
}