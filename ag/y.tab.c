/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "oxout.y"


/* output from Ox version 1.10.1 */

/* Ox-generated Attribute Grammar Evaluator parser specification
   for Yacc-compatible parser generators

   Copyright (C) 1992-1994  Kurt M. Bischoff
   Copyright (C) 2004-2022  Thomas E. Shields

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

/* As an exception to the standard GNU General Public License, you may
   create a larger work that contains the Ox Attribute Grammar Evaluator
   parser specification skeleton and distribute that work under terms of
   your own choice, so long as that work isn't itself an
   Attribute Grammar Evaluator generator using the skeleton or a
   modified version thereof as an evaluator parser specification
   skeleton.  */

/* Identify Ox output. */
#define YYYOX 1

#if defined (lint)
#include <note.h>
#endif

#line 1 "gram.y"


#include "gram.h"

#line 64 "oxout.y"

struct yyyT1 {
#line 19 "gram.y"
 char *name; int lineNr;
#line 69 "oxout.y"

};

struct yyyT2 {
#line 20 "gram.y"
 node_t *pars;
#line 76 "oxout.y"

};

struct yyyT3 {
#line 21 "gram.y"
 node_t *labels;
#line 83 "oxout.y"

};

struct yyyT4 {
#line 22 "gram.y"
 node_t *in; node_t* out;
#line 90 "oxout.y"

};

struct yyyT5 {
#line 23 "gram.y"
 node_t *in; node_t* out;
#line 97 "oxout.y"

};

struct yyyT6 {
#line 24 "gram.y"
 node_t *ids;
#line 104 "oxout.y"

};

#if defined (__cplusplus)
#include <cstring>
#include <new>
#endif

union yyyAttrbs {
  struct yyyT1 yyyAttrb1;
  struct yyyT2 yyyAttrb2;
  struct yyyT3 yyyAttrb3;
  struct yyyT4 yyyAttrb4;
  struct yyyT5 yyyAttrb5;
  struct yyyT6 yyyAttrb6;
};

#if defined (__cplusplus)
#include <cstdbool>
#include <cstdlib>
#else
#include <stdbool.h>
#include <stdlib.h>
#endif

typedef unsigned short yyyWAT;
typedef unsigned short yyyRCT;
typedef unsigned short yyyPNT;
typedef unsigned short yyyWST;
 /* funny type; as wide as the widest of yyyWAT, yyyWST, yyyRCT */
typedef unsigned short yyyFT;



struct yyySolvedSAlistCell {yyyWAT attrbNum;
                            struct yyySolvedSAlistCell *next;
                           };
typedef struct yyySolvedSAlistCell yyySSALC;

struct yyySemEl {struct yyyGenNode *node;
                 struct yyySolvedSAlistCell *solvedSAlist;
                };
typedef struct yyySemEl yyySIT;

typedef struct yyyOxAttrbs {
struct yyySemEl *semEl;
} yyyOxAttrbs;

typedef union{struct yyySemEl *stackref; struct yyyGenNode *noderef;} yyyParent;
struct yyyGenNode {yyyParent parent;
                   bool parentIsStack; /* =true =>  `(yyySIT *) parent' is referenced on the Yacc semantic stack  */
                                       /* =false => `(yyyGNT *) parent' is this node's parent node  */
                   int cLlen; /* length of child list */
                   struct yyyGenNode **cL; /* child list */
                   int refCountListLen; /* length of RCL */
                   yyyRCT *refCountList;
                   yyyPNT prodNum;
                   yyyWST whichSym; /* which child of parent? */
                   union yyyAttrbs yyyAttrbs; /* the Ox semantic attributes */
                  };
typedef struct yyyGenNode yyyGNT;
#line 166 "oxout.y"

#define yyyinit()
#line 169 "oxout.y"

struct yyyRSitem {yyyGNT *node;
                  yyyWST whichSym;
                  yyyWAT whichAttrb;
                 };

static struct yyyRSitem *yyyRS;
static long yyyRSTop = 0L;
#define yyyRSBottom 1L
static long yyyAfterRS = 1L;

#include <limits.h>
#define yyyR USHRT_MAX

#line 234 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 344 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Second part of user prologue.  */
#line 192 "oxout.y"

#include <stdio.h>
#include <stdarg.h>

bool yyyYok = true;
void yyyabort (void);

static void yyyExecuteRRsection (yyyGNT *);
static void yyyDoTraversals (yyyGNT *);
static void yyyGenIntNode (long, int, int, int, yyyOxAttrbs *, ...);
static void yyyReclaimSemStkEls (int, ...);
static void yyyAdjustINRC (long, int, long, long, yyyOxAttrbs *, ...);
static void yyyCheckUnsolvedInstTrav (yyyGNT *, long *, long *);
static void yyyUnsolvedInstSearchTravAux (yyyGNT *);
static void yyyDecorate (bool pruning);

#line 377 "y.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   101

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  98

#define YYUNDEFTOK  2
#define YYMAXUTOK   281


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   215,   215,   226,    33,    36,    40,   272,    50,    56,
     325,    66,   353,    78,    84,    89,    94,   100,   105,   111,
     118,   122,   125,   126,   127,   128,   129,   130,   133,   134,
     135,   598,   139,   620,   143,   642,   147,   150,   151,   152,
     153,   157,   158,   159,   737,   163
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "END", "RETURN", "GOTO", "IF", "VAR",
  "NOT", "AND", "SEMICOLON", "COLON", "COMMA", "BRACKET_OPEN",
  "BRACKET_CLOSE", "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE",
  "SQUARED_BRACKET_OPEN", "SQUARED_BRACKET_CLOSE", "EQUAL", "ADD", "MUL",
  "GREATER", "SUB", "AT_SIGN", "ID", "NUM", "$accept", "yyyAugNonterm",
  "Program", "Def", "Pars", "Par", "Stats", "Labeldef", "Stat", "Lexpr",
  "Expr", "NotOrSub", "AddTerm", "MulTerm", "AndTerm", "Term",
  "RepeatExpr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281
};
# endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-22)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -45,     8,    -8,   -45,    -2,    10,   -45,   -45,   -45,     2,
       2,    19,    18,    49,   -45,    33,    53,    68,    38,   -45,
     -45,    -4,    44,    -4,    56,    -4,    57,   -45,    72,    64,
       6,     2,    -4,    -4,    47,   -45,   -45,    37,   -45,    79,
      67,    71,   -45,   -45,   -45,    33,    -4,    -4,    74,    75,
     -45,    31,   -45,     3,    -4,     3,     3,     3,     3,    63,
      -4,   -45,    -4,    -4,   -45,   -45,    73,   -45,    33,    31,
      76,    31,    31,    31,    31,   -45,   -45,    65,    -9,    77,
      -4,    87,    83,   -45,    78,    80,   -45,   -45,   -45,    66,
     -45,     3,     3,     3,   -45,    31,    31,    31
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     7,     7,     4,     0,
       0,     9,     0,     0,     8,    12,     0,     0,     0,     7,
       5,     0,     0,     0,     0,     0,    40,    38,     0,     0,
      19,     0,     0,     0,    40,    14,    22,    28,    15,     0,
       0,     0,    13,    44,    44,    12,     0,     0,     0,     0,
      29,    28,    30,     0,     0,     0,     0,     0,     0,     0,
       0,    37,     0,     0,    11,    18,     0,    44,    12,    35,
       0,    27,    31,    33,    26,    16,    17,     0,     0,    39,
       0,     0,    25,    39,    23,    24,    45,    41,    42,     0,
       6,     0,     0,     0,    43,    36,    32,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -45,   -45,    -1,    -5,   -44,   -45,   -45,   -45,
     -13,    20,   -45,   -45,   -45,   -18,   -42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,     9,    12,    17,    18,    28,    29,
      35,    36,    84,    85,    82,    37,    62
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      30,    64,    63,    86,    32,    13,    10,    88,     3,    25,
      39,     6,    41,     7,    51,    51,    25,     4,    31,    33,
       8,    34,    27,    47,    81,    80,    49,    11,    34,    27,
      48,    14,    15,    65,    66,    69,   -10,    71,    72,    73,
      74,    70,    21,    22,    23,    24,    53,    76,    54,    77,
      78,    25,    50,    52,    54,    48,    55,    56,    57,    58,
      43,    48,    44,    26,    27,    16,    19,    89,    42,    38,
      43,    20,    44,    95,    96,    97,   -20,    86,    86,    87,
      94,    40,    45,    46,    59,    61,    60,    67,    75,    68,
      90,    79,    91,     0,    83,     0,   -21,     0,    92,     0,
       0,    93
};

static const yytype_int8 yycheck[] =
{
      18,    45,    44,    12,     8,    10,     7,    16,     0,    13,
      23,    13,    25,    15,    32,    33,    13,    25,    19,    23,
      10,    25,    26,    17,    68,    67,    31,    25,    25,    26,
      24,    12,    14,    46,    47,    53,     3,    55,    56,    57,
      58,    54,     4,     5,     6,     7,     9,    60,    17,    62,
      63,    13,    32,    33,    17,    24,    19,    20,    21,    22,
      13,    24,    15,    25,    26,    16,    13,    80,    11,    25,
      13,     3,    15,    91,    92,    93,    19,    12,    12,    14,
      14,    25,    10,    19,     5,    14,    19,    13,    25,    14,
       3,    18,     9,    -1,    18,    -1,    19,    -1,    20,    -1,
      -1,    21
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    29,     0,    25,    30,    13,    15,    10,    31,
      31,    25,    32,    32,    12,    14,    16,    33,    34,    13,
       3,     4,     5,     6,     7,    13,    25,    26,    35,    36,
      42,    31,     8,    23,    25,    37,    38,    42,    25,    37,
      25,    37,    11,    13,    15,    10,    19,    17,    24,    32,
      38,    42,    38,     9,    17,    19,    20,    21,    22,     5,
      19,    14,    43,    43,    33,    37,    37,    13,    14,    42,
      37,    42,    42,    42,    42,    25,    37,    37,    37,    18,
      43,    33,    41,    18,    39,    40,    12,    14,    16,    37,
       3,     9,    20,    21,    14,    42,    42,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    27,    28,    29,    29,    30,    30,    31,    31,    32,
      33,    33,    34,    34,    35,    35,    35,    35,    35,    35,
      36,    36,    37,    37,    37,    37,    37,    37,    38,    38,
      38,    39,    39,    40,    40,    41,    41,    42,    42,    42,
      42,    42,    42,    42,    43,    43
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     3,     7,    11,     0,     3,     1,
       0,     4,     0,     3,     2,     2,     4,     4,     3,     1,
       1,     4,     1,     4,     4,     4,     3,     3,     1,     2,
       2,     0,     3,     0,     3,     0,     3,     3,     1,     4,
       1,     5,     5,     6,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 216 "oxout.y"
                {
		 yyyDecorate(true);
		 yyyExecuteRRsection((yyvsp[0].yyyOxAttrbs).semEl->node);
		 yyyDoTraversals((yyvsp[0].yyyOxAttrbs).semEl->node);
		}
#line 1601 "y.tab.c"
    break;

  case 3:
#line 226 "oxout.y"
{if(yyyYok){
yyyGenIntNode(1,0,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyAdjustINRC(1,0,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1612 "y.tab.c"
    break;

  case 4:
#line 236 "oxout.y"
{if(yyyYok){
yyyGenIntNode(2,3,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(2,3,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1623 "y.tab.c"
    break;

  case 5:
#line 248 "oxout.y"
{if(yyyYok){
yyyGenIntNode(3,7,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(3,7,0,3,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(7,&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1634 "y.tab.c"
    break;

  case 6:
#line 259 "oxout.y"
{if(yyyYok){
yyyGenIntNode(4,11,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-10].yyyOxAttrbs),&(yyvsp[-9].yyyOxAttrbs),&(yyvsp[-8].yyyOxAttrbs),&(yyvsp[-7].yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(4,11,3,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-10].yyyOxAttrbs),&(yyvsp[-9].yyyOxAttrbs),&(yyvsp[-8].yyyOxAttrbs),&(yyvsp[-7].yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(11,&(yyvsp[-10].yyyOxAttrbs),&(yyvsp[-9].yyyOxAttrbs),&(yyvsp[-8].yyyOxAttrbs),&(yyvsp[-7].yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1645 "y.tab.c"
    break;

  case 7:
#line 272 "oxout.y"
{if(yyyYok){
yyyGenIntNode(5,0,1,2,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb2.pars
#line 48 "gram.y"
 = newList();
#line 278 "oxout.y"
yyyAdjustINRC(5,0,6,9,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1660 "y.tab.c"
    break;

  case 8:
#line 287 "oxout.y"
{if(yyyYok){
yyyGenIntNode(6,3,1,2,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(6,3,9,12,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1671 "y.tab.c"
    break;

  case 9:
#line 300 "oxout.y"
{if(yyyYok){
yyyGenIntNode(7,1,1,2,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb2.pars
#line 58 "gram.y"
 = addDev(newList(),
#line 306 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 58 "gram.y"
, PARAMETER,
#line 310 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[0]->yyyAttrbs.yyyAttrb1.lineNr
#line 58 "gram.y"
, "Par - ID");
#line 314 "oxout.y"
yyyAdjustINRC(7,1,12,15,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1694 "y.tab.c"
    break;

  case 10:
#line 325 "oxout.y"
{if(yyyYok){
yyyGenIntNode(8,0,2,4,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb4.out
#line 64 "gram.y"
 = newList();
#line 331 "oxout.y"
yyyAdjustINRC(8,0,15,18,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1709 "y.tab.c"
    break;

  case 11:
#line 340 "oxout.y"
{if(yyyYok){
yyyGenIntNode(9,4,2,4,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(9,4,18,27,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1720 "y.tab.c"
    break;

  case 12:
#line 353 "oxout.y"
{if(yyyYok){
yyyGenIntNode(10,0,1,3,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb3.labels
#line 76 "gram.y"
 = newList();
#line 359 "oxout.y"
yyyAdjustINRC(10,0,27,30,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1735 "y.tab.c"
    break;

  case 13:
#line 368 "oxout.y"
{if(yyyYok){
yyyGenIntNode(11,3,1,3,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(11,3,30,33,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1746 "y.tab.c"
    break;

  case 14:
#line 381 "oxout.y"
{if(yyyYok){
yyyGenIntNode(12,2,2,5,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb5.out
#line 87 "gram.y"
 = newList();
#line 387 "oxout.y"
yyyAdjustINRC(12,2,33,39,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1761 "y.tab.c"
    break;

  case 15:
#line 396 "oxout.y"
{if(yyyYok){
yyyGenIntNode(13,2,2,5,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb5.out
#line 91 "gram.y"
 = newList();
#line 402 "oxout.y"
yyyAdjustINRC(13,2,39,42,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1776 "y.tab.c"
    break;

  case 16:
#line 411 "oxout.y"
{if(yyyYok){
yyyGenIntNode(14,4,2,5,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb5.out
#line 97 "gram.y"
 = newList();
#line 417 "oxout.y"
yyyAdjustINRC(14,4,42,48,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1791 "y.tab.c"
    break;

  case 17:
#line 426 "oxout.y"
{if(yyyYok){
yyyGenIntNode(15,4,2,5,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb5.out
#line 103 "gram.y"
 = addDev(newList(),
#line 432 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 103 "gram.y"
, VARIABLE,
#line 436 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[1]->yyyAttrbs.yyyAttrb1.lineNr
#line 103 "gram.y"
, "Stat - VAR ASSIGN");
#line 440 "oxout.y"
yyyAdjustINRC(15,4,48,54,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1814 "y.tab.c"
    break;

  case 18:
#line 449 "oxout.y"
{if(yyyYok){
yyyGenIntNode(16,3,2,5,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb5.out
#line 109 "gram.y"
 = newList();
#line 455 "oxout.y"
yyyAdjustINRC(16,3,54,63,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1829 "y.tab.c"
    break;

  case 19:
#line 464 "oxout.y"
{if(yyyYok){
yyyGenIntNode(17,1,2,5,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb5.out
#line 114 "gram.y"
 = newList();
#line 470 "oxout.y"
yyyAdjustINRC(17,1,63,69,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1844 "y.tab.c"
    break;

  case 20:
#line 481 "oxout.y"
{if(yyyYok){
yyyGenIntNode(18,1,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(18,1,69,69,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1855 "y.tab.c"
    break;

  case 21:
#line 492 "oxout.y"
{if(yyyYok){
yyyGenIntNode(19,4,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(19,4,69,75,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1866 "y.tab.c"
    break;

  case 22:
#line 504 "oxout.y"
{if(yyyYok){
yyyGenIntNode(20,1,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(20,1,75,78,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1877 "y.tab.c"
    break;

  case 23:
#line 514 "oxout.y"
{if(yyyYok){
yyyGenIntNode(21,4,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(21,4,78,87,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1888 "y.tab.c"
    break;

  case 24:
#line 524 "oxout.y"
{if(yyyYok){
yyyGenIntNode(22,4,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(22,4,87,96,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1899 "y.tab.c"
    break;

  case 25:
#line 534 "oxout.y"
{if(yyyYok){
yyyGenIntNode(23,4,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(23,4,96,105,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1910 "y.tab.c"
    break;

  case 26:
#line 544 "oxout.y"
{if(yyyYok){
yyyGenIntNode(24,3,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(24,3,105,111,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1921 "y.tab.c"
    break;

  case 27:
#line 554 "oxout.y"
{if(yyyYok){
yyyGenIntNode(25,3,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(25,3,111,117,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1932 "y.tab.c"
    break;

  case 28:
#line 566 "oxout.y"
{if(yyyYok){
yyyGenIntNode(26,1,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(26,1,117,120,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1943 "y.tab.c"
    break;

  case 29:
#line 576 "oxout.y"
{if(yyyYok){
yyyGenIntNode(27,2,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(27,2,120,123,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1954 "y.tab.c"
    break;

  case 30:
#line 586 "oxout.y"
{if(yyyYok){
yyyGenIntNode(28,2,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(28,2,123,126,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1965 "y.tab.c"
    break;

  case 31:
#line 598 "oxout.y"
{if(yyyYok){
yyyGenIntNode(29,0,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyAdjustINRC(29,0,126,126,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1976 "y.tab.c"
    break;

  case 32:
#line 608 "oxout.y"
{if(yyyYok){
yyyGenIntNode(30,3,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(30,3,126,132,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1987 "y.tab.c"
    break;

  case 33:
#line 620 "oxout.y"
{if(yyyYok){
yyyGenIntNode(31,0,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyAdjustINRC(31,0,132,132,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1998 "y.tab.c"
    break;

  case 34:
#line 630 "oxout.y"
{if(yyyYok){
yyyGenIntNode(32,3,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(32,3,132,138,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2009 "y.tab.c"
    break;

  case 35:
#line 642 "oxout.y"
{if(yyyYok){
yyyGenIntNode(33,0,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyAdjustINRC(33,0,138,138,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 2020 "y.tab.c"
    break;

  case 36:
#line 652 "oxout.y"
{if(yyyYok){
yyyGenIntNode(34,3,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(34,3,138,144,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2031 "y.tab.c"
    break;

  case 37:
#line 664 "oxout.y"
{if(yyyYok){
yyyGenIntNode(35,3,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(35,3,144,147,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2042 "y.tab.c"
    break;

  case 38:
#line 674 "oxout.y"
{if(yyyYok){
yyyGenIntNode(36,1,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(36,1,147,147,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 2053 "y.tab.c"
    break;

  case 39:
#line 684 "oxout.y"
{if(yyyYok){
yyyGenIntNode(37,4,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(37,4,147,153,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2064 "y.tab.c"
    break;

  case 40:
#line 694 "oxout.y"
{if(yyyYok){
yyyGenIntNode(38,1,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(38,1,153,153,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 2075 "y.tab.c"
    break;

  case 41:
#line 705 "oxout.y"
{if(yyyYok){
yyyGenIntNode(39,5,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(39,5,153,159,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(5,&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2086 "y.tab.c"
    break;

  case 42:
#line 715 "oxout.y"
{if(yyyYok){
yyyGenIntNode(40,5,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(40,5,159,165,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(5,&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2097 "y.tab.c"
    break;

  case 43:
#line 725 "oxout.y"
{if(yyyYok){
yyyGenIntNode(41,6,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(41,6,165,174,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(6,&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2108 "y.tab.c"
    break;

  case 44:
#line 737 "oxout.y"
{if(yyyYok){
yyyGenIntNode(42,0,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyAdjustINRC(42,0,174,174,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 2119 "y.tab.c"
    break;

  case 45:
#line 747 "oxout.y"
{if(yyyYok){
yyyGenIntNode(43,3,1,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(43,3,174,180,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2130 "y.tab.c"
    break;


#line 2134 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 166 "gram.y"


int main(void)
{
    yyparse();
    return 0;
}
#line 764 "oxout.y"
/* The maximum size of the Ready Set. */
static long yyyRSmaxSize =        0L;
/* The maximum size of the postdecoration-traversal stack; */
/* needed for a depth-first traversal of the parse tree. */
static long yyyTravStackMaxSize = 1000L;

#define yyyLambdaSSAL (yyySSALC *) NULL
static yyySSALC *yyySSALCfreeList = yyyLambdaSSAL;



static yyyFT yyyRCIL[] = {
5,0,3, 9,0,3, yyyR,0,0, yyyR,0,1, yyyR,0,0, yyyR,1,0,
yyyR,1,2, 1,0,1, 3,0,2, yyyR,0,0, yyyR,0,1, yyyR,1,0,
1,0,1, yyyR,1,0, yyyR,1,0, 1,0,1, yyyR,1,0, 3,0,1,
yyyR,1,0, 0,0,1, 2,0,1, yyyR,1,0, 0,0,1, 0,0,1,
2,0,1, 0,0,1, 0,0,1, 2,0,1, 3,0,1, 0,0,1,
2,0,1, 3,0,1, 0,0,1, 2,0,1, 3,0,1, 0,0,1,
2,0,1, 0,0,1, 2,0,1, 0,0,1, 1,0,1, 1,0,1,
0,0,1, 2,0,1, 0,0,1, 2,0,1, 0,0,1, 2,0,1,
1,0,1, 0,0,1, 2,0,1, 2,0,1, 3,0,1, 2,0,1,
3,0,1, 0,0,1, 3,0,1, 4,0,1, 0,0,1, 1,0,1,

};

static short yyyIIIEL[] = {0,
0,1,5,13,25,26,30,32,33,38,
39,43,46,49,54,59,63,65,67,72,
74,79,84,89,93,97,99,102,105,106,
110,111,115,116,120,124,126,131,133,139,
145,152,153,
};

static long yyyIIEL[] = {
0,0,0,0,0,0,0,2,2,3,4,4,
6,6,6,8,8,9,10,10,10,11,12,12,
14,14,15,16,17,19,19,20,22,24,26,27,
29,29,31,32,33,34,36,36,38,38,39,41,
41,43,45,45,46,46,48,50,50,52,52,53,
55,56,56,57,59,60,61,63,64,65,65,66,
66,67,68,69,70,70,71,72,73,74,74,75,
76,77,78,78,79,80,81,82,82,83,84,85,
85,86,87,88,89,89,90,91,91,92,93,94,
95,95,96,97,98,99,99,100,101,102,103,103,
104,105,105,106,106,107,107,108,109,109,110,110,
111,113,114,116,116,117,118,118,119,121,121,122,
123,123,124,125,125,125,126,127,127,128,129,130,
131,
};

static long yyyIEL[] = {
0,0,0,2,4,4,6,6,
6,8,10,10,10,10,12,12,
12,14,16,18,18,20,22,22,
22,26,26,28,28,30,30,32,
32,32,34,36,38,40,40,40,
40,40,40,40,42,42,42,42,
42,44,44,46,48,48,52,52,
52,52,54,54,54,54,54,54,
58,58,58,60,60,66,66,66,
66,72,72,72,72,78,78,78,
78,82,82,82,86,86,86,88,
88,90,90,92,92,92,96,96,
96,96,100,100,100,100,104,104,
104,106,106,106,110,110,110,110,
110,110,114,114,114,114,114,118,
118,118,118,118,124,124,124,124,
124,128,128,128,
};

static yyyFT yyyEntL[] = {
6,0,6,0,6,0,10,0,10,0,10,0,0,0,0,0,
0,0,0,0,0,0,4,0,2,0,0,1,4,0,0,1,
0,0,0,0,0,0,2,0,2,0,4,0,0,1,0,1,
1,0,3,0,1,0,3,0,1,0,1,0,4,0,3,0,
1,0,4,0,3,0,1,0,4,0,3,0,1,0,3,0,
1,0,3,0,1,0,1,0,2,0,2,0,3,0,1,0,
3,0,1,0,3,0,1,0,2,0,3,0,1,0,4,0,
3,0,4,0,3,0,5,0,4,0,1,0,2,0,1,0,

};

/* GCC (and some other compilers) define '__attribute__', but */
/* just in case '__attribute__' isn't defined, make a dummy.  */
#if !(defined (__GNUC__) || defined (__attribute__))
#define __attribute__(p) /* nothing */
#endif

static __attribute__((__noreturn__)) void yyyfatal (const char *fmt, ...)
  {va_list ap;
   va_start (ap, fmt);
   (void) vfprintf (stderr, fmt, ap);
   va_end (ap);
   exit (EXIT_FAILURE);
#if defined (S_SPLINT_S)
   /*@notreached@*/ ;
#elif defined (lint)
   NOTE(NOTREACHED)
#elif defined (__GNUC__)
   __builtin_unreachable ();
#endif
  }



static void yyySignalEnts (yyyGNT *node, long startP, long stopP)
  {yyyGNT *dumNode;

   while (startP < stopP)
     {if (yyyEntL[startP]==0) dumNode = node;
      else dumNode = (node->cL)[yyyEntL[startP]-1];
      if ((--((dumNode->refCountList)[yyyEntL[startP +1]]))==0)
         {if (++yyyRSTop==yyyAfterRS)
             {/* reallocate 'yyyRS' data structure */
#if defined (__cplusplus)
              long oldRSmaxSize = yyyRSmaxSize;
              yyyRSmaxSize += 500L;
              try {
                 struct yyyRSitem *newRS =
                    new struct yyyRSitem [yyyRSmaxSize +1];
                 for (int i = 0; i < oldRSmaxSize; i++)
                    newRS [i] = yyyRS [i];
                 delete[] yyyRS; yyyRS = newRS;
              } catch (std::bad_alloc) {
                 yyyfatal ("error in Ox Ready Set space allocation\n");
              }
#else /* !defined (__cplusplus) */
              yyyRSmaxSize += 500L;
              if ((yyyRS =
                   (struct yyyRSitem *) realloc (yyyRS,
                                                 (size_t) ((size_t) (yyyRSmaxSize +1) * sizeof (struct yyyRSitem)))
                  )==(struct yyyRSitem *) NULL
                 )
                 yyyfatal ("realloc error in Ox Ready Set space allocation\n");
#endif /* !defined (__cplusplus) */
              yyyAfterRS = yyyRSmaxSize +1;
             }
          yyyRS[yyyRSTop].node = dumNode;
          yyyRS[yyyRSTop].whichSym = yyyEntL[startP];
          yyyRS[yyyRSTop].whichAttrb = yyyEntL[startP +1];
         }
      startP += 2;
     }
  }



static void yyyDecorate (bool pruning)
  {



#define yyyDECORfREQ 50



   static unsigned short intNodeCount = yyyDECORfREQ;
   if (--intNodeCount==0)
      intNodeCount = yyyDECORfREQ;
   else
      if (!pruning) return;
   while (yyyRSTop >= yyyRSBottom)
     {
yyyWST whichSym; yyyWAT whichAttrb;
yyyGNT *RSTopNode, *RSNode;
yyyParent RSTopParent;


RSTopParent = (RSTopNode = yyyRS[yyyRSTop].node)->parent;
RSNode = ((whichSym = (yyyRS[yyyRSTop].whichSym))!=0) ? RSTopParent.noderef : RSTopNode;
whichAttrb = yyyRS[yyyRSTop].whichAttrb;
yyyRSTop--;
switch (RSNode->prodNum) {
case 3:  /***Yacc rule 3***/
  switch (whichSym) {
  case 6:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb4.in
#line 38 "gram.y"
 = mergeThreeDev(
#line 946 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb2.pars
#line 38 "gram.y"
,
#line 950 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb2.pars
#line 38 "gram.y"
,
#line 954 "oxout.y"
RSNode->cL[5]->yyyAttrbs.yyyAttrb4.out
#line 38 "gram.y"
, "Def");
#line 958 "oxout.y"
    break;
    }
  break;
  }
break;
case 4:  /***Yacc rule 4***/
  switch (whichSym) {
  case 10:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb4.in
#line 42 "gram.y"
 = mergeThreeDev(
#line 972 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb2.pars
#line 42 "gram.y"
,
#line 976 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb2.pars
#line 42 "gram.y"
,
#line 980 "oxout.y"
RSNode->cL[9]->yyyAttrbs.yyyAttrb4.out
#line 42 "gram.y"
, "Def");
#line 984 "oxout.y"
    break;
    }
  break;
  }
break;
case 5:  /***Yacc rule 5***/
  switch (whichSym) {
  }
break;
case 6:  /***Yacc rule 6***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb2.pars
#line 52 "gram.y"
 = addDev(
#line 1002 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb2.pars
#line 52 "gram.y"
,
#line 1006 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 52 "gram.y"
, PARAMETER,
#line 1010 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb1.lineNr
#line 52 "gram.y"
, "Pars - Pars ID");
#line 1014 "oxout.y"
    break;
    }
  break;
  }
break;
case 7:  /***Yacc rule 7***/
  switch (whichSym) {
  }
break;
case 8:  /***Yacc rule 8***/
  switch (whichSym) {
  }
break;
case 9:  /***Yacc rule 9***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb4.out
#line 69 "gram.y"
 = mergeDev(
#line 1036 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb3.labels
#line 69 "gram.y"
,
#line 1040 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb4.out
#line 69 "gram.y"
, "dunnio");
#line 1044 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb5.in
#line 68 "gram.y"
 =
#line 1054 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb4.in
#line 68 "gram.y"
;
#line 1058 "oxout.y"
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb4.in
#line 70 "gram.y"
 = mergeDev(
#line 1068 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb4.in
#line 70 "gram.y"
,
#line 1072 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb5.out
#line 70 "gram.y"
, "Stats");
#line 1076 "oxout.y"
    break;
    }
  break;
  }
break;
case 10:  /***Yacc rule 10***/
  switch (whichSym) {
  }
break;
case 11:  /***Yacc rule 11***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb3.labels
#line 80 "gram.y"
 = addDev(
#line 1094 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb3.labels
#line 80 "gram.y"
,
#line 1098 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 80 "gram.y"
, LABEL,
#line 1102 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb1.lineNr
#line 80 "gram.y"
, "Labeldef");
#line 1106 "oxout.y"
    break;
    }
  break;
  }
break;
case 12:  /***Yacc rule 12***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 86 "gram.y"
 =
#line 1120 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 86 "gram.y"
;
#line 1124 "oxout.y"
    break;
    }
  break;
  }
break;
case 13:  /***Yacc rule 13***/
  switch (whichSym) {
  }
break;
case 14:  /***Yacc rule 14***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 96 "gram.y"
 =
#line 1142 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 96 "gram.y"
;
#line 1146 "oxout.y"
    break;
    }
  break;
  }
break;
case 15:  /***Yacc rule 15***/
  switch (whichSym) {
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 102 "gram.y"
 =
#line 1160 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 102 "gram.y"
;
#line 1164 "oxout.y"
    break;
    }
  break;
  }
break;
case 16:  /***Yacc rule 16***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 108 "gram.y"
 =
#line 1178 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 108 "gram.y"
;
#line 1182 "oxout.y"
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 107 "gram.y"
 =
#line 1192 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 107 "gram.y"
;
#line 1196 "oxout.y"
    break;
    }
  break;
  }
break;
case 17:  /***Yacc rule 17***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids
#line 113 "gram.y"
 =
#line 1210 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 113 "gram.y"
;
#line 1214 "oxout.y"
    break;
    }
  break;
  }
break;
case 18:  /***Yacc rule 18***/
  switch (whichSym) {
  }
break;
case 19:  /***Yacc rule 19***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 20:  /***Yacc rule 20***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 21:  /***Yacc rule 21***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 22:  /***Yacc rule 22***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 23:  /***Yacc rule 23***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 24:  /***Yacc rule 24***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 25:  /***Yacc rule 25***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 26:  /***Yacc rule 26***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 27:  /***Yacc rule 27***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 28:  /***Yacc rule 28***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 29:  /***Yacc rule 29***/
  switch (whichSym) {
  }
break;
case 30:  /***Yacc rule 30***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 31:  /***Yacc rule 31***/
  switch (whichSym) {
  }
break;
case 32:  /***Yacc rule 32***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 33:  /***Yacc rule 33***/
  switch (whichSym) {
  }
break;
case 34:  /***Yacc rule 34***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 35:  /***Yacc rule 35***/
  switch (whichSym) {
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 36:  /***Yacc rule 36***/
  switch (whichSym) {
  }
break;
case 37:  /***Yacc rule 37***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 38:  /***Yacc rule 38***/
  switch (whichSym) {
  }
break;
case 39:  /***Yacc rule 39***/
  switch (whichSym) {
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 40:  /***Yacc rule 40***/
  switch (whichSym) {
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 41:  /***Yacc rule 41***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 5:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
case 42:  /***Yacc rule 42***/
  switch (whichSym) {
  }
break;
case 43:  /***Yacc rule 43***/
  switch (whichSym) {
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.ids = RSNode->yyyAttrbs.yyyAttrb6.ids;
    break;
    }
  break;
  }
break;
} /* switch */

if (whichSym!=0) /* the just-solved instance was inherited. */
   {if (RSTopNode->prodNum!=0)
       {long iDum = yyyIIEL[yyyIIIEL[RSTopNode->prodNum]] + whichAttrb;
        yyySignalEnts (RSTopNode, yyyIEL[iDum],
                                  yyyIEL[iDum +1]
                      );
       }
   }
else     /* the just-solved instance was synthesized. */
   {if (!(RSTopNode->parentIsStack)) /* node has a parent. */
       {long iDum = yyyIIEL[yyyIIIEL[RSTopParent.noderef->prodNum] +
                          RSTopNode->whichSym
                         ] +
                  whichAttrb;
        yyySignalEnts (RSTopParent.noderef,
                       yyyIEL[iDum],
                       yyyIEL[iDum +1]
                      );
       }
    else   /* node is still on the stack--it has no parent yet. */
       {yyySSALC **pL = &(RSTopParent.stackref->solvedSAlist);
        yyySSALC *iDum;
        if (yyySSALCfreeList==yyyLambdaSSAL)
#if defined (__cplusplus)
            try {
               iDum = new yyySSALC;
            } catch (std::bad_alloc) {
               yyyfatal ("error in Ox Stack Solved List space allocation\n");
            }
#else
           {iDum = (yyySSALC *) malloc ((size_t) sizeof (yyySSALC));
            if (iDum==yyyLambdaSSAL)
               yyyfatal ("malloc error in Ox Stack Solved List space allocation\n");
           }
#endif
        else
           {iDum = yyySSALCfreeList;
            yyySSALCfreeList = yyySSALCfreeList->next;
           }
        iDum->next = *pL;
        iDum->attrbNum = (yyyWAT) whichAttrb;
        *pL = iDum;
       }
   }

     }
  }




#define yyyCondStg unsigned char conds;
#define yyyClearConds {travStack[travStkPtr].conds = 0;}
#define yyySetCond(n) {travStack[travStkPtr].conds |= (1<<(n));}
#define yyyCond(n) (((travStack[travStkPtr].conds & (1<<(n)))!=0)?1:0)



struct yyyTravStackItem {yyyGNT *node;
                         bool isReady;
                         yyyCondStg
                        };



static void yyyDoTraversals(yyyGNT *rootNode)
{struct yyyTravStackItem *travStack;
 long travStkPtr,afterTravStack;
 yyyGNT *travNode,**cLptr2;
 bool righttoleft=false; int pass;
 int i;

 if (!yyyYok) return;
 if ((travStack =
                 ((struct yyyTravStackItem *)
                  calloc((size_t)yyyTravStackMaxSize,
                         (size_t)sizeof(struct yyyTravStackItem)
                        )
                 )
     )
     ==
     (struct yyyTravStackItem *) NULL
    )
    yyyfatal("malloc error in Ox Traversal Stack allocation\n");

afterTravStack = yyyTravStackMaxSize;
#define yyyTSBottom 1L


for (int travN=0; travN<2; travN++) {
travStkPtr = 1L;
travStack[travStkPtr].node = rootNode;
travStack[travStkPtr].isReady = false;
yyyClearConds

while(travStkPtr >= yyyTSBottom)
  {travNode = travStack[travStkPtr].node;
   if (travStack[travStkPtr].isReady)
      {pass = 1;
       goto travSwitch;
popTravStack:
       travStkPtr--;
      }
   else
      {pass = 0;
       goto travSwitch;
pushTravStack:
       travStack[travStkPtr].isReady = true;
       if (travNode->prodNum!=0)
          {if (righttoleft)
             {cLptr2 = travNode->cL;
              i = travNode->cLlen;
              while ((i--)>0)
                {if (++travStkPtr == afterTravStack)
                    {/* realloc `travStack' data structure */
                     yyyTravStackMaxSize += 500L;
                     if ((travStack = (struct yyyTravStackItem *)
                          realloc(travStack,
                                  (size_t)((size_t)yyyTravStackMaxSize*sizeof(struct yyyTravStackItem)))
                         ) == (struct yyyTravStackItem *) NULL)
                        yyyfatal("malloc error in Ox Traversal Stack allocation\n");
                     afterTravStack = yyyTravStackMaxSize;
                    }
                 travStack[travStkPtr].node = *cLptr2;
                 travStack[travStkPtr].isReady = false;
                 yyyClearConds
                 cLptr2++;
                }
             } /* right to left */
          else  /* left to right */
             {i = travNode->cLlen;
              cLptr2 = travNode->cL + i;
              while ((i--)>0)
                {cLptr2--;
                 if (++travStkPtr == afterTravStack)
                    {/* realloc `travStack' data structure */
                     yyyTravStackMaxSize += 500L;
                     if ((travStack = (struct yyyTravStackItem *)
                          realloc(travStack,
                                  (size_t)((size_t)yyyTravStackMaxSize*sizeof(struct yyyTravStackItem)))
                         ) == (struct yyyTravStackItem *) NULL)
                        yyyfatal("malloc error in Ox Traversal Stack allocation\n");
                     afterTravStack = yyyTravStackMaxSize;
                    }
                  travStack[travStkPtr].node = *cLptr2;
                  travStack[travStkPtr].isReady = false;
                  yyyClearConds
                }
             } /* left to right */
          }
      } /* else */
   continue;
travSwitch:
				switch(travNode->prodNum)	{
case 1:  /***Yacc rule 1***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 2:  /***Yacc rule 2***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 3:  /***Yacc rule 3***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 4:  /***Yacc rule 4***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 5:  /***Yacc rule 5***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 6:  /***Yacc rule 6***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 7:  /***Yacc rule 7***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 8:  /***Yacc rule 8***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 9:  /***Yacc rule 9***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 10:  /***Yacc rule 10***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 11:  /***Yacc rule 11***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 12:  /***Yacc rule 12***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 13:  /***Yacc rule 13***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
#if (__APPLE__ && __clang__ && defined (__apple_build_version__) && __clang_major__ > 11) || \
    (__linux__ && __GNUC__ > 6)
/* Apple Xcode 10 & 11 gcc (tested):
   warning: declaration does not declare anything
   GNU 4, 5 & 6 gcc (tested):
   error: expected primary-expression before '__attribute__'
 */
__attribute__((fallthrough));
#elif defined (S_SPLINT_S)
/*@fallthrough@*/
#elif defined (lint)
NOTE(FALLTHROUGH)
#endif
				case 1:
if (yyyCond(0) != pass) {
#line 92 "gram.y"
isVisible(
#line 1966 "oxout.y"
travNode->yyyAttrbs.yyyAttrb5.in
#line 92 "gram.y"
,
#line 1970 "oxout.y"
travNode->cL[1]->yyyAttrbs.yyyAttrb1.name
#line 92 "gram.y"
, LABEL,
#line 1974 "oxout.y"
travNode->cL[1]->yyyAttrbs.yyyAttrb1.lineNr
#line 92 "gram.y"
);
#line 1978 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 14:  /***Yacc rule 14***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
#if (__APPLE__ && __clang__ && defined (__apple_build_version__) && __clang_major__ > 11) || \
    (__linux__ && __GNUC__ > 6)
/* Apple Xcode 10 & 11 gcc (tested):
   warning: declaration does not declare anything
   GNU 4, 5 & 6 gcc (tested):
   error: expected primary-expression before '__attribute__'
 */
__attribute__((fallthrough));
#elif defined (S_SPLINT_S)
/*@fallthrough@*/
#elif defined (lint)
NOTE(FALLTHROUGH)
#endif
				case 1:
if (yyyCond(0) != pass) {
#line 98 "gram.y"
isVisible(
#line 2015 "oxout.y"
travNode->yyyAttrbs.yyyAttrb5.in
#line 98 "gram.y"
,
#line 2019 "oxout.y"
travNode->cL[3]->yyyAttrbs.yyyAttrb1.name
#line 98 "gram.y"
, LABEL,
#line 2023 "oxout.y"
travNode->cL[3]->yyyAttrbs.yyyAttrb1.lineNr
#line 98 "gram.y"
);
#line 2027 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 15:  /***Yacc rule 15***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 16:  /***Yacc rule 16***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 17:  /***Yacc rule 17***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 18:  /***Yacc rule 18***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
#if (__APPLE__ && __clang__ && defined (__apple_build_version__) && __clang_major__ > 11) || \
    (__linux__ && __GNUC__ > 6)
/* Apple Xcode 10 & 11 gcc (tested):
   warning: declaration does not declare anything
   GNU 4, 5 & 6 gcc (tested):
   error: expected primary-expression before '__attribute__'
 */
__attribute__((fallthrough));
#elif defined (S_SPLINT_S)
/*@fallthrough@*/
#elif defined (lint)
NOTE(FALLTHROUGH)
#endif
				case 1:
if (yyyCond(0) != pass) {
#line 120 "gram.y"
isVisible(
#line 2115 "oxout.y"
travNode->yyyAttrbs.yyyAttrb6.ids
#line 120 "gram.y"
,
#line 2119 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 120 "gram.y"
, VARIABLE,
#line 2123 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb1.lineNr
#line 120 "gram.y"
);
#line 2127 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 19:  /***Yacc rule 19***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 20:  /***Yacc rule 20***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 21:  /***Yacc rule 21***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 22:  /***Yacc rule 22***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 23:  /***Yacc rule 23***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 24:  /***Yacc rule 24***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 25:  /***Yacc rule 25***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 26:  /***Yacc rule 26***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 27:  /***Yacc rule 27***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 28:  /***Yacc rule 28***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 29:  /***Yacc rule 29***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 30:  /***Yacc rule 30***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 31:  /***Yacc rule 31***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 32:  /***Yacc rule 32***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 33:  /***Yacc rule 33***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 34:  /***Yacc rule 34***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 35:  /***Yacc rule 35***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 36:  /***Yacc rule 36***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 37:  /***Yacc rule 37***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 38:  /***Yacc rule 38***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
#if (__APPLE__ && __clang__ && defined (__apple_build_version__) && __clang_major__ > 11) || \
    (__linux__ && __GNUC__ > 6)
/* Apple Xcode 10 & 11 gcc (tested):
   warning: declaration does not declare anything
   GNU 4, 5 & 6 gcc (tested):
   error: expected primary-expression before '__attribute__'
 */
__attribute__((fallthrough));
#elif defined (S_SPLINT_S)
/*@fallthrough@*/
#elif defined (lint)
NOTE(FALLTHROUGH)
#endif
				case 1:
if (yyyCond(0) != pass) {
#line 155 "gram.y"
isVisible(
#line 2487 "oxout.y"
travNode->yyyAttrbs.yyyAttrb6.ids
#line 155 "gram.y"
,
#line 2491 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb1.name
#line 155 "gram.y"
, VARIABLE,
#line 2495 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb1.lineNr
#line 155 "gram.y"
);
#line 2499 "oxout.y"
}
				break;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 39:  /***Yacc rule 39***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 40:  /***Yacc rule 40***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 41:  /***Yacc rule 41***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 42:  /***Yacc rule 42***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
case 43:  /***Yacc rule 43***/
	switch(travN)	{
		case 0:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
			}

break;
								} /* switch */
   if (pass!=0) goto popTravStack; else goto pushTravStack;
  } /* while */
 } /* for */
} /* yyyDoTraversals */

static void yyyExecuteRRsection (yyyGNT *rootNode)
  {
   long cycleSum = 0;
   long nNZrc = 0;

   if (!yyyYok) return;
   yyyCheckUnsolvedInstTrav (rootNode, &nNZrc, &cycleSum);
   if (nNZrc>0)
      {
       (void) fputs ("\n\n\n**********\n", stderr);
       (void) fputs ("cycle detected in completed parse tree", stderr);
       (void) fputs (" after decoration.\n", stderr);
#if CYCLE_VERBOSE
       (void) fprintf (stderr, "number of unsolved attribute instances == %ld.\n",
                               nNZrc
                      );
       (void) fprintf (stderr, "total number of remaining dependencies == %ld.\n",
                               cycleSum
                      );
       (void) fputs ("average number of remaining dependencies\n", stderr);
       (void) fprintf (stderr, "  per unsolved instance == %f.\n",
                               ((float) (cycleSum) / (float) (nNZrc))
                      );
#endif
       (void) fprintf (stderr, "searching parse tree for %ld unsolved instances:\n",
                               nNZrc
                      );
       yyyUnsolvedInstSearchTravAux (rootNode);
      }
  } /* yyyExecuteRRsection */



static yyyWAT yyyLRCIL[2] = {0,1,
};



static void yyyGenIntNode (long ProdNum, int RHSlength, int Nattrbs,
#if defined (S_SPLINT_S)
                           /*@unused@*/
#endif
                           __attribute__((unused))
                           int typeNum, yyyOxAttrbs *val_OxAttrbs, ...)
  {
#if defined (lint)
   NOTE(ARGUNUSED(typeNum))
#endif
   yyySIT **LHSsemEl = &val_OxAttrbs->semEl;

#if defined (__cplusplus)
   try {
      (*LHSsemEl) = new yyySIT;
   } catch (std::bad_alloc) {
      yyyfatal ("error in Ox/Yacc semantic stack space allocation\n");
   }
   try {
      (*LHSsemEl)->node = new yyyGNT;
   } catch (std::bad_alloc) {
      yyyfatal ("error in Ox Semantic Node space allocation\n");
   }
#else /* !defined (__cplusplus) */
   (*LHSsemEl) = (yyySIT *) malloc ((size_t) sizeof (yyySIT));
   if (*LHSsemEl==(yyySIT *) NULL)
      yyyfatal ("malloc error in Ox/Yacc semantic stack space allocation\n");
   (*LHSsemEl)->node = (yyyGNT *) malloc ((size_t) sizeof (yyyGNT));
   if ((*LHSsemEl)->node==(yyyGNT *) NULL)
      yyyfatal ("malloc error in Ox Semantic Node space allocation\n");
#endif /* !defined (__cplusplus) */
   (*LHSsemEl)->solvedSAlist = yyyLambdaSSAL;
   (*LHSsemEl)->node->parent.stackref = (*LHSsemEl);
   (*LHSsemEl)->node->parentIsStack = true;
   (*LHSsemEl)->node->cLlen  = RHSlength;
   if (RHSlength>0)
#if defined (__cplusplus)
      try {
         (*LHSsemEl)->node->cL = new yyyGNT * [RHSlength];
      } catch (std::bad_alloc) {
         yyyfatal ("error in Ox Child List space allocation\n");
      }
#else /* !defined (__cplusplus) */
     {(*LHSsemEl)->node->cL =
            (yyyGNT **) calloc ((size_t)RHSlength, (size_t)sizeof (yyyGNT *));
      if ((*LHSsemEl)->node->cL==(yyyGNT **) NULL)
         yyyfatal ("calloc error in Ox Child List space allocation\n");
     }
#endif /* !defined (__cplusplus) */
   else
      (*LHSsemEl)->node->cL = (yyyGNT **) NULL;
   (*LHSsemEl)->node->refCountListLen = Nattrbs;
   if (Nattrbs>0)
#if defined (__cplusplus)
      try {
         (*LHSsemEl)->node->refCountList = new yyyRCT [Nattrbs];
         for (int i = 0; i < Nattrbs; i++)
            (*LHSsemEl)->node->refCountList [i] = 0;
      } catch (std::bad_alloc) {
         yyyfatal ("error in Ox Reference Count List space allocation\n");
      }
#else /* !defined (__cplusplus) */
     {(*LHSsemEl)->node->refCountList =
            (yyyRCT *) calloc ((size_t) Nattrbs, (size_t) sizeof (yyyRCT));
      if ((*LHSsemEl)->node->refCountList==(yyyRCT *) NULL)
         yyyfatal ("calloc error in Ox Reference Count List space allocation\n");
     }
#endif /* !defined (__cplusplus) */
   else
      (*LHSsemEl)->node->refCountList = (yyyRCT *) NULL;
   (*LHSsemEl)->node->prodNum = (yyyPNT)ProdNum;
   if (RHSlength>0)
     {va_list ap;
      va_start (ap, val_OxAttrbs);
      for (yyyWST i = 1; i <= RHSlength; i++)
        {yyyOxAttrbs *RHSattrbs = va_arg (ap, yyyOxAttrbs *);
         if (RHSattrbs != (yyyOxAttrbs *) NULL)
           {yyySIT *RHSsemEl = RHSattrbs->semEl;
            yyyGNT *gnpDum = (*LHSsemEl)->node->cL[i-1] = RHSsemEl->node;
            gnpDum->whichSym = i;
            gnpDum->parent.noderef = (*LHSsemEl)->node;
            gnpDum->parentIsStack = false;
           }
        }
      va_end (ap);
     }
  }



static void yyyReclaimSemStkEls (int RHSlength, ...)
  {if (RHSlength>0)
     {va_list ap;
      va_start (ap, RHSlength);
      for (yyyWST i = 1; i <= RHSlength; i++)
        {yyyOxAttrbs *RHSattrbs = va_arg (ap, yyyOxAttrbs *);
         if (RHSattrbs != (yyyOxAttrbs *) NULL)
           {yyySIT *RHSsemEl = RHSattrbs->semEl;
            RHSsemEl->node = (yyyGNT *) NULL;
#if defined (__cplusplus)
            delete RHSsemEl;
#else
            free (RHSsemEl);
#endif
           }
        }
      va_end (ap);
     }
  }



static void yyyAdjustINRC (long ProdNum, int RHSlength, long startP, long stopP, yyyOxAttrbs *val_OxAttrbs, ...)
  {yyySIT *LHSsemEl = val_OxAttrbs->semEl;
   yyySSALC *SSALptr,*SSALptrHead,**cPtrPtr;
   yyyGNT *gnpDum;
   long nextP;

   nextP = startP;
   while (nextP < stopP)
     {if (yyyRCIL[nextP]==yyyR)
         {(LHSsemEl->node->refCountList)[yyyRCIL[nextP +1]] = yyyRCIL[nextP+2];
         }
      else
         {(((LHSsemEl->node->cL)[yyyRCIL[nextP]])->refCountList)[yyyRCIL[nextP +1]] = yyyRCIL[nextP+2];
         }
      nextP += 3;
     }
   if (RHSlength>0)
     {long *pL = yyyIIEL + yyyIIIEL[ProdNum];
      long iTemp;
      va_list ap;
      va_start (ap, val_OxAttrbs);
      for (yyyWST i = 1; i <= RHSlength; i++)
        {yyyOxAttrbs *RHSattrbs = va_arg (ap, yyyOxAttrbs *);
         if (RHSattrbs != (yyyOxAttrbs *) NULL)
           {yyySIT *RHSsemEl = RHSattrbs->semEl;
            pL++;
            SSALptrHead = SSALptr = *(cPtrPtr = &(RHSsemEl->solvedSAlist));
            if (SSALptr != yyyLambdaSSAL)
              {*cPtrPtr = yyyLambdaSSAL;
               do
                 {iTemp = (*pL+SSALptr->attrbNum);
                  yyySignalEnts (LHSsemEl->node,
                                 yyyIEL[iTemp],
                                 yyyIEL[iTemp +1]
                                );
                  SSALptr = *(cPtrPtr = &(SSALptr->next));
                 }
               while (SSALptr != yyyLambdaSSAL);
               *cPtrPtr = yyySSALCfreeList;
               yyySSALCfreeList = SSALptrHead;
              }
           }
        }
      va_end (ap);
     }
   nextP = startP + 2;
   while (nextP < stopP)
     {if (yyyRCIL[nextP]==0)
         {if (yyyRCIL[nextP-2]==yyyR)
             {yyySSALC **pL = &(LHSsemEl->solvedSAlist);
              yyySSALC *iTemp;
              if (yyySSALCfreeList==yyyLambdaSSAL)
#if defined (__cplusplus)
                 try {
                    iTemp = new yyySSALC;
                 } catch (std::bad_alloc) {
                    yyyfatal ("error in Ox Stack Solved List space allocation\n");
                 }
#else /* !defined (__cplusplus) */
                 {iTemp = (yyySSALC *) malloc ((size_t) sizeof (yyySSALC));
                  if (iTemp==yyyLambdaSSAL)
                     yyyfatal ("malloc error in Ox Stack Solved List space allocation\n");
                 }
#endif /* !defined (__cplusplus) */
              else
                 {iTemp = yyySSALCfreeList;
                  yyySSALCfreeList = yyySSALCfreeList->next;
                 }
              iTemp->next = *pL;
              iTemp->attrbNum = yyyRCIL[nextP-1];
              *pL = iTemp;
             }
          else
             {if ((gnpDum = (LHSsemEl->node->cL)[yyyRCIL[nextP-2]])->prodNum!=0)
                 {long iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + yyyRCIL[nextP-1];
                  yyySignalEnts (gnpDum,
                                 yyyIEL[iTemp],
                                 yyyIEL[iTemp +1]
                                );
                 }
             }
         }
      nextP += 3;
     }
  }



void yyyGenLeaf (int nAttrbs,
#if defined (S_SPLINT_S)
                /*@unused@*/
#endif
                __attribute__((unused))
                 int typeNum, long startP, long stopP, YYSTYPE *lval)
  {
#if defined (lint)
   NOTE(ARGUNUSED(typeNum))
#endif
   yyySIT **LHSsemEl = &((yyyOxAttrbs *)lval)->semEl;
#if defined (__cplusplus)
   try {
      (*LHSsemEl) = new yyySIT;
   } catch (std::bad_alloc) {
      yyyfatal ("error in Ox/Yacc semantic stack space allocation\n");
   }
   try {
      (*LHSsemEl)->node = new yyyGNT;
   } catch (std::bad_alloc) {
      yyyfatal ("error in Ox Semantic Node space allocation\n");
   }
#else /* !defined (__cplusplus) */
   (*LHSsemEl) = (yyySIT *) malloc ((size_t) sizeof (yyySIT));
   if ((*LHSsemEl)==(yyySIT *) NULL)
      yyyfatal ("malloc error in Ox/Yacc semantic stack space allocation\n");
   (*LHSsemEl)->node = (yyyGNT *) malloc ((size_t) sizeof (yyyGNT));
   if ((*LHSsemEl)->node==(yyyGNT *) NULL)
      yyyfatal ("malloc error in Ox Semantic Node space allocation\n");
#endif /* !defined (__cplusplus) */
   (*LHSsemEl)->solvedSAlist = yyyLambdaSSAL;
   (*LHSsemEl)->node->parent.stackref = (*LHSsemEl);
   (*LHSsemEl)->node->parentIsStack = true;
   (*LHSsemEl)->node->cLlen = 0;
   (*LHSsemEl)->node->cL = (yyyGNT **) NULL;
   (*LHSsemEl)->node->refCountListLen = nAttrbs;
   if (nAttrbs>0)
     {yyyRCT *rcPdum;
#if defined (__cplusplus)
      try {
         rcPdum = (*LHSsemEl)->node->refCountList = new yyyRCT [nAttrbs];
      } catch (std::bad_alloc) {
         yyyfatal ("error in Ox Reference Count List space allocation\n");
      }
#else /* !defined (__cplusplus) */
      rcPdum = (*LHSsemEl)->node->refCountList =
               (yyyRCT *) calloc ((size_t) nAttrbs, (size_t) sizeof (yyyRCT));
      if (rcPdum==(yyyRCT *) NULL)
         yyyfatal ("calloc error in Ox Reference Count List space allocation\n");
#endif /* !defined (__cplusplus) */
      while (startP < stopP) rcPdum[yyyLRCIL[startP++]] = 0;
     }
   else
      (*LHSsemEl)->node->refCountList = (yyyRCT *) NULL;
   (*LHSsemEl)->node->prodNum = 0;
   (*LHSsemEl)->node->whichSym = 0;
  }



void yyyabort (void) {yyyYok = false;}




#define yyyLastProdNum 43


static int yyyProdsInd[] = {
   0,
   0,   1,   5,  13,  25,  26,  30,  32,  33,  38,
  39,  43,  46,  49,  54,  59,  63,  65,  67,  72,
  74,  79,  84,  89,  93,  97,  99, 102, 105, 106,
 110, 111, 115, 116, 120, 124, 126, 131, 133, 139,
 145, 152, 153,
 157,
};


static int yyyProds[][2] = {
{  25,   0},{  25,   0},{  25,   0},{  51,   0},{   8,   0},
{  51,   0},{  23,   1},{  11,   0},{  31,   2},{  32,   2},
{  12,   0},{  37,   4},{   1,   0},{  51,   0},{  23,   1},
{  13,   0},{  31,   2},{  32,   2},{  14,   0},{  11,   0},
{  31,   2},{  32,   2},{  12,   0},{  37,   4},{   1,   0},
{  31,   2},{  31,   2},{  31,   2},{  23,   1},{  10,   0},
{  32,   2},{  23,   1},{  37,   4},{  37,   4},{  34,   3},
{  38,   5},{   8,   0},{  37,   4},{  34,   3},{  34,   3},
{  34,   3},{  23,   1},{   9,   0},{  38,   5},{   2,   0},
{  39,   6},{  38,   5},{   3,   0},{  23,   1},{  38,   5},
{   4,   0},{  39,   6},{   3,   0},{  23,   1},{  38,   5},
{   5,   0},{  23,   1},{  17,   0},{  39,   6},{  38,   5},
{  46,   6},{  17,   0},{  39,   6},{  38,   5},{  41,   6},
{  46,   6},{  23,   1},{  46,   6},{  41,   6},{  15,   0},
{  39,   6},{  16,   0},{  39,   6},{  45,   6},{  39,   6},
{  41,   6},{  18,   0},{  41,   6},{  44,   6},{  39,   6},
{  41,   6},{  19,   0},{  41,   6},{  43,   6},{  39,   6},
{  41,   6},{   7,   0},{  41,   6},{  42,   6},{  39,   6},
{  41,   6},{  20,   0},{  41,   6},{  39,   6},{  41,   6},
{  17,   0},{  41,   6},{  45,   6},{  41,   6},{  45,   6},
{   6,   0},{  45,   6},{  45,   6},{  21,   0},{  45,   6},
{  44,   6},{  44,   6},{  44,   6},{  18,   0},{  41,   6},
{  43,   6},{  43,   6},{  43,   6},{  19,   0},{  41,   6},
{  42,   6},{  42,   6},{  42,   6},{   7,   0},{  41,   6},
{  41,   6},{  11,   0},{  39,   6},{  12,   0},{  41,   6},
{  24,   0},{  41,   6},{  41,   6},{  15,   0},{  39,   6},
{  16,   0},{  41,   6},{  23,   1},{  41,   6},{  23,   1},
{  11,   0},{  40,   6},{  39,   6},{  12,   0},{  41,   6},
{  23,   1},{  13,   0},{  40,   6},{  39,   6},{  14,   0},
{  41,   6},{  41,   6},{  22,   0},{  11,   0},{  40,   6},
{  39,   6},{  12,   0},{  40,   6},{  40,   6},{  40,   6},
{  39,   6},{  10,   0},
};


static int yyySortsInd[] = {
  0,
  0,  2,  3,  4,  6,  8,
  9,
};


static int yyySorts[] = {
   27,   28,   30,   33,   35,   36,   35,   36,   26,
};



static const char *const yyyStringTab[] = {
"NIO","END","RETURN","GOTO","IF",
"VAR","NOT","AND","SEMICOLON","COLON",
"COMMA","BRACKET_OPEN","BRACKET_CLOSE","CURLY_BRACKET_OPEN","CURLY_BRACKET_CLOSE",
"SQUARED_BRACKET_OPEN","SQUARED_BRACKET_CLOSE","EQUAL","ADD","MUL",
"GREATER","SUB","AT_SIGN","ID","NUM",
"Program","ids","name","lineNr",0,
"pars","Pars","Par","labels","Labeldef",
"in","out","Stats","Stat","Expr",
"RepeatExpr","Term","AndTerm","MulTerm","AddTerm",
"NotOrSub","Lexpr",0,0,"__y",
"error","Def",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num) +1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum, symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[prodNum] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num) +1] - yyySortsInd[(num)])

#define yyySortOf(prodNum, symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1])

#define yyyAttrbStr(prodNum, symPos, attrbNum)                     \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum, symPos)] + \
                         (attrbNum)                                \
                        ]                                          \
               ]                                                   \
  )



static void yyyShowProd (int i)
  {int nSyms;

   nSyms = yyySizeofProd(i);
   for (int j = 0; j < nSyms; j++)
     {
      (void) fprintf (stderr, "%s", yyyGSoccurStr(i, j));
      if (j==0) (void) fputs (" : ", stderr); else (void) putc (' ', stderr);
     }
   (void) fputs (";\n", stderr);
  }



static void yyyCheckNodeInstancesSolved (yyyGNT *np)
  {int mysort, sortSize, prodNum, symPos;
   int nUnsolvedInsts = 0;
   bool inTerminalNode;

   if (np->prodNum!=0)
     {inTerminalNode = false;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = true;
      prodNum = np->parent.noderef->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum, symPos);
   sortSize = yyySizeofSort(mysort);
   for (int i = 0; i < sortSize; i++)
     if ((np->refCountList)[i]>0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts>0)
     {(void) fprintf (stderr, "\nFound node that has %d unsolved attribute instance(s).\n",
                              nUnsolvedInsts
                     );
      (void) fprintf (stderr, "Node is labeled \"%s\".\n",
                              yyyGSoccurStr(prodNum, symPos));
      if (inTerminalNode)
        {(void) fputs ("Node is terminal.  Its parent production is:\n  ", stderr);
         yyyShowProd (prodNum);
        }
      else
        {(void) fputs ("Node is nonterminal.  ", stderr);
         if (!(np->parentIsStack))
           {(void) fprintf (stderr, "Node is %huth child in its parent production:\n  ",
                                    np->whichSym
                           );
            yyyShowProd (np->parent.noderef->prodNum);
           }
         (void) fputs ("Node is on left hand side of this production:\n  ", stderr);
         yyyShowProd (np->prodNum);
        }
      (void) fputs ("The following instances are unsolved:\n", stderr);
      for (int i = 0; i < sortSize; i++)
        if ((np->refCountList)[i]>0)
          (void) fprintf (stderr, "     %-16s still has %1hu dependencies.\n",
                                  yyyAttrbStr(prodNum, symPos, i),
                                  (np->refCountList)[i]
                         );
     }
  }



static void yyyCheckUnsolvedInstTrav (yyyGNT *pNode, long *nNZrc, long *cycleSum)
  {yyyGNT **cLpdum;
   yyyRCT *rcp;
   int i;

   /* visit the refCountList of each node in the tree, and sum the non-zero refCounts */
   rcp = pNode->refCountList;
   i = pNode->refCountListLen;
   while ((i--)>0)
      if ((*rcp++)>0) {*cycleSum += *(rcp -1); (*nNZrc)++;}
   cLpdum = pNode->cL;
   i = pNode->cLlen;
   while ((i--)>0)
     {
      yyyCheckUnsolvedInstTrav (*cLpdum, nNZrc, cycleSum);
      cLpdum++;
     }
  }



static void yyyUnsolvedInstSearchTravAux (yyyGNT *pNode)
  {yyyGNT **cLpdum;
   int i;

   yyyCheckNodeInstancesSolved (pNode);
   cLpdum = pNode->cL;
   i = pNode->cLlen;
   while ((i--)>0)
     {
      yyyUnsolvedInstSearchTravAux (*cLpdum);
      cLpdum++;
     }
  }



