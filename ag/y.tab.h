/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 258,
    RETURN = 259,
    GOTO = 260,
    IF = 261,
    VAR = 262,
    NOT = 263,
    AND = 264,
    SEMICOLON = 265,
    COLON = 266,
    COMMA = 267,
    BRACKET_OPEN = 268,
    BRACKET_CLOSE = 269,
    CURLY_BRACKET_OPEN = 270,
    CURLY_BRACKET_CLOSE = 271,
    SQUARED_BRACKET_OPEN = 272,
    SQUARED_BRACKET_CLOSE = 273,
    EQUAL = 274,
    ADD = 275,
    MUL = 276,
    GREATER = 277,
    SUB = 278,
    AT_SIGN = 279,
    ID = 280,
    NUM = 281
  };
#endif
/* Tokens.  */
#define END 258
#define RETURN 259
#define GOTO 260
#define IF 261
#define VAR 262
#define NOT 263
#define AND 264
#define SEMICOLON 265
#define COLON 266
#define COMMA 267
#define BRACKET_OPEN 268
#define BRACKET_CLOSE 269
#define CURLY_BRACKET_OPEN 270
#define CURLY_BRACKET_CLOSE 271
#define SQUARED_BRACKET_OPEN 272
#define SQUARED_BRACKET_CLOSE 273
#define EQUAL 274
#define ADD 275
#define MUL 276
#define GREATER 277
#define SUB 278
#define AT_SIGN 279
#define ID 280
#define NUM 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 186 "oxout.y"

struct {
struct yyySemEl *semEl;
} yyyOxAttrbs;

#line 115 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
