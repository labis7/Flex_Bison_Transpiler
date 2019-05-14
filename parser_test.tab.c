/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser_test.y" /* yacc.c:339  */

  #include <stdio.h>
  #include "cgen.h"
  #include <string.h>
  extern int yylex(void);
  extern int line_num;
  int check(char a,char b);

#line 75 "parser_test.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser_test.tab.h".  */
#ifndef YY_YY_PARSER_TEST_TAB_H_INCLUDED
# define YY_YY_PARSER_TEST_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KW_TRUE = 258,
    KW_FALSE = 259,
    KW_INT = 260,
    KW_REAL = 261,
    KW_BOOL = 262,
    KW_STRING = 263,
    KW_ELSE = 264,
    KW_IF = 265,
    KW_THEN = 266,
    KW_FI = 267,
    KW_WHILE = 268,
    KW_LOOP = 269,
    KW_POOL = 270,
    KW_CONST = 271,
    KW_LET = 272,
    KW_RETURN = 273,
    KW_NOT = 274,
    KW_AND = 275,
    KW_OR = 276,
    NOT_EQUAL_OP = 277,
    LESS_OP = 278,
    LESS_EQUAL_OP = 279,
    FUNC_START_ARROW = 280,
    KW_START = 281,
    IDENTIFIER = 282,
    POSINT = 283,
    STRING = 284,
    REAL = 285,
    ASSIGN = 286,
    LINE_COMMENT = 287,
    MLINE_COMMENT = 288,
    READSTRING_FUNC = 289,
    READINT_FUNC = 290,
    READREAL_FUNC = 291,
    WRITESTRING_FUNC = 292,
    WRITEINT_FUNC = 293,
    WRITEREAL_FUNC = 294,
    EQUAL_OP = 295
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "parser_test.y" /* yacc.c:355  */

  char* str;
  int num;

#line 161 "parser_test.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TEST_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 178 "parser_test.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   485

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    45,     2,     2,
      46,    47,    43,    42,    54,    41,     2,    44,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    51,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    97,    98,   103,   104,   108,   109,   110,
     111,   112,   113,   117,   118,   119,   123,   124,   125,   126,
     127,   128,   132,   133,   134,   138,   141,   144,   147,   153,
     157,   161,   162,   166,   167,   171,   172,   176,   177,   178,
     185,   192,   198,   205,   206,   207,   211,   212,   213,   218,
     219,   220,   221,   225,   226,   227,   231,   232,   233,   234,
     237,   238,   239,   240,   241,   245,   246,   250,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_TRUE", "KW_FALSE", "KW_INT",
  "KW_REAL", "KW_BOOL", "KW_STRING", "KW_ELSE", "KW_IF", "KW_THEN",
  "KW_FI", "KW_WHILE", "KW_LOOP", "KW_POOL", "KW_CONST", "KW_LET",
  "KW_RETURN", "KW_NOT", "KW_AND", "KW_OR", "NOT_EQUAL_OP", "LESS_OP",
  "LESS_EQUAL_OP", "FUNC_START_ARROW", "KW_START", "IDENTIFIER", "POSINT",
  "STRING", "REAL", "ASSIGN", "LINE_COMMENT", "MLINE_COMMENT",
  "READSTRING_FUNC", "READINT_FUNC", "READREAL_FUNC", "WRITESTRING_FUNC",
  "WRITEINT_FUNC", "WRITEREAL_FUNC", "EQUAL_OP", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'('", "')'", "':'", "'{'", "'}'", "';'", "'['", "']'",
  "','", "$accept", "input", "final_form", "body", "more", "decl_list1",
  "decl_list", "decl", "func_decl", "decl_body_part", "decl_body_part_c",
  "decl_form_c", "decl_form", "decl_assign", "ident_form_part", "if_stmt",
  "while_loop", "func_parameters", "func_parameters_decl", "data_type",
  "printf_func", "function_call", "cmd_line", "comment", "string", "expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,    45,    43,    42,    47,    37,    40,    41,    58,   123,
     125,    59,    91,    93,    44
};
# endif

#define YYPACT_NINF -87

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-87)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     410,    40,   -13,   110,   -27,   -87,   -87,   -24,   -19,    -2,
       9,    37,    39,    46,   -87,   423,   -87,    44,    52,    55,
     -87,   -87,    60,    41,   -87,   -87,   -22,    81,   -87,    30,
     -87,    84,   -87,   -87,   178,   -87,   -87,   -87,   178,   178,
     178,   -87,   -87,   -87,   -87,   -87,   247,   178,     1,    80,
      88,    94,    99,   178,   178,   -87,    83,   -87,   -87,   -87,
     178,   -87,   -87,    90,   221,   -13,   206,   221,   -13,   178,
     -87,   187,   187,   328,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   -87,   -31,    29,   -87,   241,
     -87,   -87,   -87,    96,   356,   364,   119,   279,   106,   -87,
     -87,   -87,   -87,   104,   127,   178,    29,   108,   -87,    29,
     -87,   391,   429,   440,    17,    89,   284,   187,   187,   -87,
     -87,   -87,   -87,   178,   -87,   -87,   -87,   -87,   117,   -87,
     118,   -87,   178,   120,   -30,   -87,    29,   122,   166,    29,
     221,   129,   -13,   132,   158,   -87,     5,   146,   190,   149,
     147,   -18,   221,   176,   327,   221,   155,   -87,   -87,   162,
     178,   178,   -13,   168,   327,   -87,   -87,   -87,   -87,   -87,
     -87,   -17,   327,   327,   235,   291,   -87,   -87,   -87,   -87,
     172,   -87,   173,   188,   327,   327,   327,   171,   -87,    92,
     222,   189,   -87,   327,   198,   199,   200,   242,   -87,   -87,
     -87,   202,   -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    37,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     2,     0,    18,     0,     0,     0,
      16,    17,     0,    37,    24,    23,     0,     0,    22,     0,
      33,    35,    77,    78,     0,    75,    67,    76,     0,     0,
       0,    64,    71,    69,    70,    68,     0,    43,     0,     0,
       0,     0,     0,     0,     0,     1,     0,    19,    20,    21,
       0,    61,    60,     0,     0,     0,     0,     0,     0,     0,
      74,    73,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,    44,    38,     0,
      57,    58,    59,     0,     0,     0,     0,     0,     0,    49,
      51,    50,    52,     0,     0,    46,    31,     0,    34,    36,
      79,    89,    90,    86,    87,    88,    85,    81,    80,    82,
      83,    84,    56,     0,    39,    53,    54,    55,     0,    62,
       0,    30,     0,    71,     0,    29,    45,     0,     0,    32,
       0,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,    26,    48,     0,
       0,     0,     0,     0,     6,     9,    15,     8,     7,    13,
      14,     0,     5,     5,     0,     0,     3,    12,    11,    10,
       0,    27,     0,     0,     5,     5,     5,     0,     4,     0,
       0,     0,    25,     5,     0,     0,     0,     0,    41,    42,
      28,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   -87,   -86,   -87,   102,   -87,    48,   -87,   -87,
     -87,   -87,   -87,   192,     0,   109,   131,   -87,   -87,   -58,
       3,     6,    64,    77,   220,    42
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,   163,   164,   165,    15,   166,    24,    28,
      25,    26,    29,    30,    42,   167,   168,    86,   134,   103,
      43,    44,   169,   170,    45,    73
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    27,    31,    18,    32,    33,    19,   156,   180,   107,
      99,   100,   101,   102,    23,    17,   122,   141,    18,    47,
      34,    19,    49,   123,   142,    48,    64,    50,     4,    35,
      36,    37,    65,   157,   181,     7,     8,     9,    10,    11,
      12,    78,    38,    39,    51,    46,    55,    40,    16,    74,
      75,    76,    77,    78,    88,    52,    27,   150,    80,    81,
      82,    83,    84,    57,    20,   104,    22,    23,    31,    79,
      80,    81,    82,    83,    84,    60,    70,    21,    67,    58,
      71,    72,   145,    53,    68,    54,   182,   183,   151,    87,
      89,    63,    59,    48,   158,    94,    95,   171,   189,   190,
     191,   193,    97,    61,   194,   133,    62,   197,   106,    96,
      23,   109,    66,    32,    33,    69,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,    90,    36,    34,
      80,    81,    82,    83,    84,    91,    98,     4,    35,    36,
      37,    92,   147,   125,     7,     8,     9,    10,    11,    12,
     128,    38,    39,   130,    17,   131,    40,    18,   132,   135,
      19,    41,    27,   137,    17,   136,   138,    18,   140,   143,
      19,   144,    17,    17,   139,    18,    18,   146,    19,    19,
     148,    32,    33,   149,    17,    17,    17,    18,    18,    18,
      19,    19,    19,    17,   152,   153,    18,    34,   154,    19,
     155,   159,   174,   175,   172,     4,    35,    36,    37,    32,
      33,   173,     7,     8,     9,    10,    11,    12,   176,    38,
      39,   186,   192,   187,    40,    34,    99,   100,   101,   102,
      82,    83,    84,     4,    35,    36,    37,   195,   188,   196,
       7,     8,     9,    10,    11,    12,   184,    38,    39,   198,
     199,   200,   105,   202,   201,    74,    75,    76,    77,    78,
     108,    74,    75,    76,    77,    78,   177,    74,    75,    76,
      77,    78,    93,   178,     0,    79,    80,    81,    82,    83,
      84,    79,    80,    81,    82,    83,    84,    79,    80,    81,
      82,    83,    84,     0,   124,   179,     0,     0,    85,    74,
      75,    76,    77,    78,     0,   185,    76,    77,    78,     0,
       0,    74,    75,    76,    77,    78,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    80,    81,    82,    83,    84,
     129,    79,    80,    81,    82,    83,    84,   160,     0,     0,
     161,     0,     0,   162,     2,     3,     0,     0,    74,    75,
      76,    77,    78,     0,     4,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,     0,    79,    80,
      81,    82,    83,    84,     0,   110,    74,    75,    76,    77,
      78,     0,     0,     0,    74,    75,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,    79,    80,    81,    82,
      83,    84,     0,   126,    79,    80,    81,    82,    83,    84,
       0,   127,    75,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     0,
       0,    79,    80,    81,    82,    83,    84,     4,     0,    56,
       2,     3,     5,     6,     7,     8,     9,    10,    11,    12,
       4,    76,    77,    78,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    77,    78,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
       0,    80,    81,    82,    83,    84
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     0,     3,     4,     0,    25,    25,    67,
       5,     6,     7,     8,    27,    15,    47,    47,    15,    46,
      19,    15,    46,    54,    54,    52,    48,    46,    27,    28,
      29,    30,    54,    51,    51,    34,    35,    36,    37,    38,
      39,    24,    41,    42,    46,     3,     0,    46,     0,    20,
      21,    22,    23,    24,    53,    46,    56,    52,    41,    42,
      43,    44,    45,    15,     0,    65,    26,    27,    68,    40,
      41,    42,    43,    44,    45,    31,    34,     0,    48,    15,
      38,    39,   140,    46,    54,    46,   172,   173,   146,    47,
      48,    31,    15,    52,   152,    53,    54,   155,   184,   185,
     186,     9,    60,    51,    12,   105,    51,   193,    66,    26,
      27,    69,    31,     3,     4,    31,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    47,    29,    19,
      41,    42,    43,    44,    45,    47,    46,    27,    28,    29,
      30,    47,   142,    47,    34,    35,    36,    37,    38,    39,
      31,    41,    42,    47,   154,    51,    46,   154,    31,    51,
     154,    51,   162,    46,   164,   123,    48,   164,    48,    47,
     164,     5,   172,   173,   132,   172,   173,    48,   172,   173,
      48,     3,     4,    25,   184,   185,   186,   184,   185,   186,
     184,   185,   186,   193,    48,     5,   193,    19,    49,   193,
      53,    25,   160,   161,    49,    27,    28,    29,    30,     3,
       4,    49,    34,    35,    36,    37,    38,    39,    50,    41,
      42,    49,    51,    50,    46,    19,     5,     6,     7,     8,
      43,    44,    45,    27,    28,    29,    30,    15,    50,    50,
      34,    35,    36,    37,    38,    39,    11,    41,    42,    51,
      51,    51,    46,    51,    12,    20,    21,    22,    23,    24,
      68,    20,    21,    22,    23,    24,   164,    20,    21,    22,
      23,    24,    52,   164,    -1,    40,    41,    42,    43,    44,
      45,    40,    41,    42,    43,    44,    45,    40,    41,    42,
      43,    44,    45,    -1,    53,   164,    -1,    -1,    51,    20,
      21,    22,    23,    24,    -1,    14,    22,    23,    24,    -1,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    41,    42,    43,    44,    45,
      51,    40,    41,    42,    43,    44,    45,    10,    -1,    -1,
      13,    -1,    -1,    16,    17,    18,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    27,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    40,    41,    42,    43,    44,    45,
      -1,    47,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,
      -1,    40,    41,    42,    43,    44,    45,    27,    -1,    16,
      17,    18,    32,    33,    34,    35,    36,    37,    38,    39,
      27,    22,    23,    24,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    23,    24,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    17,    18,    27,    32,    33,    34,    35,    36,
      37,    38,    39,    56,    57,    61,    62,    69,    75,    76,
      77,    78,    26,    27,    63,    65,    66,    69,    64,    67,
      68,    69,     3,     4,    19,    28,    29,    30,    41,    42,
      46,    51,    69,    75,    76,    79,    80,    46,    52,    46,
      46,    46,    46,    46,    46,     0,    16,    62,    77,    78,
      31,    51,    51,    31,    48,    54,    31,    48,    54,    31,
      80,    80,    80,    80,    20,    21,    22,    23,    24,    40,
      41,    42,    43,    44,    45,    51,    72,    80,    53,    80,
      47,    47,    47,    79,    80,    80,    26,    80,    46,     5,
       6,     7,     8,    74,    69,    46,    80,    74,    68,    80,
      47,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    47,    54,    53,    47,    47,    47,    31,    51,
      47,    51,    31,    69,    73,    51,    80,    46,    48,    80,
      48,    47,    54,    47,     5,    74,    48,    69,    48,    25,
      52,    74,    48,     5,    49,    53,    25,    51,    74,    25,
      10,    13,    16,    58,    59,    60,    62,    70,    71,    77,
      78,    74,    49,    49,    80,    80,    50,    60,    70,    71,
      25,    51,    58,    58,    11,    14,    49,    50,    50,    58,
      58,    58,    51,     9,    12,    15,    50,    58,    51,    51,
      51,    12,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    59,    60,    60,    60,    61,    61,    61,    61,
      61,    61,    62,    62,    62,    63,    63,    63,    63,    64,
      65,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      70,    70,    71,    72,    72,    72,    73,    73,    73,    74,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    76,
      77,    77,    77,    77,    77,    78,    78,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,    11,    12,     0,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,    12,     8,    10,    14,     4,
       4,     3,     5,     1,     3,     1,     3,     1,     3,     4,
       8,     6,     6,     0,     1,     3,     0,     3,     5,     1,
       1,     1,     1,     4,     4,     4,     4,     3,     3,     3,
       2,     2,     4,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 89 "parser_test.y" /* yacc.c:1646  */
    { 
  if (yyerror_count == 0) {
    printf("//Expression evaluates to:\n\n%s",(yyvsp[0].str)); 
  }  
}
#line 1455 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 97 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("\n#include <stdio.h>\n#include \"teaclib.h\" \n\nint main(){\n%s\n}\n",(yyvsp[-1].str));}
#line 1461 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 98 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("\n#include <stdio.h>\n#include \"teaclib.h\"\n#include <stdbool.h> \n\n%s\n\nint main(){\n%s\n}\n",(yyvsp[-11].str),(yyvsp[-1].str));}
#line 1467 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str)="";}
#line 1473 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 104 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str)=template("%s",(yyvsp[0].str));}
#line 1479 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 111 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1485 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 112 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1491 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 113 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1497 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 125 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1503 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 126 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1509 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 127 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1515 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 128 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1521 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 132 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1527 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 133 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("const %s", (yyvsp[0].str)); }
#line 1533 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 134 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1539 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 138 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s %s(%s)\n{\n%s\n}\n",(yyvsp[-5].str),(yyvsp[-11].str),(yyvsp[-8].str),(yyvsp[-2].str));
											int res=check((yyvsp[-11].str)[0],(yyvsp[-11].str)[strlen((yyvsp[-11].str))-1]);
											if(res) return -1;}
#line 1547 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 141 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s %s(%s);",(yyvsp[-1].str),(yyvsp[-7].str),(yyvsp[-4].str));
									int res=check((yyvsp[-7].str)[0],(yyvsp[-7].str)[strlen((yyvsp[-7].str))-1]);
									if(res) return -1;}
#line 1555 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 144 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s *%s(%s);",(yyvsp[-1].str),(yyvsp[-9].str),(yyvsp[-6].str));
									int res=check((yyvsp[-9].str)[0],(yyvsp[-9].str)[strlen((yyvsp[-9].str))-1]);
									if(res) return -1;}
#line 1563 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 147 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s *%s(%s)\n{\n%s\n}\n",(yyvsp[-5].str),(yyvsp[-13].str),(yyvsp[-10].str),(yyvsp[-2].str));
												int res=check((yyvsp[-13].str)[0],(yyvsp[-13].str)[strlen((yyvsp[-13].str))-1]);
												 if(res) return -1;}
#line 1571 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 153 "parser_test.y" /* yacc.c:1646  */
    {  (yyval.str) = template("%s %s;", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1577 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 157 "parser_test.y" /* yacc.c:1646  */
    {  (yyval.str) = template("%s %s;", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1583 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 161 "parser_test.y" /* yacc.c:1646  */
    {  (yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1589 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "parser_test.y" /* yacc.c:1646  */
    {  (yyval.str) = template("%s , %s = %s", (yyvsp[-4].str), (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1595 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 166 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s",(yyvsp[0].str));}
#line 1601 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 167 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s , %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1607 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 171 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s",(yyvsp[0].str));}
#line 1613 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 172 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s = %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1619 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 176 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 1625 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("*%s",(yyvsp[-2].str));}
#line 1631 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 178 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s[%s]",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1637 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 185 "parser_test.y" /* yacc.c:1646  */
    {
if(((yyvsp[-2].str)[0]=='i')&&((yyvsp[-2].str)[1]=='f'))
  {(yyval.str) = template("if (%s)\n{\n%s\n}\nelse %s\n",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str)); }
else
  {(yyval.str) = template("if (%s)\n{\n%s\n}\nelse\n {\n%s\n}",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str)); } 
 }
#line 1648 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 192 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("if (%s)\n{\n%s\n}",(yyvsp[-4].str), (yyvsp[-2].str)); }
#line 1654 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 198 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("while (%s)\n{\n%s\n}\n",(yyvsp[-4].str),(yyvsp[-2].str));}
#line 1660 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 205 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = "";}
#line 1666 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 206 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 1672 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 207 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s , %s",(yyvsp[-2].str), (yyvsp[0].str));}
#line 1678 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 211 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str)="";}
#line 1684 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 212 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s %s",(yyvsp[0].str),(yyvsp[-2].str));}
#line 1690 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 213 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s ,%s %s",(yyvsp[-4].str),(yyvsp[0].str),(yyvsp[-2].str));}
#line 1696 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 218 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s", (yyvsp[0].str));}
#line 1702 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 219 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("int", (yyvsp[0].str));}
#line 1708 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 220 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("float");}
#line 1714 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 221 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("char");}
#line 1720 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 225 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s(%s)",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1726 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 226 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s(%s)",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1732 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 227 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s(%s)",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1738 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 231 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s(%s)",(yyvsp[-3].str), (yyvsp[-1].str));}
#line 1744 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 232 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s()",(yyvsp[-2].str));}
#line 1750 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 233 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s()",(yyvsp[-2].str));}
#line 1756 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 234 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s()",(yyvsp[-2].str));}
#line 1762 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 237 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1768 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 238 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1774 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 239 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s = %s;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1780 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 240 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("return %s;",(yyvsp[-1].str));}
#line 1786 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 241 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("return ;");}
#line 1792 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 245 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("//%s",(yyvsp[0].str));}
#line 1798 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 246 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("/*%s*/",(yyvsp[0].str));}
#line 1804 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 250 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 1810 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 257 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("+%s", (yyvsp[0].str)); }
#line 1816 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 258 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("-%s", (yyvsp[0].str)); }
#line 1822 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 259 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("!%s", (yyvsp[0].str)); }
#line 1828 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 264 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 1834 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 265 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1840 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 266 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1846 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 267 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1852 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 268 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1858 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 269 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %% %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1864 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 270 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s == %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1870 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 271 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1876 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 272 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s < %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1882 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 273 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s <= %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1888 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 274 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1894 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 275 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1900 "parser_test.tab.c" /* yacc.c:1646  */
    break;


#line 1904 "parser_test.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 278 "parser_test.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() == 0 )
    printf("\n//Accepted!\n");
  else
  {
    fprintf(stderr," : %s\n",buff);
    printf("\n//Rejected!\n");
  }
}


int check(char a,char b){
if((a=='*')||(b==']')){
    yyerror("\nWrong identifier format(No '[]' allowed!\n)\n");
    return 1;
}
else 
return 0;
}



