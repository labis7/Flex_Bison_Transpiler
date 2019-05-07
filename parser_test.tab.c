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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   442

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  204

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
       0,    88,    88,    99,   100,   105,   106,   110,   111,   112,
     113,   114,   115,   116,   117,   122,   123,   124,   128,   129,
     130,   131,   132,   133,   137,   138,   139,   143,   146,   149,
     152,   158,   162,   166,   167,   171,   172,   176,   177,   181,
     182,   183,   190,   197,   203,   210,   211,   212,   216,   217,
     218,   223,   224,   225,   226,   230,   231,   232,   236,   237,
     238,   239,   242,   243,   244,   248,   249,   253,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277
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
  "\"teaclib.h\"", "WRITEREAL_FUNC", "EQUAL_OP", "'-'", "'+'", "'*'",
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

#define YYPACT_NINF -153

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-153)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     394,    27,   -14,   101,   -29,  -153,  -153,   -24,   -19,     2,
      44,  -153,   406,  -153,    14,    15,  -153,  -153,    34,    16,
    -153,  -153,   -13,    56,  -153,    -2,  -153,    57,  -153,  -153,
     101,  -153,  -153,  -153,   101,   101,   101,  -153,  -153,  -153,
     207,   101,    81,    39,    43,    46,  -153,    30,  -153,  -153,
    -153,   101,  -153,    45,    55,   -14,   168,    55,   -14,   101,
    -153,    26,    26,   288,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,  -153,   -26,   352,  -153,   201,
    -153,  -153,  -153,    63,   239,    49,  -153,  -153,  -153,  -153,
      48,    66,   101,   352,    50,  -153,   352,  -153,   358,   364,
     125,   310,   114,   244,    26,    26,  -153,  -153,  -153,  -153,
     101,  -153,    60,  -153,    54,  -153,   101,    59,   -21,  -153,
     352,    65,    98,   352,    55,    71,   -14,    73,    88,  -153,
      -1,    77,   109,    83,    80,   -15,    55,   115,   287,    55,
      90,  -153,  -153,    95,   101,   101,   -14,    99,   104,   116,
     128,   287,  -153,  -153,  -153,  -153,  -153,  -153,  -153,   -11,
     287,   287,   195,   251,   136,   101,   101,  -153,  -153,  -153,
    -153,  -153,   126,  -153,   132,   133,   287,   287,   138,   316,
     324,   287,   135,  -153,    25,   173,   139,   141,   142,   149,
    -153,   287,   150,   154,  -153,  -153,  -153,   156,   177,  -153,
    -153,  -153,   157,  -153
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    39,    65,    66,     0,     0,     0,
       0,     2,     0,    20,     0,     0,    18,    19,     0,    39,
      26,    25,     0,     0,    24,     0,    35,    37,    76,    77,
       0,    74,    67,    75,     0,     0,     0,    70,    69,    68,
       0,    45,     0,     0,     0,     0,     1,     0,    21,    22,
      23,     0,    62,     0,     0,     0,     0,     0,     0,     0,
      73,    72,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    64,     0,    46,    40,     0,
      59,    60,    61,     0,     0,     0,    51,    53,    52,    54,
       0,     0,    48,    33,     0,    36,    38,    78,    88,    89,
      85,    86,    87,    84,    80,    79,    81,    82,    83,    58,
       0,    41,     0,    63,     0,    32,     0,    70,     0,    31,
      47,     0,     0,    34,     0,     0,     0,     0,     0,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       0,    28,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     9,    17,     8,     7,    10,    15,    16,     0,
       5,     5,     0,     0,     0,     0,     0,     3,    13,    12,
      11,    14,     0,    29,     0,     0,     5,     5,     0,     0,
       0,     5,     0,     4,     0,     0,     0,     0,     0,     0,
      27,     5,     0,     0,    55,    56,    57,     0,     0,    43,
      44,    30,     0,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,  -153,  -152,  -153,    61,  -153,    18,  -153,  -153,
    -153,  -153,  -153,   153,     0,    62,    69,  -153,  -153,   -41,
      75,     3,    19,    20,    36,     8
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,   150,   151,   152,    12,   153,    20,    24,
      21,    22,    25,    26,    37,   154,   155,    76,   118,    90,
     156,    38,   157,   158,    39,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      14,    23,    27,    15,    86,    87,    88,    89,   174,   175,
     140,    40,    14,    19,   172,    15,    94,    41,    13,    16,
      17,   109,    43,    42,   184,   185,   125,    44,   110,   189,
      48,    49,    50,   126,   191,    54,   141,   192,    60,   198,
     173,    55,    61,    62,    46,    51,    57,    23,    45,    77,
      79,   134,    58,    18,    19,    91,    83,    19,    27,    84,
      86,    87,    88,    89,    93,    53,    52,    96,    42,    72,
      73,    74,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   129,    28,    29,    80,    56,    59,   135,
      81,    85,   117,    82,   112,   142,   114,   116,   159,   115,
      30,   119,   122,   128,    28,    29,   121,   124,     4,    31,
      32,    33,   127,   133,   137,     7,     8,     9,   120,   130,
      30,   132,    34,    35,   123,   136,   131,    36,     4,    31,
      32,    33,   138,   139,    78,     7,     8,     9,    14,   160,
     143,    15,    34,    35,   161,   164,    23,    36,    67,    68,
     165,    14,   162,   163,    15,    70,    71,    72,    73,    74,
      14,    14,   166,    15,    15,    32,    70,    71,    72,    73,
      74,    28,    29,   179,   180,   181,    14,    14,   167,    15,
      15,    14,   182,   183,    15,   186,   190,    30,   193,   202,
     194,    14,   195,   196,    15,     4,    31,    32,    33,   197,
     178,   199,     7,     8,     9,   200,   176,   201,   203,    34,
      35,    95,   168,   169,    92,    64,    65,    66,    67,    68,
     170,    64,    65,    66,    67,    68,   171,    64,    65,    66,
      67,    68,     0,     0,     0,    69,    70,    71,    72,    73,
      74,    69,    70,    71,    72,    73,    74,    69,    70,    71,
      72,    73,    74,     0,   111,     0,     0,     0,    75,    64,
      65,    66,    67,    68,     0,   177,    66,    67,    68,     0,
       0,    64,    65,    66,    67,    68,     0,     0,     0,    69,
      70,    71,    72,    73,    74,    70,    71,    72,    73,    74,
     113,    69,    70,    71,    72,    73,    74,   144,     0,     0,
     145,     0,     0,   146,     2,     3,     0,     0,    64,    65,
      66,    67,    68,     0,     4,     0,     0,     0,     0,     5,
       6,     7,     8,     9,   147,   148,   149,     0,    69,    70,
      71,    72,    73,    74,    68,    97,    64,    65,    66,    67,
      68,     0,     0,     0,    64,    65,    66,    67,    68,     0,
       0,    70,    71,    72,    73,    74,    69,    70,    71,    72,
      73,    74,     0,   187,    69,    70,    71,    72,    73,    74,
       0,   188,    64,    65,    66,    67,    68,     0,     0,    65,
      66,    67,    68,     0,     0,     0,    66,    67,    68,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    69,    70,
      71,    72,    73,    74,    69,    70,    71,    72,    73,    74,
       1,     2,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     4,    47,     2,     3,     0,     5,     6,     7,     8,
       9,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       7,     8,     9
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,     0,     5,     6,     7,     8,   160,   161,
      25,     3,    12,    27,    25,    12,    57,    46,     0,     0,
       0,    47,    46,    52,   176,   177,    47,    46,    54,   181,
      12,    12,    12,    54,     9,    48,    51,    12,    30,   191,
      51,    54,    34,    35,     0,    31,    48,    47,    46,    41,
      42,    52,    54,    26,    27,    55,    26,    27,    58,    51,
       5,     6,     7,     8,    56,    31,    51,    59,    52,    43,
      44,    45,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,   124,     3,     4,    47,    31,    31,   130,
      47,    46,    92,    47,    31,   136,    47,    31,   139,    51,
      19,    51,    48,     5,     3,     4,    46,    48,    27,    28,
      29,    30,    47,    25,     5,    34,    35,    36,   110,    48,
      19,    48,    41,    42,   116,    48,   126,    46,    27,    28,
      29,    30,    49,    53,    53,    34,    35,    36,   138,    49,
      25,   138,    41,    42,    49,    46,   146,    46,    23,    24,
      46,   151,   144,   145,   151,    41,    42,    43,    44,    45,
     160,   161,    46,   160,   161,    29,    41,    42,    43,    44,
      45,     3,     4,   165,   166,    49,   176,   177,    50,   176,
     177,   181,    50,    50,   181,    47,    51,    19,    15,    12,
      51,   191,    51,    51,   191,    27,    28,    29,    30,    50,
     164,    51,    34,    35,    36,    51,    11,    51,    51,    41,
      42,    58,   151,   151,    46,    20,    21,    22,    23,    24,
     151,    20,    21,    22,    23,    24,   151,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    40,    41,    42,    43,    44,    45,    40,    41,    42,
      43,    44,    45,    -1,    53,    -1,    -1,    -1,    51,    20,
      21,    22,    23,    24,    -1,    14,    22,    23,    24,    -1,
      -1,    20,    21,    22,    23,    24,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    41,    42,    43,    44,    45,
      51,    40,    41,    42,    43,    44,    45,    10,    -1,    -1,
      13,    -1,    -1,    16,    17,    18,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    27,    -1,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    40,    41,
      42,    43,    44,    45,    24,    47,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      -1,    41,    42,    43,    44,    45,    40,    41,    42,    43,
      44,    45,    -1,    47,    40,    41,    42,    43,    44,    45,
      -1,    47,    20,    21,    22,    23,    24,    -1,    -1,    21,
      22,    23,    24,    -1,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    40,    41,
      42,    43,    44,    45,    40,    41,    42,    43,    44,    45,
      16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    16,    17,    18,    -1,    32,    33,    34,    35,
      36,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    17,    18,    27,    32,    33,    34,    35,    36,
      56,    57,    61,    62,    69,    76,    77,    78,    26,    27,
      63,    65,    66,    69,    64,    67,    68,    69,     3,     4,
      19,    28,    29,    30,    41,    42,    46,    69,    76,    79,
      80,    46,    52,    46,    46,    46,     0,    16,    62,    77,
      78,    31,    51,    31,    48,    54,    31,    48,    54,    31,
      80,    80,    80,    80,    20,    21,    22,    23,    24,    40,
      41,    42,    43,    44,    45,    51,    72,    80,    53,    80,
      47,    47,    47,    26,    80,    46,     5,     6,     7,     8,
      74,    69,    46,    80,    74,    68,    80,    47,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    47,
      54,    53,    31,    51,    47,    51,    31,    69,    73,    51,
      80,    46,    48,    80,    48,    47,    54,    47,     5,    74,
      48,    69,    48,    25,    52,    74,    48,     5,    49,    53,
      25,    51,    74,    25,    10,    13,    16,    37,    38,    39,
      58,    59,    60,    62,    70,    71,    75,    77,    78,    74,
      49,    49,    80,    80,    46,    46,    46,    50,    60,    70,
      71,    75,    25,    51,    58,    58,    11,    14,    79,    80,
      80,    49,    50,    50,    58,    58,    47,    47,    47,    58,
      51,     9,    12,    15,    51,    51,    51,    50,    58,    51,
      51,    51,    12,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    63,    63,    63,
      63,    64,    65,    66,    66,    67,    67,    68,    68,    69,
      69,    69,    70,    70,    71,    72,    72,    72,    73,    73,
      73,    74,    74,    74,    74,    75,    75,    75,    76,    76,
      76,    76,    77,    77,    77,    78,    78,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,    11,    12,     0,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,    12,     8,    10,
      14,     4,     4,     3,     5,     1,     3,     1,     3,     1,
       3,     4,     8,     6,     6,     0,     1,     3,     0,     3,
       5,     1,     1,     1,     1,     5,     5,     5,     4,     3,
       3,     3,     2,     4,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3
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
#line 90 "parser_test.y" /* yacc.c:1646  */
    { 
  if (yyerror_count == 0) {
    printf("\n\n");
    printf("Expression evaluates to:%s",(yyvsp[0].str)); 
  }  
}
#line 1445 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 99 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("\n#include <stdio.h>\n#include \"teaclib.h\" \n\nint main(){\n%s\n}\n",(yyvsp[-1].str));}
#line 1451 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 100 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("\n#include <stdio.h>\n#include \"teaclib.h\" \n\n%s\n\nint main(){\n%s\n}\n",(yyvsp[-11].str),(yyvsp[-1].str));}
#line 1457 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 105 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str)="";}
#line 1463 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 106 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str)=template("%s",(yyvsp[0].str));}
#line 1469 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 114 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1475 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 115 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1481 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 116 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1487 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 117 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1493 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 130 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str)); }
#line 1499 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 131 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1505 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 132 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1511 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 133 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s", (yyvsp[-1].str), (yyvsp[0].str)); }
#line 1517 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 137 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1523 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 138 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("const %s", (yyvsp[0].str)); }
#line 1529 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 139 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1535 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 143 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s %s(%s)\n{\n%s\n}\n",(yyvsp[-5].str),(yyvsp[-11].str),(yyvsp[-8].str),(yyvsp[-2].str));
											int res=check((yyvsp[-11].str)[0],(yyvsp[-11].str)[strlen((yyvsp[-11].str))-1]);
											if(res) return -1;}
#line 1543 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 146 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s %s(%s);",(yyvsp[-1].str),(yyvsp[-7].str),(yyvsp[-4].str));
									int res=check((yyvsp[-7].str)[0],(yyvsp[-7].str)[strlen((yyvsp[-7].str))-1]);
									if(res) return -1;}
#line 1551 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s *%s(%s);",(yyvsp[-1].str),(yyvsp[-9].str),(yyvsp[-6].str));
									int res=check((yyvsp[-9].str)[0],(yyvsp[-9].str)[strlen((yyvsp[-9].str))-1]);
									if(res) return -1;}
#line 1559 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s *%s(%s)\n{\n%s\n}\n",(yyvsp[-5].str),(yyvsp[-13].str),(yyvsp[-10].str),(yyvsp[-2].str));
												int res=check((yyvsp[-13].str)[0],(yyvsp[-13].str)[strlen((yyvsp[-13].str))-1]);
												 if(res) return -1;}
#line 1567 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 158 "parser_test.y" /* yacc.c:1646  */
    {  (yyval.str) = template("%s %s;", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1573 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 162 "parser_test.y" /* yacc.c:1646  */
    {  (yyval.str) = template("%s %s;", (yyvsp[-1].str), (yyvsp[-3].str)); }
#line 1579 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 166 "parser_test.y" /* yacc.c:1646  */
    {  (yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1585 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 167 "parser_test.y" /* yacc.c:1646  */
    {  (yyval.str) = template("%s , %s = %s", (yyvsp[-4].str), (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1591 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 171 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s",(yyvsp[0].str));}
#line 1597 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 172 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s , %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1603 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 176 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s",(yyvsp[0].str));}
#line 1609 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s = %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1615 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 181 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 1621 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 182 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("*%s",(yyvsp[-2].str));}
#line 1627 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 183 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template ("%s[%s]",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1633 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 190 "parser_test.y" /* yacc.c:1646  */
    {
if(((yyvsp[-2].str)[0]=='i')&&((yyvsp[-2].str)[1]=='f'))
  {(yyval.str) = template("if %s\n{\n%s\n}\nelse %s\n",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str)); }
else
  {(yyval.str) = template("if %s\n{\n%s\n}\nelse\n {\n%s\n}",(yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str)); } 
 }
#line 1644 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 197 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("if %s\n{\n%s\n}",(yyvsp[-4].str), (yyvsp[-2].str)); }
#line 1650 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 203 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("while %s\n{\n%s\n}\n",(yyvsp[-4].str),(yyvsp[-2].str));}
#line 1656 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 210 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = "";}
#line 1662 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 211 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 1668 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 212 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s , %s",(yyvsp[-2].str), (yyvsp[0].str));}
#line 1674 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 216 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str)="";}
#line 1680 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 217 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s %s",(yyvsp[0].str),(yyvsp[-2].str));}
#line 1686 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 218 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s ,%s %s",(yyvsp[-4].str),(yyvsp[0].str),(yyvsp[-2].str));}
#line 1692 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 223 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s", (yyvsp[0].str));}
#line 1698 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 224 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("int", (yyvsp[0].str));}
#line 1704 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 225 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("float");}
#line 1710 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 226 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("char");}
#line 1716 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 230 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s(%s);",(yyvsp[-4].str),(yyvsp[-2].str));}
#line 1722 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 231 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s(%s);",(yyvsp[-4].str),(yyvsp[-2].str));}
#line 1728 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 232 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s(%s);",(yyvsp[-4].str),(yyvsp[-2].str));}
#line 1734 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 236 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s(%s)",(yyvsp[-3].str), (yyvsp[-1].str));}
#line 1740 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 237 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s()",(yyvsp[-2].str));}
#line 1746 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 238 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s()",(yyvsp[-2].str));}
#line 1752 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 239 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s()",(yyvsp[-2].str));}
#line 1758 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 242 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s;",(yyvsp[-1].str));}
#line 1764 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 243 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s = %s;",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1770 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 244 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("return %s;",(yyvsp[-1].str));}
#line 1776 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 248 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("\\\\%s",(yyvsp[0].str));}
#line 1782 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 249 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("/*%s*/",(yyvsp[0].str));}
#line 1788 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 253 "parser_test.y" /* yacc.c:1646  */
    {(yyval.str) = template("%s",(yyvsp[0].str));}
#line 1794 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 259 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("+%s", (yyvsp[0].str)); }
#line 1800 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 260 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("-%s", (yyvsp[0].str)); }
#line 1806 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 261 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("!%s", (yyvsp[0].str)); }
#line 1812 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 266 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)", (yyvsp[-1].str)); }
#line 1818 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 267 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1824 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 268 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1830 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 269 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1836 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 270 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1842 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 271 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s % %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1848 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 272 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1854 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 273 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1860 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 274 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s < %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1866 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 275 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s <= %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1872 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 276 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1878 "parser_test.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 277 "parser_test.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1884 "parser_test.tab.c" /* yacc.c:1646  */
    break;


#line 1888 "parser_test.tab.c" /* yacc.c:1646  */
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
#line 280 "parser_test.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}


int check(char a,char b){
if((a=='*')||(b==']')){
    yyerror("\nWrong identifier format(No '[]' allowed!\n)\n");
    return 1;
//printf("\n\n%c%c\n",a,b);
}
else 
return 0;
}



