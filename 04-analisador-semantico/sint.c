/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sint.y"
 
#include "analex.c" 
#include <stdio.h>
#include <stdlib.h>

int semantic_err = 0;

void verifica_var_declarada(int pos);
void verifica_func_declarada(int pos);
void verifica_tipos_atrib(int tipo1, int tipo2);
void yyerror(char *s);

#line 84 "sint.c"

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

#include "sint.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_NUM_REAL = 4,                   /* NUM_REAL  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_FOR = 6,                        /* FOR  */
  YYSYMBOL_WHILE = 7,                      /* WHILE  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_ENDIF = 10,                     /* ENDIF  */
  YYSYMBOL_CHAR = 11,                      /* CHAR  */
  YYSYMBOL_INT = 12,                       /* INT  */
  YYSYMBOL_FLOAT = 13,                     /* FLOAT  */
  YYSYMBOL_VOID = 14,                      /* VOID  */
  YYSYMBOL_RETURN = 15,                    /* RETURN  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_AND = 17,                       /* AND  */
  YYSYMBOL_NOT = 18,                       /* NOT  */
  YYSYMBOL_GE = 19,                        /* GE  */
  YYSYMBOL_LE = 20,                        /* LE  */
  YYSYMBOL_EQ = 21,                        /* EQ  */
  YYSYMBOL_NEQ = 22,                       /* NEQ  */
  YYSYMBOL_DO = 23,                        /* DO  */
  YYSYMBOL_STRING = 24,                    /* STRING  */
  YYSYMBOL_CHARACTERE = 25,                /* CHARACTERE  */
  YYSYMBOL_26_ = 26,                       /* '='  */
  YYSYMBOL_27_ = 27,                       /* '>'  */
  YYSYMBOL_28_ = 28,                       /* '<'  */
  YYSYMBOL_29_ = 29,                       /* '+'  */
  YYSYMBOL_30_ = 30,                       /* '-'  */
  YYSYMBOL_31_ = 31,                       /* '*'  */
  YYSYMBOL_32_ = 32,                       /* '/'  */
  YYSYMBOL_33_ = 33,                       /* '%'  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* '['  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* ';'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_ProgL = 43,                     /* ProgL  */
  YYSYMBOL_Prog = 44,                      /* Prog  */
  YYSYMBOL_Function = 45,                  /* Function  */
  YYSYMBOL_FunctionCall = 46,              /* FunctionCall  */
  YYSYMBOL_ArgList = 47,                   /* ArgList  */
  YYSYMBOL_Arg = 48,                       /* Arg  */
  YYSYMBOL_ParamList = 49,                 /* ParamList  */
  YYSYMBOL_Decls = 50,                     /* Decls  */
  YYSYMBOL_Decl = 51,                      /* Decl  */
  YYSYMBOL_IDs = 52,                       /* IDs  */
  YYSYMBOL_TypeF = 53,                     /* TypeF  */
  YYSYMBOL_Type = 54,                      /* Type  */
  YYSYMBOL_Statement_Seq = 55,             /* Statement_Seq  */
  YYSYMBOL_Statement = 56,                 /* Statement  */
  YYSYMBOL_Compound_Stt = 57,              /* Compound_Stt  */
  YYSYMBOL_If = 58,                        /* If  */
  YYSYMBOL_While = 59,                     /* While  */
  YYSYMBOL_DoWhile = 60,                   /* DoWhile  */
  YYSYMBOL_Atribuicao = 61,                /* Atribuicao  */
  YYSYMBOL_AtribuicaoD = 62,               /* AtribuicaoD  */
  YYSYMBOL_Exp = 63                        /* Exp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    33,     2,     2,
      34,    36,    31,    29,    39,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
      28,    26,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    75,    76,    80,    82,    87,    98,   111,
     112,   116,   117,   118,   119,   120,   124,   130,   138,   139,
     143,   152,   157,   162,   166,   170,   175,   181,   181,   182,
     182,   182,   184,   184,   187,   188,   189,   190,   191,   192,
     193,   194,   197,   197,   200,   201,   204,   205,   207,   212,
     219,   223,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   250,
     254,   255
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "NUM_REAL",
  "ID", "FOR", "WHILE", "IF", "ELSE", "ENDIF", "CHAR", "INT", "FLOAT",
  "VOID", "RETURN", "OR", "AND", "NOT", "GE", "LE", "EQ", "NEQ", "DO",
  "STRING", "CHARACTERE", "'='", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'('", "'['", "')'", "'{'", "'}'", "','", "']'", "';'", "$accept",
  "ProgL", "Prog", "Function", "FunctionCall", "ArgList", "Arg",
  "ParamList", "Decls", "Decl", "IDs", "TypeF", "Type", "Statement_Seq",
  "Statement", "Compound_Stt", "If", "While", "DoWhile", "Atribuicao",
  "AtribuicaoD", "Exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      91,  -101,  -101,  -101,  -101,    20,    91,  -101,    -3,  -101,
    -101,  -101,    -8,     6,    -5,    -6,    29,   117,    40,   117,
    -101,    71,    30,    69,   117,    75,    11,    50,    57,     2,
      60,    52,    85,    71,  -101,  -101,  -101,    90,   117,    14,
     101,  -101,    71,  -101,    10,     3,   145,    10,    10,   114,
     141,  -101,    71,  -101,   166,  -101,  -101,  -101,  -101,  -101,
      10,   178,   179,   153,  -101,  -101,    83,    10,  -101,    10,
    -101,   204,  -101,   112,  -101,  -101,  -101,    34,  -101,   143,
     122,   140,  -101,  -101,   161,   167,   204,   160,    37,  -101,
    -101,    10,  -101,   158,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,  -101,    61,   184,
      60,    60,  -101,    10,   185,   199,    79,  -101,   220,   234,
      84,    84,   248,   248,    84,    84,   132,   132,  -101,  -101,
     105,  -101,    10,  -101,   156,   176,    10,   173,  -101,  -101,
     204,    60,  -101,   175,   204,   185,   207,  -101,  -101
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    30,    29,    31,    27,     0,     2,     4,     0,    28,
       1,     3,     0,     0,     0,     0,     0,    19,     0,     0,
      17,    33,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    35,    36,    37,     0,    19,    23,
      20,    26,    33,    16,     0,     0,     0,     0,     0,     0,
       0,    41,    33,    42,     0,    38,     6,    32,    34,    18,
       0,     0,     0,     0,    66,    67,    69,     0,    70,     0,
      71,    49,    14,    11,    15,     8,    13,     0,    10,     0,
       0,     0,    40,    39,     0,     0,    51,     0,    21,    25,
       5,     0,    64,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,    43,     0,    24,     0,     0,    65,    62,    63,
      58,    59,    60,    61,    56,    57,    52,    53,    54,    55,
       0,     9,     0,    46,     0,     0,     0,     0,    68,    12,
      48,     0,    44,     0,    50,    22,     0,    47,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,  -101,   208,   -21,  -101,   110,  -101,    -2,  -101,
    -101,  -101,   209,    -4,   -29,  -100,  -101,  -101,  -101,  -101,
     157,   -44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    70,    77,    78,    15,    21,    22,
      40,     8,    23,    32,    33,    54,    34,    35,    36,    37,
      41,    71
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    53,    12,    80,    81,    49,    72,    50,    73,    31,
     133,   134,    31,    64,    65,    66,    86,     1,     2,     3,
      10,    31,    42,    92,    76,    93,    13,    74,    67,    57,
      18,    31,    17,    19,    20,    68,    59,    44,    63,    75,
      60,   146,    14,    51,    69,    45,    46,   116,    84,    61,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,    60,    72,    26,    73,    27,    28,   135,
     107,    38,   115,   108,    39,    29,    26,    24,    27,    28,
      43,    53,    53,    30,    47,    74,    29,    76,   140,    31,
      31,    48,   144,    55,    30,    94,    95,    52,    96,    97,
      98,    99,     1,     2,     3,     4,   100,   101,   102,   103,
     104,   105,    53,   102,   103,   104,   105,    45,    91,   138,
      31,    94,    95,    56,    96,    97,    98,    99,     1,     2,
       3,    58,   100,   101,   102,   103,   104,   105,    94,    95,
      62,    96,    97,    98,    99,   139,    45,   106,    79,   100,
     101,   102,   103,   104,   105,    82,    94,    95,   110,    96,
      97,    98,    99,   104,   105,   141,   142,   100,   101,   102,
     103,   104,   105,    85,    94,    95,   111,    96,    97,    98,
      99,    87,    83,   109,    88,   100,   101,   102,   103,   104,
     105,    90,    94,    95,   117,    96,    97,    98,    99,   112,
     114,   113,   137,   100,   101,   102,   103,   104,   105,     9,
     132,   136,   143,   145,    11,     9,   147,   148,   131,    89,
      94,    95,    16,    96,    97,    98,    99,     0,    25,     0,
       0,   100,   101,   102,   103,   104,   105,    95,     0,    96,
      97,    98,    99,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,    96,    97,    98,    99,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,    96,    97,    -1,
      -1,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105
};

static const yytype_int16 yycheck[] =
{
      21,    30,     5,    47,    48,     3,     3,     5,     5,    30,
     110,   111,    33,     3,     4,     5,    60,    11,    12,    13,
       0,    42,    24,    67,    45,    69,    34,    24,    18,    33,
      36,    52,    37,    39,     5,    25,    38,    26,    42,    36,
      26,   141,    36,    41,    34,    34,    35,    91,    52,    35,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    26,     3,     5,     5,     7,     8,   113,
      36,    41,    35,    39,     5,    15,     5,    37,     7,     8,
       5,   110,   111,    23,    34,    24,    15,   108,   132,   110,
     111,    34,   136,    41,    23,    16,    17,    37,    19,    20,
      21,    22,    11,    12,    13,    14,    27,    28,    29,    30,
      31,    32,   141,    29,    30,    31,    32,    34,    35,    40,
     141,    16,    17,    38,    19,    20,    21,    22,    11,    12,
      13,    41,    27,    28,    29,    30,    31,    32,    16,    17,
      39,    19,    20,    21,    22,    40,    34,    35,     3,    27,
      28,    29,    30,    31,    32,    41,    16,    17,    36,    19,
      20,    21,    22,    31,    32,     9,    10,    27,    28,    29,
      30,    31,    32,     7,    16,    17,    36,    19,    20,    21,
      22,     3,    41,    40,     5,    27,    28,    29,    30,    31,
      32,    38,    16,    17,    36,    19,    20,    21,    22,    38,
      40,    34,     3,    27,    28,    29,    30,    31,    32,     0,
      26,    26,    36,    40,     6,     6,    41,    10,   108,    62,
      16,    17,    13,    19,    20,    21,    22,    -1,    19,    -1,
      -1,    27,    28,    29,    30,    31,    32,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    12,    13,    14,    43,    44,    45,    53,    54,
       0,    45,     5,    34,    36,    49,    54,    37,    36,    39,
       5,    50,    51,    54,    37,    54,     5,     7,     8,    15,
      23,    46,    55,    56,    58,    59,    60,    61,    41,     5,
      52,    62,    50,     5,    26,    34,    35,    34,    34,     3,
       5,    41,    37,    56,    57,    41,    38,    55,    41,    50,
      26,    35,    39,    55,     3,     4,     5,    18,    25,    34,
      46,    63,     3,     5,    24,    36,    46,    47,    48,     3,
      63,    63,    41,    41,    55,     7,    63,     3,     5,    62,
      38,    35,    63,    63,    16,    17,    19,    20,    21,    22,
      27,    28,    29,    30,    31,    32,    35,    36,    39,    40,
      36,    36,    38,    34,    40,    35,    63,    36,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    48,    26,    57,    57,    63,    26,     3,    40,    40,
      63,     9,    10,    36,    63,    40,    57,    41,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      47,    48,    48,    48,    48,    48,    49,    49,    50,    50,
      51,    52,    52,    52,    52,    52,    52,    53,    53,    54,
      54,    54,    55,    55,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    58,    58,    59,    60,    61,    61,
      62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     9,     8,     4,     3,     3,
       1,     1,     4,     1,     1,     1,     4,     2,     3,     0,
       2,     3,     6,     1,     4,     3,     1,     1,     1,     1,
       1,     1,     2,     0,     2,     1,     1,     1,     2,     3,
       3,     2,     1,     3,     6,     8,     5,     7,     6,     3,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     4,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* ProgL: Prog  */
#line 70 "sint.y"
             { 
        if(!semantic_err) printf("Compilação Finalizada\n"); 
    }
#line 1255 "sint.c"
    break;

  case 5: /* Function: TypeF ID '(' ParamList ')' '{' Decls Statement_Seq '}'  */
#line 81 "sint.y"
    { set_type((yyvsp[-7].simbolo).posicao, (yyvsp[-8].val)); set_num_param((yyvsp[-7].simbolo).posicao, (yyvsp[-5].id_list).tam); }
#line 1261 "sint.c"
    break;

  case 6: /* Function: TypeF ID '(' ')' '{' Decls Statement_Seq '}'  */
#line 83 "sint.y"
    { set_type((yyvsp[-6].simbolo).posicao, (yyvsp[-7].val)); set_num_param((yyvsp[-6].simbolo).posicao, 0); }
#line 1267 "sint.c"
    break;

  case 7: /* FunctionCall: ID '(' ArgList ')'  */
#line 87 "sint.y"
                       { 
        verifica_func_declarada((yyvsp[-3].simbolo).posicao);
        if(!semantic_err) {
            if(param_args_diferentes((yyvsp[-3].simbolo).posicao, (yyvsp[-1].id_list).tam)) {
                 printf("Argumentos e parâmetros da função não coincidem. na linha %d\n", yylineno);
                 semantic_err = 1;
            }
        }
        (yyval.val) = Tabela[(yyvsp[-3].simbolo).posicao].tipo; 
    }
#line 1282 "sint.c"
    break;

  case 8: /* FunctionCall: ID '(' ')'  */
#line 98 "sint.y"
                { 
        verifica_func_declarada((yyvsp[-2].simbolo).posicao);
        if(!semantic_err) {
            if(param_args_diferentes((yyvsp[-2].simbolo).posicao, 0)) {
                 printf("Argumentos e parâmetros da função não coincidem. na linha %d\n", yylineno);
                 semantic_err = 1;
            }
        }
        (yyval.val) = Tabela[(yyvsp[-2].simbolo).posicao].tipo; 
    }
#line 1297 "sint.c"
    break;

  case 9: /* ArgList: ArgList ',' Arg  */
#line 111 "sint.y"
                    { (yyval.id_list) = (yyvsp[-2].id_list); (yyval.id_list).tam++; }
#line 1303 "sint.c"
    break;

  case 10: /* ArgList: Arg  */
#line 112 "sint.y"
          { (yyval.id_list).tam = 1; }
#line 1309 "sint.c"
    break;

  case 11: /* Arg: ID  */
#line 116 "sint.y"
       { verifica_var_declarada((yyvsp[0].simbolo).posicao); }
#line 1315 "sint.c"
    break;

  case 12: /* Arg: ID '[' Exp ']'  */
#line 117 "sint.y"
                     { verifica_var_declarada((yyvsp[-3].simbolo).posicao); }
#line 1321 "sint.c"
    break;

  case 16: /* ParamList: ParamList ',' Type ID  */
#line 124 "sint.y"
                          { 
        (yyval.id_list) = (yyvsp[-3].id_list);
        set_type((yyvsp[0].simbolo).posicao, (yyvsp[-1].val));
        (yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[0].simbolo).posicao;
        (yyval.id_list).tam++;
    }
#line 1332 "sint.c"
    break;

  case 17: /* ParamList: Type ID  */
#line 130 "sint.y"
              { 
        (yyval.id_list).tam = 1;
        (yyval.id_list).ids[0] = (yyvsp[0].simbolo).posicao;
        set_type((yyvsp[0].simbolo).posicao, (yyvsp[-1].val));
    }
#line 1342 "sint.c"
    break;

  case 20: /* Decl: Type IDs  */
#line 143 "sint.y"
                 { 
        int i;
        for(i=0; i < (yyvsp[0].id_list).tam; i++) {
            set_type((yyvsp[0].id_list).ids[i], (yyvsp[-1].val));
        }
    }
#line 1353 "sint.c"
    break;

  case 21: /* IDs: IDs ',' ID  */
#line 152 "sint.y"
                     { 
        (yyval.id_list) = (yyvsp[-2].id_list);
        (yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[0].simbolo).posicao;
        (yyval.id_list).tam++;
      }
#line 1363 "sint.c"
    break;

  case 22: /* IDs: IDs ',' ID '[' NUM ']'  */
#line 157 "sint.y"
                                 { 
        (yyval.id_list) = (yyvsp[-5].id_list);
        (yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[-3].simbolo).posicao;
        (yyval.id_list).tam++;
      }
#line 1373 "sint.c"
    break;

  case 23: /* IDs: ID  */
#line 162 "sint.y"
             { 
        (yyval.id_list).tam = 1;
        (yyval.id_list).ids[0] = (yyvsp[0].simbolo).posicao;
      }
#line 1382 "sint.c"
    break;

  case 24: /* IDs: ID '[' NUM ']'  */
#line 166 "sint.y"
                         { 
        (yyval.id_list).tam = 1;
        (yyval.id_list).ids[0] = (yyvsp[-3].simbolo).posicao;
      }
#line 1391 "sint.c"
    break;

  case 25: /* IDs: IDs ',' AtribuicaoD  */
#line 170 "sint.y"
                              { 
          (yyval.id_list) = (yyvsp[-2].id_list);
          (yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[0].simbolo).posicao;
          (yyval.id_list).tam++;
      }
#line 1401 "sint.c"
    break;

  case 26: /* IDs: AtribuicaoD  */
#line 175 "sint.y"
                      { 
          (yyval.id_list).tam = 1;
          (yyval.id_list).ids[0] = (yyvsp[0].simbolo).posicao;
      }
#line 1410 "sint.c"
    break;

  case 27: /* TypeF: VOID  */
#line 181 "sint.y"
             { (yyval.val) = VOID; }
#line 1416 "sint.c"
    break;

  case 28: /* TypeF: Type  */
#line 181 "sint.y"
                                   { (yyval.val) = (yyvsp[0].val); }
#line 1422 "sint.c"
    break;

  case 29: /* Type: INT  */
#line 182 "sint.y"
           { (yyval.val) = INT; }
#line 1428 "sint.c"
    break;

  case 30: /* Type: CHAR  */
#line 182 "sint.y"
                                { (yyval.val) = CHAR; }
#line 1434 "sint.c"
    break;

  case 31: /* Type: FLOAT  */
#line 182 "sint.y"
                                                       { (yyval.val) = FLOAT; }
#line 1440 "sint.c"
    break;

  case 34: /* Statement: Atribuicao ';'  */
#line 187 "sint.y"
                         { }
#line 1446 "sint.c"
    break;

  case 48: /* Atribuicao: ID '[' NUM ']' '=' Exp  */
#line 207 "sint.y"
                                    { 
        verifica_var_declarada((yyvsp[-5].simbolo).posicao);
        verifica_tipos_atrib(Tabela[(yyvsp[-5].simbolo).posicao].tipo, (yyvsp[0].val));
        (yyval.val) = Tabela[(yyvsp[-5].simbolo).posicao].tipo;
    }
#line 1456 "sint.c"
    break;

  case 49: /* Atribuicao: ID '=' Exp  */
#line 212 "sint.y"
                 { 
        verifica_var_declarada((yyvsp[-2].simbolo).posicao);
        verifica_tipos_atrib(Tabela[(yyvsp[-2].simbolo).posicao].tipo, (yyvsp[0].val));
        (yyval.val) = Tabela[(yyvsp[-2].simbolo).posicao].tipo;
    }
#line 1466 "sint.c"
    break;

  case 50: /* AtribuicaoD: ID '[' NUM ']' '=' Exp  */
#line 219 "sint.y"
                                     { 
        (yyval.simbolo).posicao = (yyvsp[-5].simbolo).posicao;
        (yyval.simbolo).tipo = (yyvsp[0].val); 
    }
#line 1475 "sint.c"
    break;

  case 51: /* AtribuicaoD: ID '=' Exp  */
#line 223 "sint.y"
                 { 
        (yyval.simbolo).posicao = (yyvsp[-2].simbolo).posicao;
        (yyval.simbolo).tipo = (yyvsp[0].val);
    }
#line 1484 "sint.c"
    break;

  case 52: /* Exp: Exp '+' Exp  */
#line 230 "sint.y"
                      { (yyval.val) = retorna_maior_tipo((yyvsp[-2].val), (yyvsp[0].val)); }
#line 1490 "sint.c"
    break;

  case 53: /* Exp: Exp '-' Exp  */
#line 231 "sint.y"
                      { (yyval.val) = retorna_maior_tipo((yyvsp[-2].val), (yyvsp[0].val)); }
#line 1496 "sint.c"
    break;

  case 54: /* Exp: Exp '*' Exp  */
#line 232 "sint.y"
                      { (yyval.val) = retorna_maior_tipo((yyvsp[-2].val), (yyvsp[0].val)); }
#line 1502 "sint.c"
    break;

  case 55: /* Exp: Exp '/' Exp  */
#line 233 "sint.y"
                      { (yyval.val) = retorna_maior_tipo((yyvsp[-2].val), (yyvsp[0].val)); }
#line 1508 "sint.c"
    break;

  case 56: /* Exp: Exp '>' Exp  */
#line 234 "sint.y"
                      { (yyval.val) = INT; }
#line 1514 "sint.c"
    break;

  case 57: /* Exp: Exp '<' Exp  */
#line 235 "sint.y"
                      { (yyval.val) = INT; }
#line 1520 "sint.c"
    break;

  case 58: /* Exp: Exp GE Exp  */
#line 236 "sint.y"
                     { (yyval.val) = INT; }
#line 1526 "sint.c"
    break;

  case 59: /* Exp: Exp LE Exp  */
#line 237 "sint.y"
                     { (yyval.val) = INT; }
#line 1532 "sint.c"
    break;

  case 60: /* Exp: Exp EQ Exp  */
#line 238 "sint.y"
                     { (yyval.val) = INT; }
#line 1538 "sint.c"
    break;

  case 61: /* Exp: Exp NEQ Exp  */
#line 239 "sint.y"
                      { (yyval.val) = INT; }
#line 1544 "sint.c"
    break;

  case 62: /* Exp: Exp OR Exp  */
#line 240 "sint.y"
                     { (yyval.val) = INT; }
#line 1550 "sint.c"
    break;

  case 63: /* Exp: Exp AND Exp  */
#line 241 "sint.y"
                      { (yyval.val) = INT; }
#line 1556 "sint.c"
    break;

  case 64: /* Exp: NOT Exp  */
#line 242 "sint.y"
                  { (yyval.val) = INT; }
#line 1562 "sint.c"
    break;

  case 65: /* Exp: '(' Exp ')'  */
#line 243 "sint.y"
                      { (yyval.val) = (yyvsp[-1].val); }
#line 1568 "sint.c"
    break;

  case 66: /* Exp: NUM  */
#line 244 "sint.y"
              { (yyval.val) = INT; }
#line 1574 "sint.c"
    break;

  case 67: /* Exp: NUM_REAL  */
#line 245 "sint.y"
                   { (yyval.val) = FLOAT; }
#line 1580 "sint.c"
    break;

  case 68: /* Exp: ID '[' Exp ']'  */
#line 246 "sint.y"
                         { 
          verifica_var_declarada((yyvsp[-3].simbolo).posicao);
          (yyval.val) = Tabela[(yyvsp[-3].simbolo).posicao].tipo;
      }
#line 1589 "sint.c"
    break;

  case 69: /* Exp: ID  */
#line 250 "sint.y"
              { 
          verifica_var_declarada((yyvsp[0].simbolo).posicao);
          (yyval.val) = Tabela[(yyvsp[0].simbolo).posicao].tipo;
      }
#line 1598 "sint.c"
    break;

  case 70: /* Exp: CHARACTERE  */
#line 254 "sint.y"
                     { (yyval.val) = CHAR; }
#line 1604 "sint.c"
    break;

  case 71: /* Exp: FunctionCall  */
#line 255 "sint.y"
                       { (yyval.val) = (yyvsp[0].val); }
#line 1610 "sint.c"
    break;


#line 1614 "sint.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 258 "sint.y"
  
int main(int argc, char **argv) {     
  if (argc < 2) return 1;
  yyin = fopen(argv[1],"r");
  if (!yyin) return 1;
  yyparse();
  return 0;
} 

void verifica_var_declarada(int pos){
    
    if (semantic_err) return; 

	if(pos < 0 || Tabela[pos].tipo == -1) {
        printf("Uso de variável não declarada! na linha %d\n", yylineno);
        semantic_err = 1; 
    }
}

void verifica_func_declarada(int pos){
    if (semantic_err) return;

	if(pos < 0 || Tabela[pos].tipo == -1) {
        printf("Uso de função não declarada! na linha %d\n", yylineno);
        semantic_err = 1;
    }
}

void verifica_tipos_atrib(int tipo1, int tipo2){
    if (semantic_err) return;
    if (tipo1 == -1 || tipo2 == -1) return;

	if(tipos_inconsistentes_atrib(tipo1, tipo2)) {
        printf("Tipos incompatíveis! na linha %d\n", yylineno);
        semantic_err = 1;
    }
}

void yyerror(char *s) {
    
    if (semantic_err) return;

    printf("%s na linha %d\n", s, yylineno);
    semantic_err = 1;
}
