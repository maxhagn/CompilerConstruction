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
#line 2 "oxout.y"

#line 4 "oxout.y"


#include "parser.h"

#line 36 "oxout.y"



struct yyyT1 { long value; }; 
typedef struct yyyT1 *yyyP1; 


struct yyyT2 { char *name; int line; }; 
typedef struct yyyT2 *yyyP2; 


struct yyyT3 { ListNode *pars; }; 
typedef struct yyyT3 *yyyP3; 


struct yyyT4 { ListNode *labels; }; 
typedef struct yyyT4 *yyyP4; 


struct yyyT5 { ListNode *in; ListNode* out; }; 
typedef struct yyyT5 *yyyP5; 


struct yyyT6 { ListNode *in; ListNode* out; TreeNode *tree; }; 
typedef struct yyyT6 *yyyP6; 


struct yyyT7 { ListNode *ids; TreeNode *tree; }; 
typedef struct yyyT7 *yyyP7; 
                                                      /*custom*/  
typedef unsigned char yyyWAT; 
typedef unsigned char yyyRCT; 
typedef unsigned short yyyPNT; 
typedef unsigned char yyyWST; 

#include <limits.h>
#define yyyR UCHAR_MAX  

 /* funny type; as wide as the widest of yyyWAT,yyyWST,yyyRCT  */ 
typedef unsigned short yyyFT;

                                                      /*stock*/  




struct yyyGenNode {void *parent;  
                   struct yyyGenNode **cL; /* child list */ 
                   yyyRCT *refCountList; 
                   yyyPNT prodNum;                      
                   yyyWST whichSym; /* which child of parent? */ 
                  }; 

typedef struct yyyGenNode yyyGNT; 



struct yyyTB {int isEmpty; 
              int typeNum; 
              int nAttrbs; 
              char *snBufPtr; 
              yyyWAT *startP,*stopP; 
             };  




extern struct yyyTB yyyTermBuffer; 
extern yyyWAT yyyLRCIL[]; 
extern void yyyGenLeaf(); 


#line 110 "oxout.y"

#include <stdio.h>

int yyyYok = 1;
int yyyInitDone = 0;
char *yyySTsn;
yyyGNT *yyySTN;
int yyyGNSz = sizeof(yyyGNT);
int yyyProdNum,yyyRHSlength,yyyNattrbs,yyyTypeNum; 

extern yyyFT yyyRCIL[];

void yyyExecuteRRsection();
void yyyYoxInit();
void yyyYoxReset();
void yyyDecorate();
void yyyGenIntNode();
void yyyAdjustINRC();
void yyyPrune();
void yyyUnsolvedInstSearchTrav();
void yyyUnsolvedInstSearchTravAux();
void yyyerror();
void yyyShift();



#define yyyRSU(NUM1,NUM2,NUM3,NUM4) \
   yyyProdNum=NUM1;yyyRHSlength=NUM2;yyyNattrbs=NUM3;yyyTypeNum=NUM4;\
   if ((yychar <= 0) && (!yyyTermBuffer.isEmpty)) yyyShift(); 

#line 181 "y.tab.c"

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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
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
       0,   145,   145,   145,   157,   160,   166,   171,   179,   184,
     191,   200,   205,   212,   221,   226,   234,   239,   246,   253,
     262,   271,   279,   287,   297,   304,   311,   316,   321,   326,
     331,   336,   343,   348,   353,   360,   364,   371,   375,   382,
     386,   393,   397,   403,   408,   413,   418,   423,   431,   436
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
  "$@1", "Program", "Def", "Pars", "Par", "ParsPointer", "ParPointer",
  "Stats", "Labeldef", "Stat", "Lexpr", "Expr", "NotOrSub", "AddTerm",
  "MulTerm", "AndTerm", "Term", "RepeatExpr", YY_NULLPTR
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

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -48,    18,   -48,   -48,    -6,    -5,    12,   -48,   -48,   -48,
       7,    22,    24,    66,    40,    42,   -48,    70,   -48,    69,
      80,     8,   -48,   -48,    31,    60,    31,    61,    31,    56,
     -48,    74,    68,    13,     7,    31,    31,    59,   -48,   -48,
      44,   -48,    83,    71,    75,   -48,   -48,   -48,    70,    31,
      31,    78,    79,   -48,    53,   -48,    -9,    31,    -9,    -9,
      -9,    -9,   -48,   -48,   -48,    72,    31,   -48,    31,    31,
     -48,   -48,    76,   -48,    70,    11,    77,    53,    21,    38,
      53,   -48,   -48,    64,    -7,    73,    31,    93,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,    67,   -48,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     4,     1,     3,     0,     0,     8,    11,     5,
       0,     0,    10,     0,    13,     0,     9,    16,    12,     0,
       0,     0,     8,     6,     0,     0,     0,     0,     0,    44,
      42,     0,     0,    23,     0,     0,     0,    44,    18,    26,
      32,    19,     0,     0,     0,    17,    48,    48,    16,     0,
       0,     0,     0,    33,    32,    34,     0,     0,     0,     0,
       0,     0,    27,    28,    29,     0,     0,    41,     0,     0,
      15,    22,     0,    48,    16,    39,     0,    31,    35,    37,
      30,    20,    21,     0,     0,    43,     0,     0,    40,    43,
      36,    38,    49,    45,    46,     0,     7,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,   -48,   -48,   -48,    81,    65,   -48,   -48,   -47,
     -48,   -48,   -48,   -26,   -29,    20,    23,    25,   -10,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     4,     6,    10,    13,    11,    15,    20,
      21,    31,    32,    38,    39,    62,    63,    64,    40,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    70,    44,    69,    28,    92,    53,    55,     7,    94,
       8,    33,    24,    25,    26,    27,    37,    30,     3,     5,
      56,    28,     9,    71,    72,    54,    54,    87,    57,    86,
      50,    76,    12,    29,    30,    51,    16,    51,    57,    35,
      82,    59,    83,    84,    28,    51,    75,    14,    77,    78,
      79,    80,    18,    56,    36,    57,    37,    30,    19,    60,
      95,    57,    51,    58,    59,    60,    61,    45,    51,    46,
      57,    47,    46,   -14,    47,   -24,    92,    51,    93,    92,
      17,    97,    22,    23,    48,    41,    43,    49,    65,    67,
      66,    73,   -25,    74,    85,    89,    96,    81,    90,    52,
      88,     0,    91,    34
};

static const yytype_int8 yycheck[] =
{
      26,    48,    28,    47,    13,    12,    35,    36,    13,    16,
      15,    21,     4,     5,     6,     7,    25,    26,     0,    25,
       9,    13,    10,    49,    50,    35,    36,    74,    17,    73,
      17,    57,    25,    25,    26,    24,    12,    24,    17,     8,
      66,    20,    68,    69,    13,    24,    56,    25,    58,    59,
      60,    61,    12,     9,    23,    17,    25,    26,    16,    21,
      86,    17,    24,    19,    20,    21,    22,    11,    24,    13,
      17,    15,    13,     3,    15,    19,    12,    24,    14,    12,
      14,    14,    13,     3,    10,    25,    25,    19,     5,    14,
      19,    13,    19,    14,    18,    18,     3,    25,    78,    34,
      75,    -1,    79,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    29,     0,    30,    25,    31,    13,    15,    10,
      32,    34,    25,    33,    25,    35,    12,    14,    12,    16,
      36,    37,    13,     3,     4,     5,     6,     7,    13,    25,
      26,    38,    39,    45,    32,     8,    23,    25,    40,    41,
      45,    25,    40,    25,    40,    11,    13,    15,    10,    19,
      17,    24,    33,    41,    45,    41,     9,    17,    19,    20,
      21,    22,    42,    43,    44,     5,    19,    14,    46,    46,
      36,    40,    40,    13,    14,    45,    40,    45,    45,    45,
      45,    25,    40,    40,    40,    18,    46,    36,    44,    18,
      42,    43,    12,    14,    16,    40,     3,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    27,    29,    28,    30,    30,    31,    31,    32,    32,
      33,    34,    34,    35,    36,    36,    37,    37,    38,    38,
      38,    38,    38,    38,    39,    39,    40,    40,    40,    40,
      40,    40,    41,    41,    41,    42,    42,    43,    43,    44,
      44,    45,    45,    45,    45,    45,    45,    45,    46,    46
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     3,     7,    11,     0,     3,
       1,     0,     3,     1,     0,     4,     0,     3,     2,     2,
       4,     4,     3,     1,     1,     4,     1,     2,     2,     2,
       3,     3,     1,     2,     2,     2,     3,     2,     3,     2,
       3,     3,     1,     4,     1,     5,     5,     6,     0,     3
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
#line 145 "oxout.y"
                {if (!yyyInitDone) 
		    {yyyYoxInit(); 
		     yyyInitDone = 1;
		    }
		 yyyYoxReset();
		}
#line 1519 "y.tab.c"
    break;

  case 3:
#line 152 "oxout.y"
                {
		 yyyDecorate(); yyyExecuteRRsection();
		}
#line 1527 "y.tab.c"
    break;

  case 4:
#line 157 "oxout.y"
            {if(yyyYok){
yyyRSU(1,0,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);}}
#line 1536 "y.tab.c"
    break;

  case 5:
#line 161 "oxout.y"
            {if(yyyYok){
yyyRSU(2,3,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+0);/*yyyPrune(2);*/}}
#line 1545 "y.tab.c"
    break;

  case 6:
#line 167 "oxout.y"
                        {if(yyyYok){
yyyRSU(3,7,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+0,yyyRCIL+3);/*yyyPrune(3);*/}}
#line 1554 "y.tab.c"
    break;

  case 7:
#line 172 "oxout.y"
                        {if(yyyYok){
yyyRSU(4,11,0,0);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+3,yyyRCIL+6);/*yyyPrune(4);*/}}
#line 1563 "y.tab.c"
    break;

  case 8:
#line 179 "oxout.y"
                {if(yyyYok){
yyyRSU(5,0,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->pars) = newListNode();
            yyyAdjustINRC(yyyRCIL+6,yyyRCIL+9);}}
#line 1573 "y.tab.c"
    break;

  case 9:
#line 185 "oxout.y"
                {if(yyyYok){
yyyRSU(6,3,1,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+9,yyyRCIL+12);/*yyyPrune(6);*/}}
#line 1582 "y.tab.c"
    break;

  case 10:
#line 192 "oxout.y"
            {if(yyyYok){
yyyRSU(7,1,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->pars) = add(newListNode(), (((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->name), PARAMETER, (((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->line));
	    	yyyAdjustINRC(yyyRCIL+12,yyyRCIL+15);/*yyyPrune(7);*/}}
#line 1592 "y.tab.c"
    break;

  case 11:
#line 200 "oxout.y"
                {if(yyyYok){
yyyRSU(8,0,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->pars) = newListNode();
            yyyAdjustINRC(yyyRCIL+15,yyyRCIL+18);}}
#line 1602 "y.tab.c"
    break;

  case 12:
#line 206 "oxout.y"
                {if(yyyYok){
yyyRSU(9,3,1,3);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+18,yyyRCIL+21);/*yyyPrune(9);*/}}
#line 1611 "y.tab.c"
    break;

  case 13:
#line 213 "oxout.y"
            {if(yyyYok){
yyyRSU(10,1,1,3);
yyyGenIntNode();
 (((yyyP3)yyySTsn)->pars) = add(newListNode(), (((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->name), PARAMETER_POINTER, (((yyyP2)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->line));
	    	yyyAdjustINRC(yyyRCIL+21,yyyRCIL+24);/*yyyPrune(10);*/}}
#line 1621 "y.tab.c"
    break;

  case 14:
#line 221 "oxout.y"
                        {if(yyyYok){
yyyRSU(11,0,2,5);
yyyGenIntNode();
 (((yyyP5)yyySTsn)->out) = newListNode();
	    	yyyAdjustINRC(yyyRCIL+24,yyyRCIL+27);}}
#line 1631 "y.tab.c"
    break;

  case 15:
#line 227 "oxout.y"
            {if(yyyYok){
yyyRSU(12,4,2,5);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+27,yyyRCIL+36);}}
#line 1640 "y.tab.c"
    break;

  case 16:
#line 234 "oxout.y"
                        {if(yyyYok){
yyyRSU(13,0,1,4);
yyyGenIntNode();
 (((yyyP4)yyySTsn)->labels) = newListNode();
			yyyAdjustINRC(yyyRCIL+36,yyyRCIL+39);}}
#line 1650 "y.tab.c"
    break;

  case 17:
#line 240 "oxout.y"
                {if(yyyYok){
yyyRSU(14,3,1,4);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+39,yyyRCIL+42);/*yyyPrune(14);*/}}
#line 1659 "y.tab.c"
    break;

  case 18:
#line 247 "oxout.y"
                {if(yyyYok){
yyyRSU(15,2,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

                yyyAdjustINRC(yyyRCIL+42,yyyRCIL+51);}}
#line 1670 "y.tab.c"
    break;

  case 19:
#line 254 "oxout.y"
                        {if(yyyYok){
yyyRSU(16,2,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

				 (((yyyP6)yyySTsn)->tree) = NULL;

				yyyAdjustINRC(yyyRCIL+51,yyyRCIL+57);/*yyyPrune(16);*/}}
#line 1683 "y.tab.c"
    break;

  case 20:
#line 263 "oxout.y"
                        {if(yyyYok){
yyyRSU(17,4,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

				 (((yyyP6)yyySTsn)->tree) = NULL;

				yyyAdjustINRC(yyyRCIL+57,yyyRCIL+66);}}
#line 1696 "y.tab.c"
    break;

  case 21:
#line 272 "oxout.y"
                        {if(yyyYok){
yyyRSU(18,4,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->tree) = NULL;
			 (((yyyP6)yyySTsn)->out) = add(newListNode(), (((yyyP2)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->name), VARIABLE, (((yyyP2)(((char *)((yyySTN->cL)[1]))+yyyGNSz))->line));

				yyyAdjustINRC(yyyRCIL+66,yyyRCIL+75);}}
#line 1708 "y.tab.c"
    break;

  case 22:
#line 280 "oxout.y"
                        {if(yyyYok){
yyyRSU(19,3,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

				 (((yyyP6)yyySTsn)->tree) = NULL;
			yyyAdjustINRC(yyyRCIL+75,yyyRCIL+87);}}
#line 1720 "y.tab.c"
    break;

  case 23:
#line 288 "oxout.y"
                        {if(yyyYok){
yyyRSU(20,1,3,6);
yyyGenIntNode();
 (((yyyP6)yyySTsn)->out) = newListNode();

				 (((yyyP6)yyySTsn)->tree) = NULL;
			yyyAdjustINRC(yyyRCIL+87,yyyRCIL+96);}}
#line 1732 "y.tab.c"
    break;

  case 24:
#line 298 "oxout.y"
                        {if(yyyYok){
yyyRSU(21,1,2,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tree) = NULL;

                yyyAdjustINRC(yyyRCIL+96,yyyRCIL+99);/*yyyPrune(21);*/}}
#line 1743 "y.tab.c"
    break;

  case 25:
#line 305 "oxout.y"
            {if(yyyYok){
yyyRSU(22,4,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+99,yyyRCIL+108);}}
#line 1752 "y.tab.c"
    break;

  case 26:
#line 312 "oxout.y"
                        {if(yyyYok){
yyyRSU(23,1,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+108,yyyRCIL+114);}}
#line 1761 "y.tab.c"
    break;

  case 27:
#line 317 "oxout.y"
            {if(yyyYok){
yyyRSU(24,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+114,yyyRCIL+123);}}
#line 1770 "y.tab.c"
    break;

  case 28:
#line 322 "oxout.y"
            {if(yyyYok){
yyyRSU(25,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+123,yyyRCIL+132);}}
#line 1779 "y.tab.c"
    break;

  case 29:
#line 327 "oxout.y"
            {if(yyyYok){
yyyRSU(26,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+132,yyyRCIL+141);}}
#line 1788 "y.tab.c"
    break;

  case 30:
#line 332 "oxout.y"
            {if(yyyYok){
yyyRSU(27,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+141,yyyRCIL+150);}}
#line 1797 "y.tab.c"
    break;

  case 31:
#line 337 "oxout.y"
            {if(yyyYok){
yyyRSU(28,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+150,yyyRCIL+159);}}
#line 1806 "y.tab.c"
    break;

  case 32:
#line 344 "oxout.y"
                        {if(yyyYok){
yyyRSU(29,1,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+159,yyyRCIL+165);}}
#line 1815 "y.tab.c"
    break;

  case 33:
#line 349 "oxout.y"
                {if(yyyYok){
yyyRSU(30,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+165,yyyRCIL+171);}}
#line 1824 "y.tab.c"
    break;

  case 34:
#line 354 "oxout.y"
            {if(yyyYok){
yyyRSU(31,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+171,yyyRCIL+177);}}
#line 1833 "y.tab.c"
    break;

  case 35:
#line 361 "oxout.y"
            {if(yyyYok){
yyyRSU(32,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+177,yyyRCIL+183);}}
#line 1842 "y.tab.c"
    break;

  case 36:
#line 365 "oxout.y"
            {if(yyyYok){
yyyRSU(33,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+183,yyyRCIL+192);}}
#line 1851 "y.tab.c"
    break;

  case 37:
#line 372 "oxout.y"
            {if(yyyYok){
yyyRSU(34,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+192,yyyRCIL+198);}}
#line 1860 "y.tab.c"
    break;

  case 38:
#line 376 "oxout.y"
            {if(yyyYok){
yyyRSU(35,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+198,yyyRCIL+207);}}
#line 1869 "y.tab.c"
    break;

  case 39:
#line 383 "oxout.y"
            {if(yyyYok){
yyyRSU(36,2,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+207,yyyRCIL+213);}}
#line 1878 "y.tab.c"
    break;

  case 40:
#line 387 "oxout.y"
            {if(yyyYok){
yyyRSU(37,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+213,yyyRCIL+222);}}
#line 1887 "y.tab.c"
    break;

  case 41:
#line 394 "oxout.y"
            {if(yyyYok){
yyyRSU(38,3,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+222,yyyRCIL+228);}}
#line 1896 "y.tab.c"
    break;

  case 42:
#line 398 "oxout.y"
            {if(yyyYok){
yyyRSU(39,1,2,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tree) = newNumberTreeNode((((yyyP1)(((char *)((yyySTN->cL)[0]))+yyyGNSz))->value));
			yyyAdjustINRC(yyyRCIL+228,yyyRCIL+231);/*yyyPrune(39);*/}}
#line 1906 "y.tab.c"
    break;

  case 43:
#line 404 "oxout.y"
            {if(yyyYok){
yyyRSU(40,4,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+231,yyyRCIL+240);}}
#line 1915 "y.tab.c"
    break;

  case 44:
#line 409 "oxout.y"
            {if(yyyYok){
yyyRSU(41,1,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+240,yyyRCIL+243);}}
#line 1924 "y.tab.c"
    break;

  case 45:
#line 414 "oxout.y"
            {if(yyyYok){
yyyRSU(42,5,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+243,yyyRCIL+252);}}
#line 1933 "y.tab.c"
    break;

  case 46:
#line 419 "oxout.y"
            {if(yyyYok){
yyyRSU(43,5,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+252,yyyRCIL+261);}}
#line 1942 "y.tab.c"
    break;

  case 47:
#line 424 "oxout.y"
            {if(yyyYok){
yyyRSU(44,6,2,7);
yyyGenIntNode();
yyyAdjustINRC(yyyRCIL+261,yyyRCIL+273);}}
#line 1951 "y.tab.c"
    break;

  case 48:
#line 431 "oxout.y"
                        {if(yyyYok){
yyyRSU(45,0,2,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tree) = NULL;
			yyyAdjustINRC(yyyRCIL+273,yyyRCIL+276);}}
#line 1961 "y.tab.c"
    break;

  case 49:
#line 437 "oxout.y"
            {if(yyyYok){
yyyRSU(46,3,2,7);
yyyGenIntNode();
 (((yyyP7)yyySTsn)->tree) = NULL;
			yyyAdjustINRC(yyyRCIL+276,yyyRCIL+285);}}
#line 1971 "y.tab.c"
    break;


#line 1975 "y.tab.c"

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
#line 445 "oxout.y"


int main(void)
{
    yyparse();
    return 0;
}                                                      /*custom*/  
long yyyMaxNbytesNodeStg = 2000000; 
long yyyMaxNrefCounts =    500000; 
long yyyMaxNchildren =     60000; 
long yyyMaxStackSize =     2000; 
long yyySSALspaceSize =    20000; 
long yyyRSmaxSize =        1000; 
long yyyTravStackMaxSize = 2000; 


struct yyyTB yyyTermBuffer; 

char *yyyNodeAndStackSpace; 

char *yyyNodeSpace;
char *yyyNextNodeSpace; 
char *yyyAfterNodeSpace; 


 
struct yyyGenNode **yyyChildListSpace;  
struct yyyGenNode **yyyNextCLspace; 
struct yyyGenNode **yyyAfterChildListSpace; 



yyyRCT *yyyRefCountListSpace;
yyyRCT *yyyNextRCLspace;  
yyyRCT *yyyAfterRefCountListSpace;   



struct yyySolvedSAlistCell {yyyWAT attrbNum; 
                            long next; 
                           }; 
#define yyyLambdaSSAL 0 
long yyySSALCfreeList = yyyLambdaSSAL; 
long yyyNewSSALC = 1; 
 
struct yyySolvedSAlistCell *yyySSALspace; 


 
struct yyyStackItem {struct yyyGenNode *node; 
                     long solvedSAlist; 
                     struct yyyGenNode *oldestNode; 
                    };  

long yyyNbytesStackStg; 
struct yyyStackItem *yyyStack; 
struct yyyStackItem *yyyAfterStack; 
struct yyyStackItem *yyyStackTop; 



struct yyyRSitem {yyyGNT *node; 
                  yyyWST whichSym; 
                  yyyWAT wa;  
                 };  

struct yyyRSitem *yyyRS;  
struct yyyRSitem *yyyRSTop;  
struct yyyRSitem *yyyAfterRS;  
 





yyyFT yyyRCIL[] = {
5,0,3, 9,0,5, yyyR,0,0, yyyR,0,1, yyyR,0,0, yyyR,0,0, 
yyyR,0,1, yyyR,0,0, yyyR,1,0, yyyR,1,2, 1,0,1, 3,0,2, 
yyyR,0,0, yyyR,0,1, yyyR,1,0, yyyR,2,1, 1,0,1, yyyR,1,0, 
yyyR,2,0, yyyR,1,0, yyyR,2,0, 1,0,1, yyyR,1,0, yyyR,2,0, 
3,0,1, yyyR,1,0, yyyR,2,0, 0,0,1, 2,0,1, yyyR,1,0, 
yyyR,2,0, 0,0,1, yyyR,1,0, yyyR,1,1, 0,0,1, 2,0,1, 
yyyR,1,1, 0,0,1, yyyR,1,2, 0,0,1, 1,0,1, yyyR,1,2, 
0,0,1, 1,0,1, yyyR,1,2, 0,0,1, 1,0,1, yyyR,1,2, 
0,0,1, 2,0,1, yyyR,1,2, 0,0,1, 2,0,1, yyyR,1,1, 
0,0,1, yyyR,1,1, 1,0,1, yyyR,1,1, 1,0,1, yyyR,1,1, 
1,0,1, yyyR,1,2, 1,0,1, 2,0,1, yyyR,1,1, 1,0,1, 
yyyR,1,2, 1,0,1, 2,0,1, yyyR,1,1, 1,0,1, yyyR,1,2, 
1,0,1, 2,0,1, yyyR,1,1, 1,0,1, yyyR,1,0, yyyR,1,1, 
0,0,1, 2,0,1, yyyR,1,1, yyyR,1,1, 2,0,1, 3,0,1, 
yyyR,1,1, 2,0,1, 3,0,1, yyyR,1,1, 0,0,1, 3,0,1, 
4,0,1, yyyR,1,0, yyyR,1,0, 0,0,1, 1,0,1, 
};

short yyyIIIEL[] = {0,
0,1,5,13,25,26,30,32,33,37,
39,40,45,46,50,53,56,61,66,70,
72,74,79,81,84,87,90,94,98,100,
103,106,109,113,116,120,123,127,131,133,
138,140,146,152,159,160,
};

long yyyIIEL[] = {
0,0,0,0,0,0,0,2,2,3,4,4,
6,6,6,8,8,9,10,10,10,11,12,12,
14,14,15,16,17,19,19,20,22,23,24,25,
27,27,28,30,32,34,35,38,38,40,41,42,
43,45,45,48,48,50,53,53,55,58,58,60,
60,62,65,65,67,67,69,72,74,74,76,79,
81,83,85,87,89,89,91,91,93,95,97,99,
101,103,105,107,109,111,113,115,117,117,119,121,
123,123,125,127,129,131,131,133,135,135,137,139,
139,141,143,143,145,147,149,149,151,153,153,155,
157,159,159,161,163,163,165,167,169,169,171,171,
173,174,176,178,178,180,180,182,184,186,188,188,
190,192,192,194,196,196,198,200,200,202,204,204,
204,206,208,208,210,212,214,216,
};

long yyyIEL[] = {
0,0,0,2,4,4,6,6,
6,8,10,12,14,14,16,16,
16,18,20,22,22,24,26,26,
26,28,30,32,32,34,36,36,
36,40,40,42,42,44,44,44,
46,46,46,48,50,52,54,54,
54,54,56,56,56,56,56,56,
58,58,58,58,58,58,58,60,
60,60,62,64,64,64,68,68,
68,68,68,68,68,70,70,70,
70,70,70,70,70,70,74,74,
74,76,76,76,78,78,78,80,
84,84,84,86,86,88,92,92,
92,94,94,96,100,100,100,102,
102,104,108,108,108,110,110,112,
116,116,116,118,118,120,122,122,
122,124,126,126,126,128,130,130,
130,132,134,134,134,136,140,140,
140,142,142,144,146,146,146,148,
152,152,152,154,154,156,158,158,
158,160,164,164,164,166,166,168,
170,170,170,172,172,172,174,178,
178,178,180,180,180,182,182,184,
184,190,190,192,192,192,192,192,
192,198,198,200,200,200,200,200,
200,206,206,206,208,208,208,208,
208,208,208,212,212,212,212,212,
212,
};

yyyFT yyyEntL[] = {
6,0,6,0,6,0,10,0,10,0,10,0,10,0,10,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,4,0,2,0,0,1,4,0,0,1,0,0,
0,0,0,0,2,0,0,2,2,0,4,0,0,1,0,1,
1,0,3,0,1,0,3,0,1,0,0,1,1,0,0,1,
2,0,1,0,0,1,0,1,2,0,1,0,0,1,0,1,
2,0,1,0,0,1,0,1,3,0,1,0,0,1,0,1,
3,0,1,0,0,1,0,1,1,0,0,1,2,0,0,1,
2,0,0,1,2,0,0,1,3,0,2,0,0,1,0,1,
2,0,0,1,3,0,2,0,0,1,0,1,2,0,0,1,
3,0,2,0,0,1,0,1,2,0,0,1,0,1,3,0,
1,0,0,1,0,1,0,1,0,1,4,0,3,0,0,1,
0,1,4,0,3,0,0,1,5,0,4,0,1,0,0,1,
2,0,1,0,
};

#define yyyPermitUserAlloc  0 


void yyyfatal(msg)
  char *msg; 
{fprintf(stderr,msg);exit(-1);} 



#define yyyNSof   'n' 
#define yyyRCof   'r' 
#define yyyCLof   'c' 
#define yyySof    's' 
#define yyySSALof 'S' 
#define yyyRSof   'q' 
#define yyyTSof   't' 



void yyyHandleOverflow(which) 
  char which; 
  {char *msg1,*msg2; 
   long  oldSize,newSize; 
   switch(which) 
     {
      case yyyNSof   : 
           msg1 = "node storage overflow: ";
           oldSize = yyyMaxNbytesNodeStg; 
           break; 
      case yyyRCof   : 
           msg1 = "dependee count overflow: ";
           oldSize = yyyMaxNrefCounts; 
           break; 
      case yyyCLof   : 
           msg1 = "child list overflow: ";
           oldSize = yyyMaxNchildren; 
           break; 
      case yyySof    : 
           msg1 = "parse-tree stack overflow: ";
           oldSize = yyyMaxStackSize; 
           break; 
      case yyySSALof : 
           msg1 = "SSAL overflow: ";
           oldSize = yyySSALspaceSize; 
           break; 
      case yyyRSof   : 
           msg1 = "ready set overflow: ";
           oldSize = yyyRSmaxSize; 
           break; 
      case yyyTSof   : 
           msg1 = "traversal stack overflow: ";
           oldSize = yyyTravStackMaxSize; 
           break; 
      default        :;  
     }
   newSize = (3*oldSize)/2; 
   if (newSize < 100) newSize = 100; 
   fprintf(stderr,msg1); 
   fprintf(stderr,"size was %d.\n",oldSize); 
   if (yyyPermitUserAlloc) 
      msg2 = "     Try -Y%c%d option.\n"; 
      else 
      msg2 = "     Have to modify evaluator:  -Y%c%d.\n"; 
   fprintf(stderr,msg2,which,newSize); 
   exit(-1); 
  }



void yyySignalEnts(node,startP,stopP) 
  register yyyGNT *node; 
  register yyyFT *startP,*stopP;  
  {register yyyGNT *dumNode; 

   while (startP < stopP)  
     {
      if (!(*startP)) dumNode = node;  
         else dumNode = (node->cL)[(*startP)-1];   
      if (!(--((dumNode->refCountList)[*(startP+1)]
              ) 
           )
         ) 
         { 
          if (++yyyRSTop == yyyAfterRS) 
             {yyyHandleOverflow(yyyRSof); 
              break; 
             }
          yyyRSTop->node = dumNode; 
          yyyRSTop->whichSym = *startP;  
          yyyRSTop->wa = *(startP+1);  
         }  
      startP += 2;  
     }  
  } 




#define yyyCeiling(num,inc) (((inc) * ((num)/(inc))) + (((num)%(inc))?(inc):0)) 



int yyyAlignSize = 4;
int yyyNdSz[8];

int yyyNdPrSz[8];

typedef int yyyCopyType;

int yyyNdCopySz[8];
long yyyBiggestNodeSize = 0;

void yyyNodeSizeCalc()
  {int i;
   yyyGNSz = yyyCeiling(yyyGNSz,yyyAlignSize); 
   yyyNdSz[0] = 0;
   yyyNdSz[1] = sizeof(struct yyyT1);
   yyyNdSz[2] = sizeof(struct yyyT2);
   yyyNdSz[3] = sizeof(struct yyyT3);
   yyyNdSz[4] = sizeof(struct yyyT4);
   yyyNdSz[5] = sizeof(struct yyyT5);
   yyyNdSz[6] = sizeof(struct yyyT6);
   yyyNdSz[7] = sizeof(struct yyyT7);
   for (i=0;i<8;i++) 
       {yyyNdSz[i] = yyyCeiling(yyyNdSz[i],yyyAlignSize); 
        yyyNdPrSz[i] = yyyNdSz[i] + yyyGNSz;
        if (yyyBiggestNodeSize < yyyNdSz[i])
           yyyBiggestNodeSize = yyyNdSz[i];
        yyyNdCopySz[i] = yyyCeiling(yyyNdSz[i],sizeof(yyyCopyType)) / 
                         sizeof(yyyCopyType); 
       }
  }




void yyySolveAndSignal() {
register long yyyiDum,*yyypL;
register int yyyws,yyywa;
register yyyGNT *yyyRSTopN,*yyyRefN; 
register void *yyyRSTopNp; 


yyyRSTopNp = (yyyRSTopN = yyyRSTop->node)->parent;
yyyRefN= (yyyws = (yyyRSTop->whichSym))?((yyyGNT *)yyyRSTopNp):yyyRSTopN;
yyywa = yyyRSTop->wa; 
yyyRSTop--;
switch(yyyRefN->prodNum) {
case 1:  /***yacc rule 1***/
  switch (yyyws) {
  }
break;
case 2:  /***yacc rule 2***/
  switch (yyyws) {
  }
break;
case 3:  /***yacc rule 3***/
  switch (yyyws) {
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    }
  break;
  case 6:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in) = merge(3, (((yyyP3)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->pars), (((yyyP3)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->pars), (((yyyP5)(((char *)((yyyRefN->cL)[5]))+yyyGNSz))->out));

                    break;
    }
  break;
  }
break;
case 4:  /***yacc rule 4***/
  switch (yyyws) {
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    }
  break;
  case 7:  /**/
    switch (yyywa) {
    }
  break;
  case 8:  /**/
    switch (yyywa) {
    }
  break;
  case 10:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in) = merge(5, (((yyyP3)(((char *)((yyyRefN->cL)[6]))+yyyGNSz))->pars), (((yyyP3)(((char *)((yyyRefN->cL)[7]))+yyyGNSz))->pars), (((yyyP3)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->pars), (((yyyP3)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->pars), (((yyyP5)(((char *)((yyyRefN->cL)[9]))+yyyGNSz))->out));

                    break;
    }
  break;
  }
break;
case 5:  /***yacc rule 5***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 6:  /***yacc rule 6***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->pars) = add((((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->pars), (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), PARAMETER, (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->line));
	    	    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 7:  /***yacc rule 7***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 8:  /***yacc rule 8***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 9:  /***yacc rule 9***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP3)(((char *)yyyRSTopN)+yyyGNSz))->pars) = add((((yyyP3)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->pars), (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), PARAMETER_POINTER, (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->line));
	    	    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 10:  /***yacc rule 10***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 11:  /***yacc rule 11***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 12:  /***yacc rule 12***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->out) = merge(2, (((yyyP4)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->labels), (((yyyP5)(((char *)((yyyRefN->cL)[3]))+yyyGNSz))->out));
            	    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->in)   = (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->in);
            	    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP5)(((char *)yyyRSTopN)+yyyGNSz))->in)  = merge(2, (((yyyP5)(((char *)yyyRefN)+yyyGNSz))->in), (((yyyP6)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->out));

            	    break;
    }
  break;
  }
break;
case 13:  /***yacc rule 13***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 14:  /***yacc rule 14***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP4)(((char *)yyyRSTopN)+yyyGNSz))->labels) = add((((yyyP4)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->labels), (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->name), LABEL, (((yyyP2)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->line));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 15:  /***yacc rule 15***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 2:
 (((yyyP6)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_RETURN, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), NULL);
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
                    break;
    }
  break;
  }
break;
case 16:  /***yacc rule 16***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 17:  /***yacc rule 17***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 18:  /***yacc rule 18***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  }
break;
case 19:  /***yacc rule 19***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  }
break;
case 20:  /***yacc rule 20***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP6)(((char *)yyyRefN)+yyyGNSz))->in);
				    break;
    }
  break;
  }
break;
case 21:  /***yacc rule 21***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 22:  /***yacc rule 22***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 23:  /***yacc rule 23***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 24:  /***yacc rule 24***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_ADD, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree));

				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 25:  /***yacc rule 25***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_MUL, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 26:  /***yacc rule 26***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 27:  /***yacc rule 27***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_GREATER, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 28:  /***yacc rule 28***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_EQUAL, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 29:  /***yacc rule 29***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 30:  /***yacc rule 30***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_NOT, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), NULL);
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 31:  /***yacc rule 31***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_SUB, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), NULL);
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 32:  /***yacc rule 32***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 33:  /***yacc rule 33***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_ADD, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 34:  /***yacc rule 34***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 35:  /***yacc rule 35***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_MUL, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 36:  /***yacc rule 36***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 37:  /***yacc rule 37***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[2]))+yyyGNSz))->tree));
				    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 38:  /***yacc rule 38***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = (((yyyP7)(((char *)((yyyRefN->cL)[1]))+yyyGNSz))->tree);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 39:  /***yacc rule 39***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 40:  /***yacc rule 40***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 41:  /***yacc rule 41***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newRegisterTreeNode((((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name), getIndex((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)), getOffset((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)));

				    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 42:  /***yacc rule 42***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newRegisterTreeNode((((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name), getIndex((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)), getOffset((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 43:  /***yacc rule 43***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newRegisterTreeNode((((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name), getIndex((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)), getOffset((((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->name)));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    }
  break;
  case 3:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 44:  /***yacc rule 44***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    case 1:
 (((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->tree) = newTreeNode(OP_AND, (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree), (((yyyP7)(((char *)((yyyRefN->cL)[0]))+yyyGNSz))->tree));
			    break;
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 4:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 5:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
case 45:  /***yacc rule 45***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  }
break;
case 46:  /***yacc rule 46***/
  switch (yyyws) {
  case 0:  /**/
    switch (yyywa) {
    }
  break;
  case 1:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  case 2:  /**/
    switch (yyywa) {
    case 0:
(((yyyP7)(((char *)yyyRSTopN)+yyyGNSz))->ids) = (((yyyP7)(((char *)yyyRefN)+yyyGNSz))->ids);
    break;
    }
  break;
  }
break;
} /* switch */ 

if (yyyws)  /* the just-solved instance was inherited. */ 
   {if (yyyRSTopN->prodNum) 
       {yyyiDum = yyyIIEL[yyyIIIEL[yyyRSTopN->prodNum]] + yyywa;
        yyySignalEnts(yyyRSTopN,yyyEntL + yyyIEL[yyyiDum],
                                yyyEntL + yyyIEL[yyyiDum+1]
                     );
       }
   } 
   else     /* the just-solved instance was synthesized. */ 
   {if ((char *)yyyRSTopNp >= yyyNodeSpace) /* node has a parent. */ 
       {yyyiDum = yyyIIEL[yyyIIIEL[((yyyGNT *)yyyRSTopNp)->prodNum] + 
                          yyyRSTopN->whichSym 
                         ] + 
                  yyywa;
        yyySignalEnts((yyyGNT *)yyyRSTopNp,
                      yyyEntL + yyyIEL[yyyiDum],
                      yyyEntL + yyyIEL[yyyiDum+1] 
                     );
       } 
       else   /* node is still on the stack--it has no parent yet. */ 
       {yyypL = &(((struct yyyStackItem *)yyyRSTopNp)->solvedSAlist); 
        if (yyySSALCfreeList == yyyLambdaSSAL) 
           {yyySSALspace[yyyNewSSALC].next = *yyypL; 
            if ((*yyypL = yyyNewSSALC++) == yyySSALspaceSize) 
               yyyHandleOverflow(yyySSALof); 
           }  
           else
           {yyyiDum = yyySSALCfreeList; 
            yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
            yyySSALspace[yyyiDum].next = *yyypL; 
            *yyypL = yyyiDum;  
           } 
        yyySSALspace[*yyypL].attrbNum = yyywa; 
       } 
   }

} /* yyySolveAndSignal */ 






#define condStg unsigned int conds;
#define yyyClearConds {yyyTST->conds = 0;}
#define yyySetCond(n) {yyyTST->conds += (1<<(n));}
#define yyyCond(n) ((yyyTST->conds & (1<<(n)))?1:0)



struct yyyTravStackItem {yyyGNT *node; 
                         char isReady;
                         condStg
                        };



void yyyDoTraversals()
{struct yyyTravStackItem *yyyTravStack,*yyyTST,*yyyAfterTravStack;
 register yyyGNT *yyyTSTn,**yyyCLptr1,**yyyCLptr2; 
 register int yyyi,yyyRL,yyyPass;

 if (!yyyYok) return;
 if ((yyyTravStack = 
                 ((struct yyyTravStackItem *) 
                  malloc((yyyTravStackMaxSize * 
                                  sizeof(struct yyyTravStackItem)
                                 )
                        )
                 )
     )
     == 
     (struct yyyTravStackItem *)NULL
    ) 
    {fprintf(stderr,"malloc error in traversal stack allocation\n"); 
     exit(-1); 
    } 

yyyAfterTravStack = yyyTravStack + yyyTravStackMaxSize; 
yyyTravStack++; 


for (yyyi=0; yyyi<3; yyyi++) {
yyyTST = yyyTravStack; 
yyyTST->node = yyyStack->node;
yyyTST->isReady = 0;
yyyClearConds

while(yyyTST >= yyyTravStack)
  {yyyTSTn = yyyTST->node;
   if (yyyTST->isReady)  
      {yyyPass = 1;
       goto yyyTravSwitch;
yyyTpop:
       yyyTST--;
      } 
      else 
      {yyyPass = 0;
       goto yyyTravSwitch;
yyyTpush:
       yyyTST->isReady = 1;  
       if (yyyTSTn->prodNum)
          if (yyyRL)
             {yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                {if (++yyyTST == yyyAfterTravStack)
                    yyyHandleOverflow(yyyTSof);
                    else
                    {yyyTST->node = *yyyCLptr2; 
                     yyyTST->isReady = 0; 
                     yyyClearConds
                    }
                 yyyCLptr2++; 
                } 
             } /* right to left */
             else  /* left to right */
             {yyyCLptr1 = yyyCLptr2 = yyyTSTn->cL; 
              while 
                ((yyyCLptr2 != yyyNextCLspace)
                 &&
                 ((*yyyCLptr2)->parent == yyyTSTn) 
                )  
                yyyCLptr2++; 
              while (yyyCLptr2-- > yyyCLptr1)
                if (++yyyTST == yyyAfterTravStack)
                   yyyHandleOverflow(yyyTSof);
                   else
                   {yyyTST->node = *yyyCLptr2; 
                    yyyTST->isReady = 0; 
                    yyyClearConds
                   }
             } /* left to right */
      } /* else */
   continue;
yyyTravSwitch:
				switch(yyyTSTn->prodNum)	{
case 1:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 2:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 3:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if ( (1)) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { }
if (yyyCond(1) != yyyPass) { assembleFunction((((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name));
            }
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 4:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
if ( (1)) yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { }
if (yyyCond(1) != yyyPass) { assembleFunction((((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name));
	    	}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 5:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 6:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 7:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 8:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 9:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 10:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 11:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 12:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { invoke_burm((((yyyP6)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree));
	    	}
				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 13:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 14:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 15:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg = getFirstRegister();
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
            }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 16:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { isVisible((((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->in), (((yyyP2)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->name), LABEL, (((yyyP2)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->line));
			}
				break;
					}
		break;
			}

break;
case 17:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { isVisible((((yyyP6)(((char *)yyyTSTn)+yyyGNSz))->in), (((yyyP2)(((char *)((yyyTSTn->cL)[3]))+yyyGNSz))->name), LABEL, (((yyyP2)(((char *)((yyyTSTn->cL)[3]))+yyyGNSz))->line));
			}
				break;
					}
		break;
			}

break;
case 18:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 19:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 20:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 21:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { isVisible((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name), VARIABLE, (((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->line));
            }
				break;
					}
		break;
			}

break;
case 22:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 23:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 24:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 25:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 26:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 27:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 28:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 29:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
            }
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 30:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 31:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 32:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 33:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 34:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 35:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 36:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 37:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;yyySetCond(0)
yyySetCond(1)

				case 1:

if (yyyCond(0) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[1]))+yyyGNSz))->tree)->reg = (((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg;
				}
if (yyyCond(1) != yyyPass) { (((yyyP7)(((char *)((yyyTSTn->cL)[2]))+yyyGNSz))->tree)->reg = getNextRegister((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->tree)->reg);
			}
				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 38:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 39:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 40:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 41:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

if (yyyCond(0) != yyyPass) { isVisible((((yyyP7)(((char *)yyyTSTn)+yyyGNSz))->ids), (((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->name), VARIABLE, (((yyyP2)(((char *)((yyyTSTn->cL)[0]))+yyyGNSz))->line));
			}
				break;
					}
		break;
			}

break;
case 42:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 43:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 44:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 45:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
case 46:
	switch(yyyi)	{ 
		case 0:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 1:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
		case 2:
			switch(yyyPass)	{
				case 0:
yyyRL = 0;
				case 1:

				break;
					}
		break;
			}

break;
								} /* switch */ 
   if (yyyPass) goto yyyTpop; else goto yyyTpush; 
  } /* while */ 
 } /* for */ 
} /* yyyDoTraversals */ 

void yyyExecuteRRsection()  {
   int yyyi; 
   long yyynRefCounts; 
   long cycleSum = 0;
   long nNZrc = 0;

   if (!yyyYok) return; 
   yyynRefCounts = yyyNextRCLspace - yyyRefCountListSpace; 
   for (yyyi=0;yyyi<yyynRefCounts;yyyi++) 
     if (yyyRefCountListSpace[yyyi])
        {cycleSum += yyyRefCountListSpace[yyyi]; nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n**********\n");
       fprintf(stderr,
               "cycle detected in completed parse tree");
       fprintf(stderr,
               " after decoration.\n");
       fprintf(stderr,
         "searching parse tree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTravAux(yyyStackTop->node);
      }
   yyyDoTraversals();
} /* yyyExecuteRRsection */ 



yyyWAT yyyLRCIL[3] = {0,1,0,
};



void yyyYoxInit()                                  /*stock*/  
  { 

   yyyNodeSizeCalc(); 

   if ((yyyTermBuffer.snBufPtr = 
        (char *) malloc((yyyBiggestNodeSize + sizeof(yyyCopyType)))
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in yyyTermBuffer allocation\n");  
  
  
   yyyNbytesStackStg = yyyMaxStackSize*sizeof(struct yyyStackItem); 
   yyyNbytesStackStg = ((yyyNbytesStackStg/yyyAlignSize)+1)*yyyAlignSize;  
   if ((yyyNodeAndStackSpace = 
        (char *) malloc((yyyNbytesStackStg + 
                                 yyyMaxNbytesNodeStg + 
                                 yyyGNSz + 
                                 yyyBiggestNodeSize + 
                                 sizeof(yyyCopyType) 
                                )
                       )
       )  
       == 
       ((char *) NULL) 
      )   
      yyyfatal("malloc error in ox node and stack space allocation\n");
   yyyStack = (struct yyyStackItem *) yyyNodeAndStackSpace; 
   yyyAfterStack = yyyStack + yyyMaxStackSize;  
   yyyNodeSpace = yyyNodeAndStackSpace + yyyNbytesStackStg;
   yyyAfterNodeSpace = yyyNodeSpace + yyyMaxNbytesNodeStg;
 
 
   if ((yyyRS = (struct yyyRSitem *) 
         malloc(((yyyRSmaxSize+1)*sizeof(struct yyyRSitem)))
       )  
       == 
       ((struct yyyRSitem *) NULL) 
      )   
      yyyfatal("malloc error in ox ready set space allocation\n");  
   yyyRS++; 
   yyyAfterRS = yyyRS + yyyRSmaxSize; 

 
   if ((yyyChildListSpace = 
        (yyyGNT **) malloc((yyyMaxNchildren*sizeof(yyyGNT *)))
       )  
       == 
       ((yyyGNT **) NULL) 
      )   
      yyyfatal("malloc error in ox child list space allocation\n");  
   yyyAfterChildListSpace = yyyChildListSpace + yyyMaxNchildren; 

 
   if ((yyyRefCountListSpace = 
        (yyyRCT *) malloc((yyyMaxNrefCounts * sizeof(yyyRCT)))
       )  
       == 
       ((yyyRCT *) NULL) 
      )   
      yyyfatal("malloc error in ox reference count list space allocation\n");  
   yyyAfterRefCountListSpace = yyyRefCountListSpace + yyyMaxNrefCounts;  
  
 
   if ((yyySSALspace = (struct yyySolvedSAlistCell *) 
          malloc(((yyySSALspaceSize+1) * 
                          sizeof(struct yyySolvedSAlistCell))
                         ) 
       ) 
       == 
       ((struct yyySolvedSAlistCell *) NULL) 
      ) 
      yyyfatal("malloc error in stack solved list space allocation\n"); 
  } /* yyyYoxInit */ 



void yyyYoxReset() 
  { 
   yyyTermBuffer.isEmpty = 1; 
   yyyStackTop = yyyStack; 
   while (yyyStackTop != yyyAfterStack) 
     (yyyStackTop++)->solvedSAlist = yyyLambdaSSAL; 
   yyyStackTop = yyyStack - 1; 
   yyyNextNodeSpace = yyyNodeSpace; 
   yyyRSTop = yyyRS - 1; 
   yyyNextCLspace = yyyChildListSpace;
   yyyNextRCLspace = yyyRefCountListSpace; 
  }  



void yyyDecorate() 
  { 
   while (yyyRSTop >= yyyRS) 
      yyySolveAndSignal();  
  } 



void yyyShift() 
  {yyyRCT *rcPdum; 
   register yyyCopyType *CTp1,*CTp2,*CTp3; 
   register yyyWAT *startP,*stopP;  

   if ((++yyyStackTop) == yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   CTp2 = (yyyCopyType *)(yyyStackTop->oldestNode = 
                          yyyStackTop->node = 
                          (yyyGNT *)yyyNextNodeSpace 
                         ); 
   yyyTermBuffer.isEmpty = 1;
   ((yyyGNT *)CTp2)->parent = (void *)yyyStackTop; 
   ((yyyGNT *)CTp2)->cL = yyyNextCLspace;  
   rcPdum = ((yyyGNT *)CTp2)->refCountList = yyyNextRCLspace;  
   ((yyyGNT *)CTp2)->prodNum = 0; 
   if ((yyyNextRCLspace += yyyTermBuffer.nAttrbs) 
       > 
       yyyAfterRefCountListSpace 
      ) 
      yyyHandleOverflow(yyyRCof); 
   startP = yyyTermBuffer.startP;  
   stopP = yyyTermBuffer.stopP;  
   while (startP < stopP) rcPdum[*(startP++)] = 0; 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTermBuffer.typeNum]) 
       > 
       yyyAfterNodeSpace 
      ) 
      yyyHandleOverflow(yyyNSof);  
   CTp1 = (yyyCopyType *)(yyyTermBuffer.snBufPtr); 
   CTp2 = (yyyCopyType *)(((char *)CTp2) + yyyGNSz); 
   CTp3 = CTp2 + yyyNdCopySz[yyyTermBuffer.typeNum]; 
   while (CTp2 < CTp3) *CTp2++ = *CTp1++; 
  } 



void yyyGenIntNode() 
  {register yyyWST i;
   register struct yyyStackItem *stDum;  
   register yyyGNT *gnpDum; 

   if ((stDum = (yyyStackTop -= (yyyRHSlength-1))) >= yyyAfterStack) 
      yyyHandleOverflow(yyySof);
   yyySTsn = ((char *)(yyySTN = (yyyGNT *)yyyNextNodeSpace)) + yyyGNSz; 
   yyySTN->parent       =  (void *)yyyStackTop;  
   yyySTN->cL           =  yyyNextCLspace; 
   yyySTN->refCountList =  yyyNextRCLspace; 
   yyySTN->prodNum      =  yyyProdNum; 
   if ((yyyNextCLspace+yyyRHSlength) > yyyAfterChildListSpace) 
      yyyHandleOverflow(yyyCLof); 
   for (i=1;i<=yyyRHSlength;i++) 
     {gnpDum = *(yyyNextCLspace++) = (stDum++)->node;  
      gnpDum->whichSym = i;  
      gnpDum->parent = (void *)yyyNextNodeSpace; 
     } 
   if ((yyyNextRCLspace += yyyNattrbs) > yyyAfterRefCountListSpace) 
      yyyHandleOverflow(yyyRCof); 
   if ((yyyNextNodeSpace += yyyNdPrSz[yyyTypeNum]) > yyyAfterNodeSpace) 
      yyyHandleOverflow(yyyNSof);  
  } 



#define yyyDECORfREQ 50 



void yyyAdjustINRC(startP,stopP) 
  register yyyFT *startP,*stopP;
  {yyyWST i;
   long SSALptr,SSALptrHead,*cPtrPtr; 
   long *pL; 
   struct yyyStackItem *stDum;  
   yyyGNT *gnpDum; 
   long iTemp;
   register yyyFT *nextP;
   static unsigned short intNodeCount = yyyDECORfREQ;

   nextP = startP;
   while (nextP < stopP) 
     {if ((*nextP) == yyyR)  
         {(yyySTN->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
         else 
         {(((yyySTN->cL)[*nextP])->refCountList)[*(nextP+1)] = *(nextP+2);
         } 
      nextP += 3;  
     }
   pL = yyyIIEL + yyyIIIEL[yyyProdNum]; 
   stDum = yyyStackTop;  
   for (i=1;i<=yyyRHSlength;i++) 
     {pL++; 
      SSALptrHead = SSALptr = *(cPtrPtr = &((stDum++)->solvedSAlist)); 
      if (SSALptr != yyyLambdaSSAL) 
         {*cPtrPtr = yyyLambdaSSAL; 
          do 
            {
             iTemp = (*pL+yyySSALspace[SSALptr].attrbNum);
             yyySignalEnts(yyySTN,
                           yyyEntL + yyyIEL[iTemp],
                           yyyEntL + yyyIEL[iTemp+1]
                          );  
             SSALptr = *(cPtrPtr = &(yyySSALspace[SSALptr].next)); 
            } 
            while (SSALptr != yyyLambdaSSAL);  
          *cPtrPtr = yyySSALCfreeList;  
          yyySSALCfreeList = SSALptrHead;  
         } 
     } 
   nextP = startP + 2;
   while (nextP < stopP) 
     {if (!(*nextP))
         {if ((*(nextP-2)) == yyyR)  
             {pL = &(yyyStackTop->solvedSAlist); 
              if (yyySSALCfreeList == yyyLambdaSSAL) 
                 {yyySSALspace[yyyNewSSALC].next = *pL; 
                  if ((*pL = yyyNewSSALC++) == yyySSALspaceSize) 
                     yyyHandleOverflow(yyySSALof); 
                 }  
                 else
                 {iTemp = yyySSALCfreeList; 
                  yyySSALCfreeList = yyySSALspace[yyySSALCfreeList].next; 
                  yyySSALspace[iTemp].next = *pL; 
                  *pL = iTemp;  
                 } 
              yyySSALspace[*pL].attrbNum = *(nextP-1); 
             } 
             else 
             {if ((gnpDum = (yyySTN->cL)[*(nextP-2)])->prodNum != 0)
                 {
                  iTemp = yyyIIEL[yyyIIIEL[gnpDum->prodNum]] + *(nextP-1);
                  yyySignalEnts(gnpDum, 
                                yyyEntL + yyyIEL[iTemp],  
                                yyyEntL + yyyIEL[iTemp+1] 
                               );    
                 }  
             } 
         } 
      nextP += 3; 
     } 
   yyyStackTop->node = yyySTN;
   if (!yyyRHSlength) yyyStackTop->oldestNode = yyySTN; 
   if (!--intNodeCount) 
      {intNodeCount = yyyDECORfREQ; 
       yyyDecorate(); 
      } 
  } 



void yyyPrune(prodNum) 
  long prodNum;
  {  
   int i,n; 
   register char *cp1,*cp2;  
   register yyyRCT *rcp1,*rcp2,*rcp3;  
   long cycleSum = 0;
   long nNZrc = 0;
   yyyRCT *tempNextRCLspace;
   
   yyyDecorate();
   tempNextRCLspace = yyyNextRCLspace;
   yyyNextRCLspace = 
     (rcp1 = rcp2 = (yyyStackTop->oldestNode)->refCountList) + yyyNattrbs;
   rcp3 = (yyyStackTop->node)->refCountList; 
   while (rcp2 < rcp3) 
     if (*rcp2++) {cycleSum += *(rcp2 - 1); nNZrc++;} 
   if (nNZrc) 
      {
       fprintf(stderr,"\n\n\n----------\n");
       fprintf(stderr,
         "cycle detected during pruning of a subtree\n");
       fprintf(stderr,
         "  at whose root production %d is applied.\n",prodNum);
       yyyNextRCLspace = tempNextRCLspace; 
       fprintf(stderr,
         "prune aborted: searching subtree for %d unsolved instances:\n",
               nNZrc
              );
       yyyUnsolvedInstSearchTrav(yyyStackTop->node);
       return; 
      }
   for (i=0;i<yyyNattrbs;i++) rcp1[i] = rcp3[i]; 
   yyyNextCLspace = (yyyStackTop->oldestNode)->cL; 
   yyyNextNodeSpace = (char *)(yyyStackTop->oldestNode) + 
                      (n = yyyNdPrSz[yyyTypeNum]);
   cp1 = (char *)yyyStackTop->oldestNode; 
   cp2 = (char *)yyyStackTop->node; 
   for (i=0;i<n;i++) *cp1++ = *cp2++; 
   yyyStackTop->node = yyyStackTop->oldestNode; 
   (yyyStackTop->node)->refCountList = rcp1; 
   (yyyStackTop->node)->cL = yyyNextCLspace; 
  } 



void yyyGenLeaf(nAttrbs,typeNum,startP,stopP) 
  int nAttrbs,typeNum; 
  yyyWAT *startP,*stopP; 
  {
   if  (!(yyyTermBuffer.isEmpty)) yyyShift(); 
   yyyTermBuffer.isEmpty = 0;
   yyyTermBuffer.typeNum = typeNum; 
   yyyTermBuffer.nAttrbs = nAttrbs; 
   yyyTermBuffer.startP = startP; 
   yyyTermBuffer.stopP = stopP; 
   
  } 



void yyyerror()
  {yyyYok = 0; 
  } 



/* read the command line for changes in sizes of 
                  the evaluator's data structures */
void yyyCheckForResizes(argc,argv) 
  int argc; 
  char *argv[]; 
  {int i; 
   long dum; 
 
   if (!yyyPermitUserAlloc) return; 
   for (i=1;i<argc;i++) 
     { 
      if ((argv[i][0] != '-') || (argv[i][1] != 'Y')) continue; 
      if (strlen(argv[i]) < 4) goto yyyErrO1; 
      if (sscanf(argv[i]+3,"%d",&dum) != 1) goto yyyErrO1;
      if (dum < 2) dum = 2;
      switch (argv[i][2]) 
        {case yyyNSof:   yyyMaxNbytesNodeStg = dum; break; 
         case yyyRCof:   yyyMaxNrefCounts    = dum; break; 
         case yyyCLof:   yyyMaxNchildren     = dum; break; 
         case yyySof:    yyyMaxStackSize     = dum; break; 
         case yyySSALof: yyySSALspaceSize    = dum; break; 
         case yyyRSof:   yyyRSmaxSize        = dum; break; 
         case yyyTSof:   yyyTravStackMaxSize = dum; break; 
         default : goto yyyErrO1; 
        }
      continue;  
   yyyErrO1 : fprintf(stderr,"invalid command line option: %s\n",
                             argv[i] 
                     ); 
     } 
  } 
   
   
   


#define yyyLastProdNum 46


#define yyyNsorts 7


int yyyProdsInd[] = {
   0,
   0,   1,   5,  13,  25,  26,  30,  32,  33,  37,
  39,  40,  45,  46,  50,  53,  56,  61,  66,  70,
  72,  74,  79,  81,  84,  87,  90,  94,  98, 100,
 103, 106, 109, 113, 116, 120, 123, 127, 131, 133,
 138, 140, 146, 152, 159, 160,
 164,
};


int yyyProds[][2] = {
{1013,   0},{1013,   0},{1013,   0},{  21,   0},{ 537,   0},
{  21,   0},{ 619,   2},{ 431,   0},{ 114,   3},{ 769,   3},
{ 869,   0},{  63,   5},{ 124,   0},{  21,   0},{ 619,   2},
{ 462,   0},{ 787,   3},{ 786,   3},{ 900,   0},{ 431,   0},
{ 114,   3},{ 769,   3},{ 869,   0},{  63,   5},{ 124,   0},
{ 114,   3},{ 114,   3},{ 114,   3},{ 619,   2},{1203,   0},
{ 769,   3},{ 619,   2},{ 787,   3},{ 787,   3},{ 787,   3},
{ 619,   2},{1203,   0},{ 786,   3},{ 619,   2},{  63,   5},
{  63,   5},{  12,   4},{ 246,   6},{ 537,   0},{  63,   5},
{  12,   4},{  12,   4},{  12,   4},{ 619,   2},{ 597,   0},
{ 246,   6},{ 838,   0},{ 430,   7},{ 246,   6},{ 762,   0},
{ 619,   2},{ 246,   6},{ 635,   0},{ 430,   7},{ 762,   0},
{ 619,   2},{ 246,   6},{ 933,   0},{ 619,   2},{ 705,   0},
{ 430,   7},{ 246,   6},{ 286,   7},{ 705,   0},{ 430,   7},
{ 246,   6},{ 997,   7},{ 286,   7},{ 619,   2},{ 286,   7},
{ 997,   7},{ 448,   0},{ 430,   7},{ 886,   0},{ 430,   7},
{ 676,   7},{ 430,   7},{ 997,   7},{ 973,   7},{ 430,   7},
{ 997,   7},{1121,   7},{ 430,   7},{ 997,   7},{1053,   7},
{ 430,   7},{ 997,   7},{ 687,   0},{ 997,   7},{ 430,   7},
{ 997,   7},{ 705,   0},{ 997,   7},{ 676,   7},{ 997,   7},
{ 676,   7},{1165,   0},{ 676,   7},{ 676,   7},{  66,   0},
{ 676,   7},{ 973,   7},{  40,   0},{ 997,   7},{ 973,   7},
{  40,   0},{ 997,   7},{ 973,   7},{1121,   7},{ 700,   0},
{ 997,   7},{1121,   7},{ 700,   0},{ 997,   7},{1121,   7},
{1053,   7},{ 120,   0},{ 997,   7},{1053,   7},{ 120,   0},
{ 997,   7},{1053,   7},{ 997,   7},{ 431,   0},{ 430,   7},
{ 869,   0},{ 997,   7},{ 765,   1},{ 997,   7},{ 997,   7},
{ 448,   0},{ 430,   7},{ 886,   0},{ 997,   7},{ 619,   2},
{ 997,   7},{ 619,   2},{ 431,   0},{ 297,   7},{ 430,   7},
{ 869,   0},{ 997,   7},{ 619,   2},{ 462,   0},{ 297,   7},
{ 430,   7},{ 900,   0},{ 997,   7},{ 997,   7},{ 234,   0},
{ 431,   0},{ 297,   7},{ 430,   7},{ 869,   0},{ 297,   7},
{ 297,   7},{ 297,   7},{ 430,   7},{1203,   0},
};


int yyySortsInd[] = {
  0,
  0,  1,  3,  4,  5,  7, 10,
 12,
};


int yyySorts[] = {
  793,  381,  955,  146,  766,  987, 1088,  987, 1088,  121,
  882,  121,
};



char *yyyStringTab[] = {
0,0,0,0,0,
0,0,0,0,0,
0,0,"Labeldef","isVisible",0,
0,0,0,0,0,
0,"Def",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"ADD",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Stats",0,
0,"SUB",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"memmove",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"Pars",
0,0,0,0,0,
"AND","tree","y",0,"END",
0,0,0,0,0,
0,"reg",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"pars",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"strtoul",0,0,0,
0,0,0,0,0,
"LABEL",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"NULL",0,0,
0,0,0,0,0,
0,0,0,0,"AT_SIGN",
0,0,0,0,0,
0,0,0,0,0,
0,"Stat",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"Lexpr",0,0,0,
0,0,0,0,0,
0,0,"RepeatExpr",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"name",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"visibility",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"strdup",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"Expr","BRACKET_OPEN",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"SQUARED_BRACKET_OPEN",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"CURLY_BRACKET_OPEN",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"yylineno",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"SEMICOLON",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"PARAMETER",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"COLON",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"ID",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"IF",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"codegen",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"POINTER",0,0,
0,"NotOrSub",0,0,0,
0,0,0,0,0,
0,0,"GREATER",0,"invoke",
0,0,0,0,0,
0,0,0,0,0,
"MUL",0,0,0,0,
"EQUAL",0,0,0,0,
0,0,0,"strlen",0,
0,0,0,0,0,
0,"OP",0,0,0,
0,0,0,0,0,
0,"ListNode",0,0,0,
0,"newListNode","newTreeNode",0,0,
0,0,"newNumberTreeNode",0,"newRegisterTreeNode",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"GOTO",0,0,
"NUM","labels",0,0,"Par",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"ParPointer","ParsPointer",0,0,
0,0,0,"value",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"TreeNode",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"RETURN",0,
0,0,0,0,0,
0,"getNextRegister","getFirstRegister",0,0,
"register",0,0,0,0,
0,0,"VARIABLE",0,0,
0,0,0,0,0,
0,0,0,0,"BRACKET_CLOSE",
0,0,0,0,0,
0,0,0,0,0,
0,0,"ids",0,0,
0,"SQUARED_BRACKET_CLOSE",0,0,0,
0,0,0,"assembleFunction",0,
0,0,0,0,0,
"CURLY_BRACKET_CLOSE",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"if",0,
0,0,0,0,0,
0,0,0,"VAR",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"line",0,0,0,0,
0,0,0,0,0,
0,0,0,"getOffset",0,
0,0,0,"AddTerm",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,"in",0,0,
0,0,0,0,0,
0,0,"Term",0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"Program",0,
0,0,0,0,0,
0,0,0,"yytext",0,
0,0,0,0,0,
0,0,0,0,"merge",
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"AndTerm",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"out",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,"MulTerm",0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,"burm",
0,0,0,0,0,
"add",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
"NOT",0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"COMMA",0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,0,0,
0,0,0,"getIndex",0,
0,0,0,0,0,
0,
};



#define yyySizeofProd(num) (yyyProdsInd[(num)+1] - yyyProdsInd[(num)])

#define yyyGSoccurStr(prodNum,symPos) \
   (yyyStringTab[yyyProds[yyyProdsInd[(prodNum)] + (symPos)][0]])

#define yyySizeofSort(num) (yyySortsInd[(num)+1] - yyySortsInd[(num)])

#define yyySortOf(prodNum,symPos) \
  (yyyProds[yyyProdsInd[(prodNum)] + (symPos)][1]) 

#define yyyAttrbStr(prodNum,symPos,attrbNum)                      \
  (yyyStringTab[yyySorts[yyySortsInd[yyySortOf(prodNum,symPos)] + \
                         (attrbNum)                               \
                        ]                                         \
               ]                                                  \
  )



void yyyShowProd(i)
  int i;
  {int j,nSyms;

   nSyms = yyySizeofProd(i);
   for (j=0; j<nSyms; j++)
     {
      fprintf(stderr,"%s",yyyGSoccurStr(i,j));
      if (j == 0) fprintf(stderr," : "); else fprintf(stderr," ");
     }
   fprintf(stderr,";\n");
  }



void yyyShowProds()
  {int i; for (i=1; i<=yyyLastProdNum; i++) yyyShowProd(i);}



void yyyShowSymsAndSorts()
  {int i; 

   for (i=1; i<=yyyLastProdNum; i++) 
     {int j, nSyms;

      fprintf(stderr,
              "\n\n\n---------------------------------- %3.1d\n",i);
      /* yyyShowProd(i); */ 
      nSyms = yyySizeofProd(i); 
      for (j=0; j<nSyms; j++) 
        {int k, sortSize;

         fprintf(stderr,"%s\n",yyyGSoccurStr(i,j));
         sortSize = yyySizeofSort(yyySortOf(i,j));
         for (k=0; k<sortSize; k++) 
            fprintf(stderr,"  %s\n",yyyAttrbStr(i,j,k));
         if (j == 0) fprintf(stderr,"->\n"); 
              else 
              fprintf(stderr,"\n"); 
        }
     }
  }



void yyyCheckNodeInstancesSolved(np)
  yyyGNT *np;
  {int mysort,sortSize,i,prodNum,symPos,inTerminalNode;
   int nUnsolvedInsts = 0;

   if (np->prodNum != 0)
     {inTerminalNode = 0;
      prodNum = np->prodNum;
      symPos = 0;
     }
   else
     {inTerminalNode = 1;
      prodNum = ((yyyGNT *)(np->parent))->prodNum;
      symPos = np->whichSym;
     }
   mysort = yyySortOf(prodNum,symPos);
   sortSize = yyySizeofSort(mysort);
   for (i=0; i<sortSize; i++)
     if ((np->refCountList)[i] != 0) nUnsolvedInsts += 1;
   if (nUnsolvedInsts)
     {fprintf(stderr,
      "\nFound node that has %d unsolved attribute instance(s).\n",
              nUnsolvedInsts
             );
      fprintf(stderr,"Node is labeled \"%s\".\n",
             yyyGSoccurStr(prodNum,symPos));
      if (inTerminalNode)
        {fprintf(stderr,
                 "Node is terminal.  Its parent production is:\n  ");
         yyyShowProd(prodNum);
        }
      else
        {fprintf(stderr,"Node is nonterminal.  ");
         if (((char *)(np->parent)) >= yyyNodeSpace)
           {fprintf(stderr,
                    "Node is %dth child in its parent production:\n  ",
                   np->whichSym
                  );
            yyyShowProd(((yyyGNT *)(np->parent))->prodNum);
           }
         fprintf(stderr,
                 "Node is on left hand side of this production:\n  ");
         yyyShowProd(np->prodNum);
        }
      fprintf(stderr,"The following instances are unsolved:\n");
      for (i=0; i<sortSize; i++)
        if ((np->refCountList)[i] != 0)
          fprintf(stderr,"     %-16s still has %1d dependencies.\n",
                  yyyAttrbStr(prodNum,symPos,i),(np->refCountList)[i]);
     }
  }



void yyyUnsolvedInstSearchTravAux(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCheckNodeInstancesSolved(pNode); 
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



void yyyUnsolvedInstSearchTrav(pNode)
  yyyGNT *pNode;
  {yyyGNT **yyyCLpdum;
   int i;
  
   yyyCLpdum = pNode->cL;
   while
     ((yyyCLpdum != yyyNextCLspace) && ((*yyyCLpdum)->parent == pNode))
     {
      yyyUnsolvedInstSearchTravAux(*yyyCLpdum);
      yyyCLpdum++;
     }
  }



