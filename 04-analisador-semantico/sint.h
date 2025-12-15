/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINT_H_INCLUDED
# define YY_YY_SINT_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUM = 258,                     /* NUM  */
    NUM_REAL = 259,                /* NUM_REAL  */
    ID = 260,                      /* ID  */
    FOR = 261,                     /* FOR  */
    WHILE = 262,                   /* WHILE  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    ENDIF = 265,                   /* ENDIF  */
    CHAR = 266,                    /* CHAR  */
    INT = 267,                     /* INT  */
    FLOAT = 268,                   /* FLOAT  */
    VOID = 269,                    /* VOID  */
    RETURN = 270,                  /* RETURN  */
    OR = 271,                      /* OR  */
    AND = 272,                     /* AND  */
    NOT = 273,                     /* NOT  */
    GE = 274,                      /* GE  */
    LE = 275,                      /* LE  */
    EQ = 276,                      /* EQ  */
    NEQ = 277,                     /* NEQ  */
    DO = 278,                      /* DO  */
    STRING = 279,                  /* STRING  */
    CHARACTERE = 280               /* CHARACTERE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUM 258
#define NUM_REAL 259
#define ID 260
#define FOR 261
#define WHILE 262
#define IF 263
#define ELSE 264
#define ENDIF 265
#define CHAR 266
#define INT 267
#define FLOAT 268
#define VOID 269
#define RETURN 270
#define OR 271
#define AND 272
#define NOT 273
#define GE 274
#define LE 275
#define EQ 276
#define NEQ 277
#define DO 278
#define STRING 279
#define CHARACTERE 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "sint.y"

	struct ids{
		int ids[50];
		int tam;
	} id_list;
	struct simb{
		int posicao;
		char *lexema;
		int tipo;
	} simbolo;
	int val;
	float fval;
	char cval;

#line 132 "sint.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SINT_H_INCLUDED  */
