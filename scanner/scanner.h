#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum TokenType {
    END                   = 258,
    RETURN                = 259,
    GOTO                  = 260,
    IF                    = 261,
    VAR                   = 262,
    NOT                   = 263,
    AND                   = 264,

    SEMICOLON             = 265,
    BRACKET_OPEN          = 266,
    BRACKET_CLOSE         = 267,
    CURLY_BRACKET_OPEN    = 268,
    CURLY_BRACKET_CLOSE   = 269,
    COMMA                 = 270,
    COLON                 = 271,
    EQUAL                 = 272,
    SQUARED_BRACKET_OPEN  = 273,
    SQUARED_BRACKET_CLOSE = 274,
    ADD                   = 275,
    MUL                   = 276,
    GREATER               = 277,
    SUB                   = 278,
    AT_SIGN               = 279,

    IDENTIFIER            = 280,
    DECIMAL               = 281,
    HEX                   = 282
    
};