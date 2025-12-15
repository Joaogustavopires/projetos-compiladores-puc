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
#line 1 "semantic.y"
 
#include "analex.c" 
#include "codigo.h" 
void verifica_var_declarada(int pos);
void verifica_func_declarada(int pos);
void verifica_tipos_atrib(int tipo1, int tipo2);
void verifica_tipo_indice(int tipo1);
void verifica_argumentos(int pos, int tam_args);

#line 81 "semantic.c"

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

#include "semantic.h"
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
  YYSYMBOL_40_ = 40,                       /* ';'  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_ProgL = 43,                     /* ProgL  */
  YYSYMBOL_Prog = 44,                      /* Prog  */
  YYSYMBOL_Function = 45,                  /* Function  */
  YYSYMBOL_FunctionCall = 46,              /* FunctionCall  */
  YYSYMBOL_ArgList = 47,                   /* ArgList  */
  YYSYMBOL_ParamList = 48,                 /* ParamList  */
  YYSYMBOL_Decls = 49,                     /* Decls  */
  YYSYMBOL_Decl = 50,                      /* Decl  */
  YYSYMBOL_IDs = 51,                       /* IDs  */
  YYSYMBOL_TypeF = 52,                     /* TypeF  */
  YYSYMBOL_Type = 53,                      /* Type  */
  YYSYMBOL_Statement_Seq = 54,             /* Statement_Seq  */
  YYSYMBOL_Statement = 55,                 /* Statement  */
  YYSYMBOL_Compound_Stt = 56,              /* Compound_Stt  */
  YYSYMBOL_If = 57,                        /* If  */
  YYSYMBOL_While = 58,                     /* While  */
  YYSYMBOL_For = 59,                       /* For  */
  YYSYMBOL_DoWhile = 60,                   /* DoWhile  */
  YYSYMBOL_Atribuicao = 61,                /* Atribuicao  */
  YYSYMBOL_Exp = 62                        /* Exp  */
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
#define YYLAST   331

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    40,
      28,    26,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    41,     2,     2,     2,     2,     2,     2,
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
static const yytype_int16 yyrline[] =
{
       0,    73,    73,    76,    77,    82,    85,    90,    92,    96,
     107,   111,   114,   118,   119,   123,   130,   132,   134,   137,
     138,   140,   144,   145,   149,   150,   151,   155,   157,   161,
     163,   164,   165,   166,   167,   169,   180,   192,   196,   197,
     201,   203,   207,   212,   216,   220,   223,   227,   229,   230,
     232,   233,   235,   236,   238,   239,   241,   242,   244,   245,
     246,   248,   249,   250,   252,   253,   255,   256
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
  "'%'", "'('", "'['", "')'", "'{'", "'}'", "','", "';'", "']'", "$accept",
  "ProgL", "Prog", "Function", "FunctionCall", "ArgList", "ParamList",
  "Decls", "Decl", "IDs", "TypeF", "Type", "Statement_Seq", "Statement",
  "Compound_Stt", "If", "While", "For", "DoWhile", "Atribuicao", "Exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      99,  -103,  -103,  -103,  -103,    14,    99,  -103,    31,  -103,
    -103,  -103,   -15,    62,    11,     1,    72,    54,    44,    54,
    -103,   250,    48,    97,    54,   100,    61,    70,    73,    80,
      -1,    10,    68,    77,   250,  -103,  -103,  -103,  -103,    76,
      54,    -4,    85,  -103,   250,  -103,    75,    67,   124,   120,
      75,    75,    96,   103,  -103,   250,  -103,   134,  -103,  -103,
    -103,  -103,  -103,   141,   157,   125,  -103,  -103,     8,    75,
    -103,  -103,    75,  -103,   255,  -103,   128,   118,   131,     0,
     126,   160,   178,  -103,  -103,   135,   140,   142,    71,  -103,
    -103,    75,  -103,   196,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,  -103,    75,   149,    75,
      10,    10,  -103,    75,   149,   181,   101,  -103,   271,   285,
     122,   122,   299,   299,   122,   122,    30,    30,  -103,  -103,
    -103,    75,   139,  -103,    74,   214,   144,  -103,   255,    75,
      10,  -103,   146,   149,   232,   183,  -103,    10,  -103,  -103
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    25,    24,    26,    22,     0,     2,     4,     0,    23,
       1,     3,     0,     0,     0,     0,     0,    14,     0,     0,
      12,     0,     0,     0,    14,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,    30,    32,    31,    33,     0,
      14,    20,    15,    21,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,    37,     0,    38,     0,    34,     6,
      27,    29,    13,     0,     0,     0,    61,    62,    64,     0,
      67,    65,     0,    66,    46,     8,     0,    10,     0,     0,
       0,     0,     0,    36,    35,     0,     0,     0,    16,    17,
       5,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,    39,     0,    19,     0,     0,    60,    57,    58,
      53,    54,    55,    56,    51,    52,    47,    48,    49,    50,
       9,     0,     0,    42,     0,     0,     0,    63,    45,     0,
       0,    40,     0,    18,     0,     0,    44,     0,    41,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,   195,   -21,    95,  -103,   -12,  -103,  -103,
    -103,    63,   -23,   -14,  -102,  -103,  -103,  -103,  -103,   -20,
     -45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    73,    76,    15,    21,    22,    42,
       8,    23,    33,    56,    57,    35,    36,    37,    38,    39,
      77
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,    74,    52,    43,    53,    81,    82,    34,   133,   134,
      32,    60,    44,    32,    10,    26,    27,    28,    29,    13,
      34,    65,    46,    32,    92,    30,    46,    93,    62,    80,
      34,    63,    85,    31,    32,    48,    12,    18,   145,    54,
      19,    34,    47,    91,    89,   149,   116,    55,    17,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   104,   105,     9,   132,     1,     2,     3,   135,     9,
      66,    67,    68,     1,     2,     3,    16,    20,    66,    67,
      68,    24,    25,   140,   141,    69,   138,    46,    40,    32,
      32,    70,    71,    69,   144,    47,    48,    46,    14,    70,
      71,    72,    41,    75,    49,    45,   115,    50,    58,    72,
       1,     2,     3,     4,    51,    59,    61,    94,    95,    32,
      96,    97,    98,    99,    64,    79,    32,    78,   100,   101,
     102,   103,   104,   105,    94,    95,    83,    96,    97,    98,
      99,    86,   137,    84,    87,   100,   101,   102,   103,   104,
     105,   102,   103,   104,   105,    94,    95,   107,    96,    97,
      98,    99,    88,    90,   106,   109,   100,   101,   102,   103,
     104,   105,   108,   112,   113,   131,    94,    95,   139,    96,
      97,    98,    99,   114,   136,   143,   146,   100,   101,   102,
     103,   104,   105,   148,    94,    95,   110,    96,    97,    98,
      99,    11,   130,     0,     0,   100,   101,   102,   103,   104,
     105,     0,    94,    95,   111,    96,    97,    98,    99,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105,     0,
      94,    95,   117,    96,    97,    98,    99,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,    94,    95,
     142,    96,    97,    98,    99,    26,    27,    28,    29,   100,
     101,   102,   103,   104,   105,    30,     0,     0,   147,     0,
       0,    94,    95,    31,    96,    97,    98,    99,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,    95,     0,
      96,    97,    98,    99,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,    96,    97,    98,    99,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,    96,    97,
      -1,    -1,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105
};

static const yytype_int16 yycheck[] =
{
      21,    46,     3,    23,     5,    50,    51,    21,   110,   111,
      31,    34,    24,    34,     0,     5,     6,     7,     8,    34,
      34,    44,    26,    44,    69,    15,    26,    72,    40,    49,
      44,    35,    55,    23,    55,    35,     5,    36,   140,    40,
      39,    55,    34,    35,    64,   147,    91,    37,    37,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    31,    32,     0,   109,    11,    12,    13,   113,     6,
       3,     4,     5,    11,    12,    13,    13,     5,     3,     4,
       5,    37,    19,     9,    10,    18,   131,    26,    40,   110,
     111,    24,    25,    18,   139,    34,    35,    26,    36,    24,
      25,    34,     5,    36,    34,     5,    35,    34,    40,    34,
      11,    12,    13,    14,    34,    38,    40,    16,    17,   140,
      19,    20,    21,    22,    39,     5,   147,     3,    27,    28,
      29,    30,    31,    32,    16,    17,    40,    19,    20,    21,
      22,     7,    41,    40,     3,    27,    28,    29,    30,    31,
      32,    29,    30,    31,    32,    16,    17,    39,    19,    20,
      21,    22,     5,    38,    36,    39,    27,    28,    29,    30,
      31,    32,    41,    38,    34,    26,    16,    17,    39,    19,
      20,    21,    22,    41,     3,    41,    40,    27,    28,    29,
      30,    31,    32,    10,    16,    17,    36,    19,    20,    21,
      22,     6,   107,    -1,    -1,    27,    28,    29,    30,    31,
      32,    -1,    16,    17,    36,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    27,    28,    29,    30,    31,    32,    -1,
      16,    17,    36,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    27,    28,    29,    30,    31,    32,    -1,    16,    17,
      36,    19,    20,    21,    22,     5,     6,     7,     8,    27,
      28,    29,    30,    31,    32,    15,    -1,    -1,    36,    -1,
      -1,    16,    17,    23,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    17,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    11,    12,    13,    14,    43,    44,    45,    52,    53,
       0,    45,     5,    34,    36,    48,    53,    37,    36,    39,
       5,    49,    50,    53,    37,    53,     5,     6,     7,     8,
      15,    23,    46,    54,    55,    57,    58,    59,    60,    61,
      40,     5,    51,    61,    49,     5,    26,    34,    35,    34,
      34,    34,     3,     5,    40,    37,    55,    56,    40,    38,
      54,    40,    49,    35,    39,    54,     3,     4,     5,    18,
      24,    25,    34,    46,    62,    36,    47,    62,     3,     5,
      61,    62,    62,    40,    40,    54,     7,     3,     5,    61,
      38,    35,    62,    62,    16,    17,    19,    20,    21,    22,
      27,    28,    29,    30,    31,    32,    36,    39,    41,    39,
      36,    36,    38,    34,    41,    35,    62,    36,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      47,    26,    62,    56,    56,    62,     3,    41,    62,    39,
       9,    10,    36,    41,    62,    56,    40,    36,    10,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      47,    48,    48,    49,    49,    50,    51,    51,    51,    51,
      51,    51,    52,    52,    53,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    58,    59,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     9,     8,     4,     3,     3,
       1,     4,     2,     3,     0,     2,     3,     3,     6,     4,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       1,     1,     1,     1,     2,     3,     3,     2,     1,     3,
       6,     8,     5,     9,     7,     6,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     1,     1,     4,     1,     1,     1,     1
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
#line 73 "semantic.y"
             { printf("%s",(yyvsp[0].node).code);}
#line 1255 "semantic.c"
    break;

  case 3: /* Prog: Prog Function  */
#line 76 "semantic.y"
                     { create_cod(&(yyval.node).code); insert_cod(&(yyval.node).code, (yyvsp[-1].node).code); insert_cod(&(yyval.node).code, "\n"); insert_cod(&(yyval.node).code, (yyvsp[0].node).code); }
#line 1261 "semantic.c"
    break;

  case 4: /* Prog: Function  */
#line 77 "semantic.y"
                   { (yyval.node) = (yyvsp[0].node);
    }
#line 1268 "semantic.c"
    break;

  case 5: /* Function: TypeF ID '(' ParamList ')' '{' Decls Statement_Seq '}'  */
#line 82 "semantic.y"
                                                                { for(int i=0; i<(yyvsp[-5].id_list).tam; i++){ Tabela[(yyvsp[-7].val)].arg_list[Tabela[(yyvsp[-7].val)].tam_arg_list++] = (yyvsp[-5].id_list).ids[i];
    } offset = 0; set_type((yyvsp[-7].val), (yyvsp[-8].val)); set_num_param((yyvsp[-7].val), (yyvsp[-5].id_list).tam); Funct(&(yyval.node),(yyvsp[-7].val),(yyvsp[-1].node)); }
#line 1275 "semantic.c"
    break;

  case 6: /* Function: TypeF ID '(' ')' '{' Decls Statement_Seq '}'  */
#line 85 "semantic.y"
                                                  { Tabela[(yyvsp[-6].val)].tam_arg_list = 0; offset = 0; set_type((yyvsp[-6].val), (yyvsp[-7].val)); set_num_param((yyvsp[-6].val), 0);
    Funct(&(yyval.node),(yyvsp[-6].val),(yyvsp[-1].node)); }
#line 1282 "semantic.c"
    break;

  case 7: /* FunctionCall: ID '(' ArgList ')'  */
#line 90 "semantic.y"
                       { verifica_func_declarada((yyvsp[-3].val));
    verifica_argumentos((yyvsp[-3].val), (yyvsp[-1].id_list).tam); Call(&(yyval.node),(yyvsp[-3].val),(yyvsp[-1].id_list)); }
#line 1289 "semantic.c"
    break;

  case 8: /* FunctionCall: ID '(' ')'  */
#line 92 "semantic.y"
                     { verifica_func_declarada((yyvsp[-2].val)); verifica_argumentos((yyvsp[-2].val), 0); Call_blank(&(yyval.node),(yyvsp[-2].val)); }
#line 1295 "semantic.c"
    break;

  case 9: /* ArgList: Exp ',' ArgList  */
#line 96 "semantic.y"
                    { 
        create_cod(&(yyval.id_list).code);
        insert_cod(&(yyval.id_list).code, (yyvsp[-2].node).code); 
        insert_cod(&(yyval.id_list).code, (yyvsp[0].id_list).code); 
        (yyval.id_list).tam = 0;
        for(int i=0; i<(yyvsp[0].id_list).tam; i++) {
            (yyval.id_list).ids[(yyval.id_list).tam++] = (yyvsp[0].id_list).ids[i];
        } 
        (yyval.id_list).ids[(yyval.id_list).tam++] = (yyvsp[-2].node).place; 
    }
#line 1310 "semantic.c"
    break;

  case 10: /* ArgList: Exp  */
#line 107 "semantic.y"
         { create_cod(&(yyval.id_list).code); insert_cod(&(yyval.id_list).code, (yyvsp[0].node).code); (yyval.id_list).tam = 1; (yyval.id_list).ids[0] = (yyvsp[0].node).place; }
#line 1316 "semantic.c"
    break;

  case 11: /* ParamList: ParamList ',' Type ID  */
#line 111 "semantic.y"
                           {(yyval.id_list).tam = 0;
    for(int i=0; i<(yyvsp[-3].id_list).tam; i++) {(yyval.id_list).ids[(yyval.id_list).tam++] = (yyvsp[-3].id_list).ids[i];} (yyval.id_list).ids[(yyval.id_list).tam++] = (yyvsp[0].val); set_type((yyvsp[0].val), (yyvsp[-1].val));}
#line 1323 "semantic.c"
    break;

  case 12: /* ParamList: Type ID  */
#line 114 "semantic.y"
            {(yyval.id_list).tam = 1; (yyval.id_list).ids[0] = (yyvsp[0].val); set_type((yyvsp[0].val), (yyvsp[-1].val));}
#line 1329 "semantic.c"
    break;

  case 15: /* Decl: Type IDs  */
#line 123 "semantic.y"
                 {for(int i=0; i<(yyvsp[0].id_list).tam; i++){
			set_type((yyvsp[0].id_list).ids[i], (yyvsp[-1].val));
			set_num_param((yyvsp[0].id_list).ids[i], -1);
		}}
#line 1338 "semantic.c"
    break;

  case 16: /* IDs: IDs ',' ID  */
#line 130 "semantic.y"
                     {for(int i=0; i<(yyvsp[-2].id_list).tam; i++) {(yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[-2].id_list).ids[i]; (yyval.id_list).tam++;} (yyval.id_list).ids[(yyval.id_list).tam++] = (yyvsp[0].val);}
#line 1344 "semantic.c"
    break;

  case 17: /* IDs: IDs ',' Atribuicao  */
#line 132 "semantic.y"
                       {for(int i=0; i<(yyvsp[-2].id_list).tam; i++) {(yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[-2].id_list).ids[i]; (yyval.id_list).tam++;} (yyval.id_list).ids[(yyval.id_list).tam++] = (yyvsp[0].node).place;}
#line 1350 "semantic.c"
    break;

  case 18: /* IDs: IDs ',' ID '[' NUM ']'  */
#line 134 "semantic.y"
                           {verifica_tipo_indice((yyvsp[-1].node).tipo);for(int i=0; i<(yyvsp[-5].id_list).tam; i++){(yyval.id_list).ids[(yyval.id_list).tam++] = (yyvsp[-5].id_list).ids[i];} 
	(yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[-3].val); (yyval.id_list).tam += 1;}
#line 1357 "semantic.c"
    break;

  case 19: /* IDs: ID '[' NUM ']'  */
#line 137 "semantic.y"
                   {verifica_tipo_indice((yyvsp[-1].node).tipo);(yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[-3].val); (yyval.id_list).tam += 1; }
#line 1363 "semantic.c"
    break;

  case 20: /* IDs: ID  */
#line 138 "semantic.y"
             {(yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[0].val); (yyval.id_list).tam += 1; }
#line 1369 "semantic.c"
    break;

  case 21: /* IDs: Atribuicao  */
#line 140 "semantic.y"
               {(yyval.id_list).ids[(yyval.id_list).tam] = (yyvsp[0].node).place; (yyval.id_list).tam += 1; }
#line 1375 "semantic.c"
    break;

  case 22: /* TypeF: VOID  */
#line 144 "semantic.y"
               {(yyval.val) = VOID;}
#line 1381 "semantic.c"
    break;

  case 23: /* TypeF: Type  */
#line 145 "semantic.y"
               {(yyval.val) = (yyvsp[0].val);}
#line 1387 "semantic.c"
    break;

  case 24: /* Type: INT  */
#line 149 "semantic.y"
              {(yyval.val) = INT;}
#line 1393 "semantic.c"
    break;

  case 25: /* Type: CHAR  */
#line 150 "semantic.y"
               {(yyval.val) = CHAR;}
#line 1399 "semantic.c"
    break;

  case 26: /* Type: FLOAT  */
#line 151 "semantic.y"
                {(yyval.val) = FLOAT;}
#line 1405 "semantic.c"
    break;

  case 27: /* Statement_Seq: Statement Statement_Seq  */
#line 155 "semantic.y"
                                { create_cod(&(yyval.node).code);
    insert_cod(&(yyval.node).code, (yyvsp[-1].node).code); insert_cod(&(yyval.node).code, (yyvsp[0].node).code); }
#line 1412 "semantic.c"
    break;

  case 28: /* Statement_Seq: Statement  */
#line 157 "semantic.y"
                    { create_cod(&(yyval.node).code); insert_cod(&(yyval.node).code, (yyvsp[0].node).code); }
#line 1418 "semantic.c"
    break;

  case 29: /* Statement: Atribuicao ';'  */
#line 161 "semantic.y"
                         {verifica_var_declarada((yyvsp[-1].node).place); verifica_tipos_atrib(Tabela[(yyvsp[-1].node).place].tipo, (yyvsp[-1].node).tipo);
    (yyval.node) = (yyvsp[-1].node);}
#line 1425 "semantic.c"
    break;

  case 34: /* Statement: FunctionCall ';'  */
#line 167 "semantic.y"
                           {(yyval.node) = (yyvsp[-1].node);}
#line 1431 "semantic.c"
    break;

  case 35: /* Statement: RETURN ID ';'  */
#line 169 "semantic.y"
                  { 
        create_cod(&(yyval.node).code);
        struct no val_ret;
        Lw(&val_ret, (yyvsp[-1].val));
        insert_cod(&(yyval.node).code, val_ret.code);
        char reg_val[10];
        getName(val_ret.place, reg_val);
        char instr[100];
        sprintf(instr, "\tmove $v0,%s\n", reg_val);
        insert_cod(&(yyval.node).code, instr);
    }
#line 1447 "semantic.c"
    break;

  case 36: /* Statement: RETURN NUM ';'  */
#line 181 "semantic.y"
    { 
        create_cod(&(yyval.node).code);
        struct no val_ret;
        Li(&val_ret, (yyvsp[-1].node).place);
        insert_cod(&(yyval.node).code, val_ret.code);
        char reg_val[10];
        getName(val_ret.place, reg_val);
        char instr[100];
        sprintf(instr, "\tmove $v0,%s\n", reg_val);
        insert_cod(&(yyval.node).code, instr);
    }
#line 1463 "semantic.c"
    break;

  case 37: /* Statement: RETURN ';'  */
#line 192 "semantic.y"
                     { create_cod(&(yyval.node).code); }
#line 1469 "semantic.c"
    break;

  case 38: /* Compound_Stt: Statement  */
#line 196 "semantic.y"
                    {(yyval.node) = (yyvsp[0].node);}
#line 1475 "semantic.c"
    break;

  case 39: /* Compound_Stt: '{' Statement_Seq '}'  */
#line 197 "semantic.y"
                                {(yyval.node) = (yyvsp[-1].node);}
#line 1481 "semantic.c"
    break;

  case 40: /* If: IF '(' Exp ')' Compound_Stt ENDIF  */
#line 201 "semantic.y"
                                            { If(&(yyval.node),(yyvsp[-3].node),(yyvsp[-1].node));
    }
#line 1488 "semantic.c"
    break;

  case 41: /* If: IF '(' Exp ')' Compound_Stt ELSE Compound_Stt ENDIF  */
#line 203 "semantic.y"
                                                              { IfElse(&(yyval.node),(yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node)); }
#line 1494 "semantic.c"
    break;

  case 42: /* While: WHILE '(' Exp ')' Compound_Stt  */
#line 207 "semantic.y"
                                        { While(&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node));
    }
#line 1501 "semantic.c"
    break;

  case 43: /* For: FOR '(' Atribuicao ',' Exp ',' Exp ')' Compound_Stt  */
#line 212 "semantic.y"
                                                            { }
#line 1507 "semantic.c"
    break;

  case 44: /* DoWhile: DO Compound_Stt WHILE '(' Exp ')' ';'  */
#line 217 "semantic.y"
    { DoWhile(&(yyval.node),(yyvsp[-2].node),(yyvsp[-5].node)); }
#line 1513 "semantic.c"
    break;

  case 45: /* Atribuicao: ID '[' NUM ']' '=' Exp  */
#line 220 "semantic.y"
                                    { verifica_tipo_indice((yyvsp[-3].node).tipo);
    verifica_var_declarada((yyvsp[-5].val)); verifica_tipos_atrib(Tabela[(yyvsp[-5].val)].tipo, (yyvsp[0].node).tipo); (yyval.node).tipo = (yyvsp[0].node).tipo; (yyval.node).place = (yyvsp[-5].val); Atrib(&(yyval.node),(yyvsp[-5].val),(yyvsp[0].node)); }
#line 1520 "semantic.c"
    break;

  case 46: /* Atribuicao: ID '=' Exp  */
#line 223 "semantic.y"
               { verifica_var_declarada((yyvsp[-2].val)); verifica_tipos_atrib(Tabela[(yyvsp[-2].val)].tipo, (yyvsp[0].node).tipo); (yyval.node).tipo = (yyvsp[0].node).tipo; (yyval.node).place = (yyvsp[-2].val); Atrib(&(yyval.node),(yyvsp[-2].val),(yyvsp[0].node)); }
#line 1526 "semantic.c"
    break;

  case 47: /* Exp: Exp '+' Exp  */
#line 227 "semantic.y"
                      {(yyval.node).tipo = retorna_maior_tipo((yyvsp[-2].node).tipo, (yyvsp[0].node).tipo);
    ExpAri("add",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1533 "semantic.c"
    break;

  case 48: /* Exp: Exp '-' Exp  */
#line 229 "semantic.y"
                      {(yyval.node).tipo = retorna_maior_tipo((yyvsp[-2].node).tipo, (yyvsp[0].node).tipo); ExpAri("sub",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1539 "semantic.c"
    break;

  case 49: /* Exp: Exp '*' Exp  */
#line 230 "semantic.y"
                      {(yyval.node).tipo = retorna_maior_tipo((yyvsp[-2].node).tipo, (yyvsp[0].node).tipo); ExpAri("mul",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1545 "semantic.c"
    break;

  case 50: /* Exp: Exp '/' Exp  */
#line 232 "semantic.y"
                {(yyval.node).tipo = retorna_maior_tipo((yyvsp[-2].node).tipo, (yyvsp[0].node).tipo); ExpAri("div",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1551 "semantic.c"
    break;

  case 51: /* Exp: Exp '>' Exp  */
#line 233 "semantic.y"
                      {(yyval.node).tipo = INT; ExpRel("bgt",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1557 "semantic.c"
    break;

  case 52: /* Exp: Exp '<' Exp  */
#line 235 "semantic.y"
                {(yyval.node).tipo = INT; ExpRel("blt",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1563 "semantic.c"
    break;

  case 53: /* Exp: Exp GE Exp  */
#line 236 "semantic.y"
                     {(yyval.node).tipo = INT; ExpRel("bge",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1569 "semantic.c"
    break;

  case 54: /* Exp: Exp LE Exp  */
#line 238 "semantic.y"
               {(yyval.node).tipo = INT; ExpRel("ble",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1575 "semantic.c"
    break;

  case 55: /* Exp: Exp EQ Exp  */
#line 239 "semantic.y"
                     {(yyval.node).tipo = INT; ExpRel("beq",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1581 "semantic.c"
    break;

  case 56: /* Exp: Exp NEQ Exp  */
#line 241 "semantic.y"
                {(yyval.node).tipo = INT; ExpRel("bne",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1587 "semantic.c"
    break;

  case 57: /* Exp: Exp OR Exp  */
#line 242 "semantic.y"
                     {(yyval.node).tipo = INT; ExpAri("or",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1593 "semantic.c"
    break;

  case 58: /* Exp: Exp AND Exp  */
#line 244 "semantic.y"
                {(yyval.node).tipo = INT; ExpAri("and",&(yyval.node),(yyvsp[-2].node),(yyvsp[0].node)); }
#line 1599 "semantic.c"
    break;

  case 59: /* Exp: NOT Exp  */
#line 245 "semantic.y"
                  {(yyval.node).tipo = INT;}
#line 1605 "semantic.c"
    break;

  case 60: /* Exp: '(' Exp ')'  */
#line 246 "semantic.y"
                      {(yyval.node) = (yyvsp[-1].node);}
#line 1611 "semantic.c"
    break;

  case 61: /* Exp: NUM  */
#line 248 "semantic.y"
        {(yyval.node).tipo = (yyvsp[0].node).tipo; Li(&(yyval.node),(yyvsp[0].node).place); }
#line 1617 "semantic.c"
    break;

  case 62: /* Exp: NUM_REAL  */
#line 249 "semantic.y"
                   {(yyval.node).tipo = FLOAT; Li(&(yyval.node),(yyvsp[0].node).place); }
#line 1623 "semantic.c"
    break;

  case 63: /* Exp: ID '[' Exp ']'  */
#line 250 "semantic.y"
                         {verifica_var_declarada((yyvsp[-3].val)); (yyval.node).tipo = Tabela[(yyvsp[-3].val)].tipo;
    verifica_tipo_indice((yyvsp[-1].node).tipo); Lw(&(yyval.node),(yyvsp[-3].val)); }
#line 1630 "semantic.c"
    break;

  case 64: /* Exp: ID  */
#line 252 "semantic.y"
              {verifica_var_declarada((yyvsp[0].val)); (yyval.node).tipo = Tabela[(yyvsp[0].val)].tipo; Lw(&(yyval.node),(yyvsp[0].val)); }
#line 1636 "semantic.c"
    break;

  case 65: /* Exp: CHARACTERE  */
#line 253 "semantic.y"
                     {(yyval.node).tipo = CHAR; Li(&(yyval.node),(yyvsp[0].node).place); }
#line 1642 "semantic.c"
    break;

  case 66: /* Exp: FunctionCall  */
#line 255 "semantic.y"
                 {(yyval.node).tipo = (yyvsp[0].node).tipo; (yyval.node).place = (yyvsp[0].node).place; (yyval.node).code = (yyvsp[0].node).code; }
#line 1648 "semantic.c"
    break;

  case 67: /* Exp: STRING  */
#line 256 "semantic.y"
                 {}
#line 1654 "semantic.c"
    break;


#line 1658 "semantic.c"

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

#line 259 "semantic.y"
  
int main(int argc, char **argv) {     
  yyin = fopen(argv[1],"r");
  yyparse();
} 


void verifica_var_declarada(int pos){
	if(Tabela[pos].tipo == -1)
		yyerror("Uso de variável não declarada!");
}

void verifica_func_declarada(int pos){
	if(Tabela[pos].tipo == -1)
		yyerror("Uso de função não declarada!");
}

void verifica_tipos_atrib(int tipo1, int tipo2){
	if(tipos_inconsistentes_atrib(tipo1, tipo2))
		yyerror("Tipos incompatíveis!");
}

void verifica_tipo_indice(int tipo1){
	if(tipo1 != INT)
		yyerror("Indice de vetor não inteiro");
}

void verifica_argumentos(int pos, int tam_arg){
	if(Tabela[pos].tam_arg_list != tam_arg){
		char error_string[100];
		sprintf(error_string, "Numero de parametros (%d) e argumentos (%d) distintos", Tabela[pos].tam_arg_list, tam_arg);
		yyerror(error_string);
    }
}
