/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 11 "parser_test.y" /* yacc.c:1909  */

  char* str;
  int num;

#line 100 "parser_test.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TEST_TAB_H_INCLUDED  */
