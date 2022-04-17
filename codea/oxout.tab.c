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

#line 1 "parser.y"


#include "parser.h"
extern void invoke_burm(NODEPTR_TYPE root);

#line 65 "oxout.y"

struct yyyT1 {
#line 21 "parser.y"
 long value;
#line 70 "oxout.y"

};

struct yyyT2 {
#line 22 "parser.y"
 char *name; int lineNr;
#line 77 "oxout.y"

};

struct yyyT3 {
#line 23 "parser.y"
 Node *pars;
#line 84 "oxout.y"

};

struct yyyT4 {
#line 24 "parser.y"
 Node *labels;
#line 91 "oxout.y"

};

struct yyyT5 {
#line 25 "parser.y"
 Node *in; Node* out;
#line 98 "oxout.y"

};

struct yyyT6 {
#line 26 "parser.y"
 Node *in; Node* out; tree_t *tree;
#line 105 "oxout.y"

};

struct yyyT7 {
#line 28 "parser.y"
 Node *ids; tree_t *tree;
#line 112 "oxout.y"

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
  struct yyyT7 yyyAttrb7;
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
#line 175 "oxout.y"

#define yyyinit()
#line 178 "oxout.y"

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

#line 243 "oxout.tab.c"

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
#ifndef YY_YY_OXOUT_TAB_H_INCLUDED
# define YY_YY_OXOUT_TAB_H_INCLUDED
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 195 "oxout.y"

struct {
struct yyySemEl *semEl;
} yyyOxAttrbs;

#line 328 "oxout.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_OXOUT_TAB_H_INCLUDED  */

/* Second part of user prologue.  */
#line 201 "oxout.y"

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

#line 361 "oxout.tab.c"


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
#define YYLAST   103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  27
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  95

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
       0,   224,   224,   235,    37,    40,    45,   281,    56,    62,
     334,    72,   362,    86,    92,   101,   109,   118,   125,   133,
     142,   148,   154,   158,   165,   171,   177,   183,   191,   195,
     200,   207,   208,   216,   217,   225,   226,   234,   235,   239,
     243,   249,   253,   257,   796,   267
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
     -45,     5,   -16,   -45,    -5,    25,   -45,   -45,   -45,    22,
      22,    40,    59,    42,   -45,    79,    71,    82,     8,   -45,
     -45,    31,    62,    31,    63,    31,    56,   -45,    76,    70,
      53,    22,    31,    31,    61,   -45,   -45,    44,   -45,    85,
      72,    78,   -45,   -45,   -45,    79,    31,    31,    80,    81,
     -45,    55,   -45,    -9,    31,    -9,    -9,    -9,    -9,   -45,
     -45,   -45,    73,    31,   -45,    31,    31,   -45,   -45,    83,
     -45,    79,    13,    84,    55,    21,    38,    55,   -45,   -45,
      66,    20,    75,    31,    93,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,    69,   -45,   -45
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
      29,    28,    30,     0,     0,     0,     0,     0,     0,    23,
      24,    25,     0,     0,    37,     0,     0,    11,    18,     0,
      44,    12,    35,     0,    27,    31,    33,    26,    16,    17,
       0,     0,    39,     0,     0,    36,    39,    32,    34,    45,
      41,    42,     0,     6,    43
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -45,   -45,    -1,    -3,   -44,   -45,   -45,   -45,
     -23,   -13,    24,    27,    28,    -7,   -41
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,     9,    12,    17,    18,    28,    29,
      35,    36,    59,    60,    61,    37,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      39,    67,    41,    66,    25,     3,    10,    13,     6,     4,
       7,    30,    21,    22,    23,    24,    34,    27,    31,    50,
      52,    25,    53,    68,    69,    51,    51,    84,    49,    83,
      54,    73,    89,    26,    27,     8,    91,    48,    54,    32,
      79,    56,    80,    81,    25,    48,    72,    11,    74,    75,
      76,    77,    14,    53,    33,    54,    34,    27,    16,    57,
      92,    54,    48,    55,    56,    57,    58,    42,    48,    43,
      47,    44,    54,    15,    43,   -20,    44,    48,    89,    48,
      90,    89,   -10,    94,    19,    20,    45,    38,    40,    46,
      62,    63,    64,    70,   -21,    71,    93,     0,    78,    87,
      85,    82,    86,    88
};

static const yytype_int8 yycheck[] =
{
      23,    45,    25,    44,    13,     0,     7,    10,    13,    25,
      15,    18,     4,     5,     6,     7,    25,    26,    19,    32,
      33,    13,     9,    46,    47,    32,    33,    71,    31,    70,
      17,    54,    12,    25,    26,    10,    16,    24,    17,     8,
      63,    20,    65,    66,    13,    24,    53,    25,    55,    56,
      57,    58,    12,     9,    23,    17,    25,    26,    16,    21,
      83,    17,    24,    19,    20,    21,    22,    11,    24,    13,
      17,    15,    17,    14,    13,    19,    15,    24,    12,    24,
      14,    12,     3,    14,    13,     3,    10,    25,    25,    19,
       5,    19,    14,    13,    19,    14,     3,    -1,    25,    75,
      72,    18,    18,    76
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
      38,    42,    38,     9,    17,    19,    20,    21,    22,    39,
      40,    41,     5,    19,    14,    43,    43,    33,    37,    37,
      13,    14,    42,    37,    42,    42,    42,    42,    25,    37,
      37,    37,    18,    43,    33,    41,    18,    39,    40,    12,
      14,    16,    37,     3,    14
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
       1,     4,     1,     2,     2,     2,     3,     3,     1,     2,
       2,     2,     3,     2,     3,     2,     3,     3,     1,     4,
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
#line 225 "oxout.y"
                {
		 yyyDecorate(true);
		 yyyExecuteRRsection((yyvsp[0].yyyOxAttrbs).semEl->node);
		 yyyDoTraversals((yyvsp[0].yyyOxAttrbs).semEl->node);
		}
#line 1585 "oxout.tab.c"
    break;

  case 3:
#line 235 "oxout.y"
{if(yyyYok){
yyyGenIntNode(1,0,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyAdjustINRC(1,0,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1596 "oxout.tab.c"
    break;

  case 4:
#line 245 "oxout.y"
{if(yyyYok){
yyyGenIntNode(2,3,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(2,3,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1607 "oxout.tab.c"
    break;

  case 5:
#line 257 "oxout.y"
{if(yyyYok){
yyyGenIntNode(3,7,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(3,7,0,3,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(7,&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1618 "oxout.tab.c"
    break;

  case 6:
#line 268 "oxout.y"
{if(yyyYok){
yyyGenIntNode(4,11,0,0,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-10].yyyOxAttrbs),&(yyvsp[-9].yyyOxAttrbs),&(yyvsp[-8].yyyOxAttrbs),&(yyvsp[-7].yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(4,11,3,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-10].yyyOxAttrbs),&(yyvsp[-9].yyyOxAttrbs),&(yyvsp[-8].yyyOxAttrbs),&(yyvsp[-7].yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(11,&(yyvsp[-10].yyyOxAttrbs),&(yyvsp[-9].yyyOxAttrbs),&(yyvsp[-8].yyyOxAttrbs),&(yyvsp[-7].yyyOxAttrbs),&(yyvsp[-6].yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1629 "oxout.tab.c"
    break;

  case 7:
#line 281 "oxout.y"
{if(yyyYok){
yyyGenIntNode(5,0,1,3,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb3.pars
#line 54 "parser.y"
 = newList();
#line 287 "oxout.y"
yyyAdjustINRC(5,0,6,9,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1644 "oxout.tab.c"
    break;

  case 8:
#line 296 "oxout.y"
{if(yyyYok){
yyyGenIntNode(6,3,1,3,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(6,3,9,12,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1655 "oxout.tab.c"
    break;

  case 9:
#line 309 "oxout.y"
{if(yyyYok){
yyyGenIntNode(7,1,1,3,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb3.pars
#line 64 "parser.y"
 = add(newList(),
#line 315 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 64 "parser.y"
, PARAMETER,
#line 319 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[0]->yyyAttrbs.yyyAttrb2.lineNr
#line 64 "parser.y"
);
#line 323 "oxout.y"
yyyAdjustINRC(7,1,12,15,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1678 "oxout.tab.c"
    break;

  case 10:
#line 334 "oxout.y"
{if(yyyYok){
yyyGenIntNode(8,0,2,5,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb5.out
#line 70 "parser.y"
 = newList();
#line 340 "oxout.y"
yyyAdjustINRC(8,0,15,18,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1693 "oxout.tab.c"
    break;

  case 11:
#line 349 "oxout.y"
{if(yyyYok){
yyyGenIntNode(9,4,2,5,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(9,4,18,27,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1704 "oxout.tab.c"
    break;

  case 12:
#line 362 "oxout.y"
{if(yyyYok){
yyyGenIntNode(10,0,1,4,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb4.labels
#line 84 "parser.y"
 = newList();
#line 368 "oxout.y"
yyyAdjustINRC(10,0,27,30,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 1719 "oxout.tab.c"
    break;

  case 13:
#line 377 "oxout.y"
{if(yyyYok){
yyyGenIntNode(11,3,1,4,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(11,3,30,33,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1730 "oxout.tab.c"
    break;

  case 14:
#line 390 "oxout.y"
{if(yyyYok){
yyyGenIntNode(12,2,3,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.out
#line 95 "parser.y"
 = newList();
#line 396 "oxout.y"
yyyAdjustINRC(12,2,33,42,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1745 "oxout.tab.c"
    break;

  case 15:
#line 405 "oxout.y"
{if(yyyYok){
yyyGenIntNode(13,2,3,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.out
#line 103 "parser.y"
 = newList();
#line 411 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.tree
#line 105 "parser.y"
 = NULL;
#line 415 "oxout.y"
yyyAdjustINRC(13,2,42,48,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1764 "oxout.tab.c"
    break;

  case 16:
#line 424 "oxout.y"
{if(yyyYok){
yyyGenIntNode(14,4,3,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.out
#line 112 "parser.y"
 = newList();
#line 430 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.tree
#line 114 "parser.y"
 = NULL;
#line 434 "oxout.y"
yyyAdjustINRC(14,4,48,57,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1783 "oxout.tab.c"
    break;

  case 17:
#line 443 "oxout.y"
{if(yyyYok){
yyyGenIntNode(15,4,3,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.tree
#line 123 "parser.y"
 = NULL;
#line 449 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.out
#line 121 "parser.y"
 = add(newList(),
#line 453 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[1]->yyyAttrbs.yyyAttrb2.name
#line 121 "parser.y"
, VARIABLE,
#line 457 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[1]->yyyAttrbs.yyyAttrb2.lineNr
#line 121 "parser.y"
);
#line 461 "oxout.y"
yyyAdjustINRC(15,4,57,66,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1810 "oxout.tab.c"
    break;

  case 18:
#line 470 "oxout.y"
{if(yyyYok){
yyyGenIntNode(16,3,3,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.out
#line 129 "parser.y"
 = newList();
#line 476 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.tree
#line 131 "parser.y"
 = NULL;
#line 480 "oxout.y"
yyyAdjustINRC(16,3,66,78,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1829 "oxout.tab.c"
    break;

  case 19:
#line 489 "oxout.y"
{if(yyyYok){
yyyGenIntNode(17,1,3,6,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.out
#line 136 "parser.y"
 = newList();
#line 495 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb6.tree
#line 138 "parser.y"
 = NULL;
#line 499 "oxout.y"
yyyAdjustINRC(17,1,78,87,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1848 "oxout.tab.c"
    break;

  case 20:
#line 510 "oxout.y"
{if(yyyYok){
yyyGenIntNode(18,1,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb7.tree
#line 144 "parser.y"
 = NULL;
#line 516 "oxout.y"
yyyAdjustINRC(18,1,87,90,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1863 "oxout.tab.c"
    break;

  case 21:
#line 525 "oxout.y"
{if(yyyYok){
yyyGenIntNode(19,4,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(19,4,90,99,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1874 "oxout.tab.c"
    break;

  case 22:
#line 538 "oxout.y"
{if(yyyYok){
yyyGenIntNode(20,1,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(20,1,99,105,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1885 "oxout.tab.c"
    break;

  case 23:
#line 549 "oxout.y"
{if(yyyYok){
yyyGenIntNode(21,2,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(21,2,105,114,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1896 "oxout.tab.c"
    break;

  case 24:
#line 560 "oxout.y"
{if(yyyYok){
yyyGenIntNode(22,2,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(22,2,114,123,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1907 "oxout.tab.c"
    break;

  case 25:
#line 571 "oxout.y"
{if(yyyYok){
yyyGenIntNode(23,2,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(23,2,123,132,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1918 "oxout.tab.c"
    break;

  case 26:
#line 582 "oxout.y"
{if(yyyYok){
yyyGenIntNode(24,3,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(24,3,132,141,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1929 "oxout.tab.c"
    break;

  case 27:
#line 593 "oxout.y"
{if(yyyYok){
yyyGenIntNode(25,3,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(25,3,141,150,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1940 "oxout.tab.c"
    break;

  case 28:
#line 606 "oxout.y"
{if(yyyYok){
yyyGenIntNode(26,1,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(26,1,150,156,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 1951 "oxout.tab.c"
    break;

  case 29:
#line 617 "oxout.y"
{if(yyyYok){
yyyGenIntNode(27,2,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(27,2,156,162,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1962 "oxout.tab.c"
    break;

  case 30:
#line 628 "oxout.y"
{if(yyyYok){
yyyGenIntNode(28,2,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(28,2,162,168,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1973 "oxout.tab.c"
    break;

  case 31:
#line 641 "oxout.y"
{if(yyyYok){
yyyGenIntNode(29,2,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(29,2,168,174,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1984 "oxout.tab.c"
    break;

  case 32:
#line 651 "oxout.y"
{if(yyyYok){
yyyGenIntNode(30,3,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(30,3,174,183,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 1995 "oxout.tab.c"
    break;

  case 33:
#line 664 "oxout.y"
{if(yyyYok){
yyyGenIntNode(31,2,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(31,2,183,189,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2006 "oxout.tab.c"
    break;

  case 34:
#line 674 "oxout.y"
{if(yyyYok){
yyyGenIntNode(32,3,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(32,3,189,198,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2017 "oxout.tab.c"
    break;

  case 35:
#line 687 "oxout.y"
{if(yyyYok){
yyyGenIntNode(33,2,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(33,2,198,204,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(2,&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2028 "oxout.tab.c"
    break;

  case 36:
#line 697 "oxout.y"
{if(yyyYok){
yyyGenIntNode(34,3,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(34,3,204,213,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2039 "oxout.tab.c"
    break;

  case 37:
#line 710 "oxout.y"
{if(yyyYok){
yyyGenIntNode(35,3,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(35,3,213,219,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2050 "oxout.tab.c"
    break;

  case 38:
#line 720 "oxout.y"
{if(yyyYok){
yyyGenIntNode(36,1,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb7.tree
#line 237 "parser.y"
 = createNumericalLeaf(
#line 726 "oxout.y"
(yyval.yyyOxAttrbs).semEl->node->cL[0]->yyyAttrbs.yyyAttrb1.value
#line 237 "parser.y"
);
#line 730 "oxout.y"
yyyAdjustINRC(36,1,219,222,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 2069 "oxout.tab.c"
    break;

  case 39:
#line 739 "oxout.y"
{if(yyyYok){
yyyGenIntNode(37,4,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(37,4,222,231,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(4,&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2080 "oxout.tab.c"
    break;

  case 40:
#line 750 "oxout.y"
{if(yyyYok){
yyyGenIntNode(38,1,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(38,1,231,234,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(1,&(yyvsp[0].yyyOxAttrbs));
}}
#line 2091 "oxout.tab.c"
    break;

  case 41:
#line 761 "oxout.y"
{if(yyyYok){
yyyGenIntNode(39,5,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(39,5,234,243,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(5,&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2102 "oxout.tab.c"
    break;

  case 42:
#line 772 "oxout.y"
{if(yyyYok){
yyyGenIntNode(40,5,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(40,5,243,252,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(5,&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2113 "oxout.tab.c"
    break;

  case 43:
#line 783 "oxout.y"
{if(yyyYok){
yyyGenIntNode(41,6,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyAdjustINRC(41,6,252,264,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(6,&(yyvsp[-5].yyyOxAttrbs),&(yyvsp[-4].yyyOxAttrbs),&(yyvsp[-3].yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2124 "oxout.tab.c"
    break;

  case 44:
#line 796 "oxout.y"
{if(yyyYok){
yyyGenIntNode(42,0,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb7.tree
#line 265 "parser.y"
 = NULL;
#line 802 "oxout.y"
yyyAdjustINRC(42,0,264,267,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(0);
}}
#line 2139 "oxout.tab.c"
    break;

  case 45:
#line 811 "oxout.y"
{if(yyyYok){
yyyGenIntNode(43,3,2,7,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
(yyval.yyyOxAttrbs).semEl->node->yyyAttrbs.yyyAttrb7.tree
#line 269 "parser.y"
 = NULL;
#line 817 "oxout.y"
yyyAdjustINRC(43,3,267,276,(yyyOxAttrbs *)&(yyval.yyyOxAttrbs),&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
yyyDecorate(false);
yyyReclaimSemStkEls(3,&(yyvsp[-2].yyyOxAttrbs),&(yyvsp[-1].yyyOxAttrbs),&(yyvsp[0].yyyOxAttrbs));
}}
#line 2154 "oxout.tab.c"
    break;


#line 2158 "oxout.tab.c"

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
#line 273 "parser.y"


int main(void)
{
    yyparse();
    return 0;
}
#line 833 "oxout.y"
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
yyyR,2,1, 1,0,1, yyyR,1,0, yyyR,2,0, yyyR,1,0, yyyR,2,0,
1,0,1, yyyR,1,0, yyyR,2,0, 3,0,1, yyyR,1,0, yyyR,2,0,
0,0,1, 2,0,1, yyyR,1,0, yyyR,2,0, 0,0,1, yyyR,1,0,
yyyR,1,1, 0,0,1, 2,0,1, yyyR,1,1, 0,0,1, yyyR,1,2,
0,0,1, 1,0,1, yyyR,1,2, 0,0,1, 1,0,1, yyyR,1,2,
0,0,1, 1,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,2,
0,0,1, 2,0,1, yyyR,1,1, 0,0,1, yyyR,1,1, 1,0,1,
yyyR,1,1, 1,0,1, yyyR,1,1, 1,0,1, yyyR,1,2, 1,0,1,
2,0,1, yyyR,1,1, 1,0,1, yyyR,1,2, 1,0,1, 2,0,1,
yyyR,1,1, 1,0,1, yyyR,1,2, 1,0,1, 2,0,1, yyyR,1,1,
1,0,1, yyyR,1,0, yyyR,1,1, 0,0,1, 2,0,1, yyyR,1,1,
yyyR,1,1, 2,0,1, 3,0,1, yyyR,1,1, 2,0,1, 3,0,1,
yyyR,1,1, 0,0,1, 3,0,1, 4,0,1, yyyR,1,0, yyyR,1,0,
0,0,1, 1,0,1,
};

static short yyyIIIEL[] = {0,
0,1,5,13,25,26,30,32,33,38,
39,43,46,49,54,59,63,65,67,72,
74,77,80,83,87,91,93,96,99,102,
106,109,113,116,120,124,126,131,133,139,
145,152,153,
};

static long yyyIIEL[] = {
0,0,0,0,0,0,0,2,2,3,4,4,
6,6,6,8,8,9,10,10,10,11,12,12,
14,14,15,16,17,19,19,20,22,24,26,27,
30,30,32,33,34,35,37,37,40,40,42,45,
45,47,50,50,52,52,54,57,57,59,59,61,
64,66,66,68,71,73,75,77,79,81,81,83,
83,85,87,89,91,93,95,97,99,101,103,105,
107,109,109,111,113,115,115,117,119,121,123,123,
125,127,127,129,131,131,133,135,135,137,139,141,
141,143,145,145,147,149,151,151,153,155,155,157,
159,161,161,163,163,165,166,168,170,170,172,172,
174,176,178,180,180,182,184,184,186,188,188,190,
192,192,194,196,196,196,198,200,200,202,204,206,
208,
};

static long yyyIEL[] = {
0,0,0,2,4,4,6,6,
6,8,10,10,10,10,12,12,
12,14,16,18,18,20,22,22,
22,26,26,28,28,30,30,30,
32,32,32,34,36,38,40,40,
40,40,42,42,42,42,42,42,
44,44,44,44,44,44,44,46,
46,46,48,50,50,50,54,54,
54,54,54,54,54,56,56,56,
56,56,56,56,56,56,60,60,
60,62,62,62,64,64,64,66,
70,70,70,72,72,74,78,78,
78,80,80,82,86,86,86,88,
88,90,94,94,94,96,96,98,
102,102,102,104,104,106,108,108,
108,110,112,112,112,114,116,116,
116,118,120,120,120,122,126,126,
126,128,128,130,132,132,132,134,
138,138,138,140,140,142,144,144,
144,146,150,150,150,152,152,154,
156,156,156,158,158,158,160,164,
164,164,166,166,166,168,168,170,
170,176,176,178,178,178,178,178,
178,184,184,186,186,186,186,186,
186,192,192,192,194,194,194,194,
194,194,194,198,198,198,198,198,
198,
};

static yyyFT yyyEntL[] = {
6,0,6,0,6,0,10,0,10,0,10,0,0,0,0,0,
0,0,0,0,0,0,4,0,2,0,0,1,4,0,0,1,
0,0,0,0,0,0,2,0,0,2,2,0,4,0,0,1,
0,1,1,0,3,0,1,0,3,0,1,0,0,1,1,0,
0,1,2,0,1,0,0,1,0,1,2,0,1,0,0,1,
0,1,2,0,1,0,0,1,0,1,3,0,1,0,0,1,
0,1,3,0,1,0,0,1,0,1,1,0,0,1,2,0,
0,1,2,0,0,1,2,0,0,1,3,0,2,0,0,1,
0,1,2,0,0,1,3,0,2,0,0,1,0,1,2,0,
0,1,3,0,2,0,0,1,0,1,2,0,0,1,0,1,
3,0,1,0,0,1,0,1,0,1,0,1,4,0,3,0,
0,1,0,1,4,0,3,0,0,1,5,0,4,0,1,0,
0,1,2,0,1,0,
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
RSTopNode->yyyAttrbs.yyyAttrb5.in
#line 42 "parser.y"
 = merge(merge(
#line 1034 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb3.pars
#line 42 "parser.y"
,
#line 1038 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb3.pars
#line 42 "parser.y"
),
#line 1042 "oxout.y"
RSNode->cL[5]->yyyAttrbs.yyyAttrb5.out
#line 42 "parser.y"
);
#line 1046 "oxout.y"
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
RSTopNode->yyyAttrbs.yyyAttrb5.in
#line 47 "parser.y"
 = merge(merge(
#line 1060 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb3.pars
#line 47 "parser.y"
,
#line 1064 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb3.pars
#line 47 "parser.y"
),
#line 1068 "oxout.y"
RSNode->cL[9]->yyyAttrbs.yyyAttrb5.out
#line 47 "parser.y"
);
#line 1072 "oxout.y"
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
RSTopNode->yyyAttrbs.yyyAttrb3.pars
#line 58 "parser.y"
 = add(
#line 1090 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb3.pars
#line 58 "parser.y"
,
#line 1094 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb2.name
#line 58 "parser.y"
, PARAMETER,
#line 1098 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb2.lineNr
#line 58 "parser.y"
);
#line 1102 "oxout.y"
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
RSTopNode->yyyAttrbs.yyyAttrb5.out
#line 75 "parser.y"
 = merge(
#line 1124 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb4.labels
#line 75 "parser.y"
,
#line 1128 "oxout.y"
RSNode->cL[3]->yyyAttrbs.yyyAttrb5.out
#line 75 "parser.y"
);
#line 1132 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb6.in
#line 74 "parser.y"
 =
#line 1142 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 74 "parser.y"
;
#line 1146 "oxout.y"
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb5.in
#line 76 "parser.y"
 = merge(
#line 1156 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb5.in
#line 76 "parser.y"
,
#line 1160 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb6.out
#line 76 "parser.y"
);
#line 1164 "oxout.y"
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
RSTopNode->yyyAttrbs.yyyAttrb4.labels
#line 88 "parser.y"
 = add(
#line 1182 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb4.labels
#line 88 "parser.y"
,
#line 1186 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb2.name
#line 88 "parser.y"
, LABEL,
#line 1190 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb2.lineNr
#line 88 "parser.y"
);
#line 1194 "oxout.y"
    break;
    }
  break;
  }
break;
case 12:  /***Yacc rule 12***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 2:
RSTopNode->yyyAttrbs.yyyAttrb6.tree
#line 97 "parser.y"
 = createNode(OP_RETURN,
#line 1208 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 97 "parser.y"
, NULL);
#line 1212 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids
#line 94 "parser.y"
 =
#line 1222 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb6.in
#line 94 "parser.y"
;
#line 1226 "oxout.y"
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
RSTopNode->yyyAttrbs.yyyAttrb7.ids
#line 111 "parser.y"
 =
#line 1244 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb6.in
#line 111 "parser.y"
;
#line 1248 "oxout.y"
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
RSTopNode->yyyAttrbs.yyyAttrb7.ids
#line 120 "parser.y"
 =
#line 1262 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb6.in
#line 120 "parser.y"
;
#line 1266 "oxout.y"
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
RSTopNode->yyyAttrbs.yyyAttrb7.ids
#line 128 "parser.y"
 =
#line 1280 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb6.in
#line 128 "parser.y"
;
#line 1284 "oxout.y"
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids
#line 127 "parser.y"
 =
#line 1294 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb6.in
#line 127 "parser.y"
;
#line 1298 "oxout.y"
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
RSTopNode->yyyAttrbs.yyyAttrb7.ids
#line 135 "parser.y"
 =
#line 1312 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb6.in
#line 135 "parser.y"
;
#line 1316 "oxout.y"
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
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 150 "parser.y"
 = createNode(OP_AND,
#line 1334 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 150 "parser.y"
,
#line 1338 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 150 "parser.y"
);
#line 1342 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 20:  /***Yacc rule 20***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree = RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree;
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 21:  /***Yacc rule 21***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 160 "parser.y"
 = createNode(OP_ADD,
#line 1388 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 160 "parser.y"
,
#line 1392 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 160 "parser.y"
);
#line 1396 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 22:  /***Yacc rule 22***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 167 "parser.y"
 = createNode(OP_MUL,
#line 1424 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 167 "parser.y"
,
#line 1428 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 167 "parser.y"
);
#line 1432 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 23:  /***Yacc rule 23***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 173 "parser.y"
 = createNode(OP_AND,
#line 1460 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 173 "parser.y"
,
#line 1464 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 173 "parser.y"
);
#line 1468 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 24:  /***Yacc rule 24***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 179 "parser.y"
 = createNode(OP_LESS_EQUAL,
#line 1496 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 179 "parser.y"
,
#line 1500 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 179 "parser.y"
);
#line 1504 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 25:  /***Yacc rule 25***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 185 "parser.y"
 = createNode(OP_LESS_EQUAL,
#line 1532 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 185 "parser.y"
,
#line 1536 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 185 "parser.y"
);
#line 1540 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 26:  /***Yacc rule 26***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree = RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree;
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 27:  /***Yacc rule 27***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 197 "parser.y"
 = createNode(OP_NOT,
#line 1586 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 197 "parser.y"
, NULL);
#line 1590 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 28:  /***Yacc rule 28***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 202 "parser.y"
 = createNode(OP_MINUS,
#line 1611 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 202 "parser.y"
, NULL);
#line 1615 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 29:  /***Yacc rule 29***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree = RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 30:  /***Yacc rule 30***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 210 "parser.y"
 = createNode(OP_ADD,
#line 1654 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 210 "parser.y"
,
#line 1658 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 210 "parser.y"
);
#line 1662 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 31:  /***Yacc rule 31***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree = RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 32:  /***Yacc rule 32***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 219 "parser.y"
 = createNode(OP_MUL,
#line 1708 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 219 "parser.y"
,
#line 1712 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 219 "parser.y"
);
#line 1716 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 33:  /***Yacc rule 33***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree = RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 34:  /***Yacc rule 34***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 228 "parser.y"
 = createNode(OP_AND,
#line 1762 "oxout.y"
RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 228 "parser.y"
,
#line 1766 "oxout.y"
RSNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 228 "parser.y"
);
#line 1770 "oxout.y"
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 35:  /***Yacc rule 35***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree = RSNode->cL[1]->yyyAttrbs.yyyAttrb7.tree;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
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
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 241 "parser.y"
 = createNode(OP_AND,
#line 1820 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 241 "parser.y"
,
#line 1824 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 241 "parser.y"
);
#line 1828 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 38:  /***Yacc rule 38***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 245 "parser.y"
 = createIdentifierLeaf(
#line 1856 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 245 "parser.y"
, getParameterIndex(
#line 1860 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb7.ids
#line 245 "parser.y"
,
#line 1864 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 245 "parser.y"
));
#line 1868 "oxout.y"
    break;
    }
  break;
  }
break;
case 39:  /***Yacc rule 39***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 251 "parser.y"
 = createIdentifierLeaf(
#line 1882 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 251 "parser.y"
, getParameterIndex(
#line 1886 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb7.ids
#line 251 "parser.y"
,
#line 1890 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 251 "parser.y"
));
#line 1894 "oxout.y"
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 40:  /***Yacc rule 40***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 255 "parser.y"
 = createIdentifierLeaf(
#line 1922 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 255 "parser.y"
, getParameterIndex(
#line 1926 "oxout.y"
RSNode->yyyAttrbs.yyyAttrb7.ids
#line 255 "parser.y"
,
#line 1930 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 255 "parser.y"
));
#line 1934 "oxout.y"
    break;
    }
  break;
  case 3:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  }
break;
case 41:  /***Yacc rule 41***/
  switch (whichSym) {
  case 0:  /**/
    switch (whichAttrb) {
    case 1:
RSTopNode->yyyAttrbs.yyyAttrb7.tree
#line 259 "parser.y"
 = createNode(OP_AND,
#line 1962 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 259 "parser.y"
,
#line 1966 "oxout.y"
RSNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 259 "parser.y"
);
#line 1970 "oxout.y"
    break;
    }
  break;
  case 1:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 4:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 5:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
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
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
    break;
    }
  break;
  case 2:  /**/
    switch (whichAttrb) {
    case 0:
RSTopNode->yyyAttrbs.yyyAttrb7.ids = RSNode->yyyAttrbs.yyyAttrb7.ids;
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


for (int travN=0; travN<3; travN++) {
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
		case 2:
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
		case 2:
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
if ((bool) (
#line 43 "parser.y"
(1)
#line 2236 "oxout.y"
)) yyySetCond(0)
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
#line 43 "parser.y"
writeEnterFunction(
#line 2255 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 43 "parser.y"
);
#line 2259 "oxout.y"
}
				break;
					}
		break;
		case 2:
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
if ((bool) (
#line 48 "parser.y"
(1)
#line 2288 "oxout.y"
)) yyySetCond(0)
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
#line 48 "parser.y"
writeEnterFunction(
#line 2307 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 48 "parser.y"
);
#line 2311 "oxout.y"
}
				break;
					}
		break;
		case 2:
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
		case 2:
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
		case 2:
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
		case 2:
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
		case 2:
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
#line 78 "parser.y"
invoke_burm(
#line 2446 "oxout.y"
travNode->cL[1]->yyyAttrbs.yyyAttrb6.tree
#line 78 "parser.y"
);
#line 2450 "oxout.y"
}
				break;
					}
		break;
		case 2:
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
		case 2:
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->yyyAttrbs.yyyAttrb6.tree
#line 98 "parser.y"
->regStor = getFirstRegister();
#line 2535 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 99 "parser.y"
->regStor =
#line 2540 "oxout.y"
travNode->yyyAttrbs.yyyAttrb6.tree
#line 99 "parser.y"
->regStor;
#line 2544 "oxout.y"
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
		case 2:
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
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 2:
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
#line 107 "parser.y"
isVisible(
#line 2599 "oxout.y"
travNode->yyyAttrbs.yyyAttrb6.in
#line 107 "parser.y"
,
#line 2603 "oxout.y"
travNode->cL[1]->yyyAttrbs.yyyAttrb2.name
#line 107 "parser.y"
, LABEL,
#line 2607 "oxout.y"
travNode->cL[1]->yyyAttrbs.yyyAttrb2.lineNr
#line 107 "parser.y"
);
#line 2611 "oxout.y"
}
				break;
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
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 2:
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
#line 116 "parser.y"
isVisible(
#line 2654 "oxout.y"
travNode->yyyAttrbs.yyyAttrb6.in
#line 116 "parser.y"
,
#line 2658 "oxout.y"
travNode->cL[3]->yyyAttrbs.yyyAttrb2.name
#line 116 "parser.y"
, LABEL,
#line 2662 "oxout.y"
travNode->cL[3]->yyyAttrbs.yyyAttrb2.lineNr
#line 116 "parser.y"
);
#line 2666 "oxout.y"
}
				break;
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
		case 2:
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
		case 2:
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
		case 2:
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
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 2:
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
#line 146 "parser.y"
isVisible(
#line 2778 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.ids
#line 146 "parser.y"
,
#line 2782 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 146 "parser.y"
, VARIABLE,
#line 2786 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb2.lineNr
#line 146 "parser.y"
);
#line 2790 "oxout.y"
}
				break;
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
		case 2:
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
yyySetCond(0)
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
if (yyyCond(0) != pass) {travNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 156 "parser.y"
->regStor =
#line 2845 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 156 "parser.y"
->regStor;
#line 2849 "oxout.y"
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 162 "parser.y"
->regStor =
#line 2894 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 162 "parser.y"
->regStor;
#line 2898 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 163 "parser.y"
->regStor = getNextRegister(
#line 2903 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 163 "parser.y"
->regStor);
#line 2907 "oxout.y"
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 168 "parser.y"
->regStor =
#line 2952 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 168 "parser.y"
->regStor;
#line 2956 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 169 "parser.y"
->regStor = getNextRegister(
#line 2961 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 169 "parser.y"
->regStor);
#line 2965 "oxout.y"
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 174 "parser.y"
->regStor =
#line 3010 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 174 "parser.y"
->regStor;
#line 3014 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 175 "parser.y"
->regStor = getNextRegister(
#line 3019 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 175 "parser.y"
->regStor);
#line 3023 "oxout.y"
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 180 "parser.y"
->regStor =
#line 3068 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 180 "parser.y"
->regStor;
#line 3072 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 181 "parser.y"
->regStor = getNextRegister(
#line 3077 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 181 "parser.y"
->regStor);
#line 3081 "oxout.y"
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 186 "parser.y"
->regStor =
#line 3126 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 186 "parser.y"
->regStor;
#line 3130 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 187 "parser.y"
->regStor = getNextRegister(
#line 3135 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 187 "parser.y"
->regStor);
#line 3139 "oxout.y"
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
		case 2:
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
yyySetCond(0)
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
if (yyyCond(0) != pass) {travNode->cL[0]->yyyAttrbs.yyyAttrb7.tree
#line 193 "parser.y"
->regStor =
#line 3183 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 193 "parser.y"
->regStor;
#line 3187 "oxout.y"
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
		case 2:
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
yyySetCond(0)
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
if (yyyCond(0) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 198 "parser.y"
->regStor =
#line 3231 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 198 "parser.y"
->regStor;
#line 3235 "oxout.y"
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
		case 2:
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
yyySetCond(0)
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
if (yyyCond(0) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 203 "parser.y"
->regStor =
#line 3279 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 203 "parser.y"
->regStor;
#line 3283 "oxout.y"
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
		case 2:
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 211 "parser.y"
->regStor =
#line 3351 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 211 "parser.y"
->regStor;
#line 3355 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 212 "parser.y"
->regStor = getNextRegister(
#line 3360 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 212 "parser.y"
->regStor);
#line 3364 "oxout.y"
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
		case 2:
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 220 "parser.y"
->regStor =
#line 3432 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 220 "parser.y"
->regStor;
#line 3436 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 221 "parser.y"
->regStor = getNextRegister(
#line 3441 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 221 "parser.y"
->regStor);
#line 3445 "oxout.y"
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
		case 2:
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
		case 2:
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
yyySetCond(0)
yyySetCond(1)
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
if (yyyCond(0) != pass) {travNode->cL[1]->yyyAttrbs.yyyAttrb7.tree
#line 229 "parser.y"
->regStor =
#line 3513 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 229 "parser.y"
->regStor;
#line 3517 "oxout.y"
}
if (yyyCond(1) != pass) {travNode->cL[2]->yyyAttrbs.yyyAttrb7.tree
#line 230 "parser.y"
->regStor = getNextRegister(
#line 3522 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.tree
#line 230 "parser.y"
->regStor);
#line 3526 "oxout.y"
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
		case 2:
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
		case 2:
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
		case 2:
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
		case 2:
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
					}
		break;
		case 1:
			switch(pass)	{
				case 0:
righttoleft = false;
					}
		break;
		case 2:
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
#line 247 "parser.y"
isVisible(
#line 3650 "oxout.y"
travNode->yyyAttrbs.yyyAttrb7.ids
#line 247 "parser.y"
,
#line 3654 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb2.name
#line 247 "parser.y"
, VARIABLE,
#line 3658 "oxout.y"
travNode->cL[0]->yyyAttrbs.yyyAttrb2.lineNr
#line 247 "parser.y"
);
#line 3662 "oxout.y"
}
				break;
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
		case 2:
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
		case 2:
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
		case 2:
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
		case 2:
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
		case 2:
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



static yyyWAT yyyLRCIL[3] = {0,1,0,
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
  74,  77,  80,  83,  87,  91,  93,  96,  99, 102,
 106, 109, 113, 116, 120, 124, 126, 131, 133, 139,
 145, 152, 153,
 157,
};


static int yyyProds[][2] = {
{  25,   0},{  25,   0},{  25,   0},{  55,   0},{   8,   0},
{  55,   0},{  23,   2},{  11,   0},{  33,   3},{  34,   3},
{  12,   0},{  39,   5},{   1,   0},{  55,   0},{  23,   2},
{  13,   0},{  33,   3},{  34,   3},{  14,   0},{  11,   0},
{  33,   3},{  34,   3},{  12,   0},{  39,   5},{   1,   0},
{  33,   3},{  33,   3},{  33,   3},{  23,   2},{  10,   0},
{  34,   3},{  23,   2},{  39,   5},{  39,   5},{  36,   4},
{  41,   6},{   8,   0},{  39,   5},{  36,   4},{  36,   4},
{  36,   4},{  23,   2},{   9,   0},{  41,   6},{   2,   0},
{  42,   7},{  41,   6},{   3,   0},{  23,   2},{  41,   6},
{   4,   0},{  42,   7},{   3,   0},{  23,   2},{  41,   6},
{   5,   0},{  23,   2},{  17,   0},{  42,   7},{  41,   6},
{  49,   7},{  17,   0},{  42,   7},{  41,   6},{  44,   7},
{  49,   7},{  23,   2},{  49,   7},{  44,   7},{  15,   0},
{  42,   7},{  16,   0},{  42,   7},{  48,   7},{  42,   7},
{  44,   7},{  47,   7},{  42,   7},{  44,   7},{  46,   7},
{  42,   7},{  44,   7},{  45,   7},{  42,   7},{  44,   7},
{  20,   0},{  44,   7},{  42,   7},{  44,   7},{  17,   0},
{  44,   7},{  48,   7},{  44,   7},{  48,   7},{   6,   0},
{  48,   7},{  48,   7},{  21,   0},{  48,   7},{  47,   7},
{  18,   0},{  44,   7},{  47,   7},{  18,   0},{  44,   7},
{  47,   7},{  46,   7},{  19,   0},{  44,   7},{  46,   7},
{  19,   0},{  44,   7},{  46,   7},{  45,   7},{   7,   0},
{  44,   7},{  45,   7},{   7,   0},{  44,   7},{  45,   7},
{  44,   7},{  11,   0},{  42,   7},{  12,   0},{  44,   7},
{  24,   1},{  44,   7},{  44,   7},{  15,   0},{  42,   7},
{  16,   0},{  44,   7},{  23,   2},{  44,   7},{  23,   2},
{  11,   0},{  43,   7},{  42,   7},{  12,   0},{  44,   7},
{  23,   2},{  13,   0},{  43,   7},{  42,   7},{  14,   0},
{  44,   7},{  44,   7},{  22,   0},{  11,   0},{  43,   7},
{  42,   7},{  12,   0},{  43,   7},{  43,   7},{  43,   7},
{  42,   7},{  10,   0},
};


static int yyySortsInd[] = {
  0,
  0,  1,  3,  4,  5,  7, 10,
 12,
};


static int yyySorts[] = {
   28,   29,   30,   32,   35,   37,   38,   37,   38,   27,
   26,   27,
};



static const char *const yyyStringTab[] = {
"NIO","END","RETURN","GOTO","IF",
"VAR","NOT","AND","SEMICOLON","COLON",
"COMMA","BRACKET_OPEN","BRACKET_CLOSE","CURLY_BRACKET_OPEN","CURLY_BRACKET_CLOSE",
"SQUARED_BRACKET_OPEN","SQUARED_BRACKET_CLOSE","EQUAL","ADD","MUL",
"GREATER","SUB","AT_SIGN","ID","NUM",
"Program","ids","tree","value","name",
"lineNr",0,"pars","Pars","Par",
"labels","Labeldef","in","out","Stats",
0,"Stat","Expr","RepeatExpr","Term",
"AndTerm","MulTerm","AddTerm","NotOrSub","Lexpr",
0,0,0,"__y","error",
"Def",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,
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



