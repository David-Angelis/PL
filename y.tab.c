/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BREPORT = 258,
     EREPORT = 259,
     BFM = 260,
     EFM = 261,
     BTITLE = 262,
     ETITLE = 263,
     BSUBTITLE = 264,
     ESUBTITLE = 265,
     BAUTHOR = 266,
     EAUTHOR = 267,
     BNAME = 268,
     ENAME = 269,
     BFOOT = 270,
     EFOOT = 271,
     BIDENT = 272,
     EINDENT = 273,
     BMAIL = 274,
     EMAIL = 275,
     BURL = 276,
     EURL = 277,
     BAFF = 278,
     EAFF = 279,
     BDATE = 280,
     EDATE = 281,
     BINST = 282,
     EINST = 283,
     BKEY = 284,
     EKEY = 285,
     BAKN = 286,
     EAKN = 287,
     BABS = 288,
     EABS = 289,
     TOC = 290,
     LOF = 291,
     LOT = 292,
     BBODY = 293,
     EBODY = 294,
     BCHAP = 295,
     ECHAP = 296,
     BSEC = 297,
     ESEC = 298,
     BSUBSEC = 299,
     ESUBSEC = 300,
     BSUBSUBSECTION = 301,
     ESUBSUBSECTION = 302,
     BLIST = 303,
     ELIST = 304,
     BCODE = 305,
     ECODE = 306,
     BSUM = 307,
     ESUM = 308,
     BPARA = 309,
     EPARA = 310,
     BREF = 311,
     EREF = 312,
     BXREF = 313,
     EXREF = 314,
     BCIT = 315,
     ECIT = 316,
     BITERM = 317,
     EITERM = 318,
     BBLOD = 319,
     EBOLD = 320,
     BITALIC = 321,
     EITALIC = 322,
     BUNDERLINE = 323,
     EUNDERLINE = 324,
     BINLINE = 325,
     EINLINE = 326,
     BACRONYM = 327,
     EACRONYM = 328,
     BFIG = 329,
     EFIG = 330,
     BGRAPH = 331,
     EGRAPH = 332,
     BCAPTION = 333,
     ECAPTION = 334,
     BTABLE = 335,
     ETABLE = 336,
     BBACK = 337,
     EBACK = 338,
     TEXTO = 339,
     TARGET = 340,
     INT = 341,
     Caminho = 342,
     texto = 343,
     BDESC = 344,
     EDESC = 345,
     BITEM = 346,
     EITEM = 347,
     BNUM = 348,
     ENUM = 349,
     BBM = 350,
     EBM = 351,
     BKEYS = 352,
     EKEYS = 353
   };
#endif
/* Tokens.  */
#define BREPORT 258
#define EREPORT 259
#define BFM 260
#define EFM 261
#define BTITLE 262
#define ETITLE 263
#define BSUBTITLE 264
#define ESUBTITLE 265
#define BAUTHOR 266
#define EAUTHOR 267
#define BNAME 268
#define ENAME 269
#define BFOOT 270
#define EFOOT 271
#define BIDENT 272
#define EINDENT 273
#define BMAIL 274
#define EMAIL 275
#define BURL 276
#define EURL 277
#define BAFF 278
#define EAFF 279
#define BDATE 280
#define EDATE 281
#define BINST 282
#define EINST 283
#define BKEY 284
#define EKEY 285
#define BAKN 286
#define EAKN 287
#define BABS 288
#define EABS 289
#define TOC 290
#define LOF 291
#define LOT 292
#define BBODY 293
#define EBODY 294
#define BCHAP 295
#define ECHAP 296
#define BSEC 297
#define ESEC 298
#define BSUBSEC 299
#define ESUBSEC 300
#define BSUBSUBSECTION 301
#define ESUBSUBSECTION 302
#define BLIST 303
#define ELIST 304
#define BCODE 305
#define ECODE 306
#define BSUM 307
#define ESUM 308
#define BPARA 309
#define EPARA 310
#define BREF 311
#define EREF 312
#define BXREF 313
#define EXREF 314
#define BCIT 315
#define ECIT 316
#define BITERM 317
#define EITERM 318
#define BBLOD 319
#define EBOLD 320
#define BITALIC 321
#define EITALIC 322
#define BUNDERLINE 323
#define EUNDERLINE 324
#define BINLINE 325
#define EINLINE 326
#define BACRONYM 327
#define EACRONYM 328
#define BFIG 329
#define EFIG 330
#define BGRAPH 331
#define EGRAPH 332
#define BCAPTION 333
#define ECAPTION 334
#define BTABLE 335
#define ETABLE 336
#define BBACK 337
#define EBACK 338
#define TEXTO 339
#define TARGET 340
#define INT 341
#define Caminho 342
#define texto 343
#define BDESC 344
#define EDESC 345
#define BITEM 346
#define EITEM 347
#define BNUM 348
#define ENUM 349
#define BBM 350
#define EBM 351
#define BKEYS 352
#define EKEYS 353




/* Copy the first part of user declarations.  */
#line 1 "gramatica.y"

  #include <stdio.h>
  #include <stdlib.h>
  #include "report2007.h"
  extern int yylineno;
  int yyerror();
  extern char* yytext;
  int yylex();


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 10 "gramatica.y"
{
Report report;
Front front;
ListAuthor lauthor;
Author author;
char * str;
KeyWords words;
PConteudo conteudo;
ListaConteudo lconteudo;
ListaParagraph lparagraph;
ListaParagraph lparagraph1;
Bold bold;
Italic litalic;
Acronym acronym;
LUnderline lunderline;
LInline inLine;
ListChapter lchapter;
Capitulo chapter;
LChapter Cchapter;
ChapterConteudo chapterConteudo;
Section section;
LSection lsection;
SectionConteudo sectionConteudo;
SubSection subSection;
LSubSectionC LSubSection;
SubSectionConteudo subsectionConteudo;
SubSubSection subSubSection;
LSubSubSection lsubSubSection;
SubSubSectionConteudo subSubSectionConteudo;
ItemList list;
ListConteudo listConteudo;
Desc desc;
Item item;
Num num;
CodeBlock codeblock;
LSumary lsumary;
Float foat;
Figure figure;
Graphic graphic;
Table table;
LTrow ltrow;
}
/* Line 193 of yacc.c.  */
#line 345 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 358 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    11,    25,    29,    33,    37,    38,
      41,    43,    51,    55,    59,    63,    64,    68,    69,    73,
      74,    78,    82,    83,    87,    88,    91,    93,    97,   101,
     105,   106,   109,   111,   115,   118,   121,   123,   125,   127,
     129,   131,   133,   135,   137,   139,   141,   143,   145,   149,
     153,   157,   161,   165,   169,   172,   175,   177,   179,   183,
     186,   189,   192,   193,   197,   200,   203,   206,   207,   211,
     214,   217,   220,   221,   226,   228,   229,   231,   232,   234,
     235,   239,   242,   244,   249,   252,   254,   256,   258,   260,
     262,   264,   266,   271,   274,   276,   278,   280,   282,   284,
     286,   288,   293,   296,   298,   300,   302,   304,   306,   308,
     310,   315,   318,   320,   322,   324,   326,   328,   330,   334,
     337,   339,   341,   343,   345,   350,   354,   358,   362,   366,
     369,   371,   373,   375,   380,   385,   387,   388,   392,   397,
     400,   402
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     100,     0,    -1,   101,    -1,     3,   102,   141,   103,     4,
      -1,     5,   104,   105,   106,   113,   114,   115,   118,   119,
     138,   139,   140,     6,    -1,    95,   120,    96,    -1,     7,
      84,     8,    -1,     9,    84,    10,    -1,    -1,   106,   107,
      -1,   107,    -1,    11,   108,   109,   110,   111,   112,    12,
      -1,    13,    84,    14,    -1,    17,    84,    18,    -1,    19,
      84,    20,    -1,    -1,    21,    84,    22,    -1,    -1,    23,
      84,    24,    -1,    -1,    25,    84,    26,    -1,    27,    84,
      28,    -1,    -1,    97,   116,    98,    -1,    -1,   116,   117,
      -1,   117,    -1,    29,    84,    30,    -1,    33,   120,    34,
      -1,    31,   120,    32,    -1,    -1,   120,   121,    -1,   121,
      -1,    54,   122,    55,    -1,   122,    84,    -1,   122,   123,
      -1,    84,    -1,   123,    -1,   124,    -1,   125,    -1,   126,
      -1,   127,    -1,   128,    -1,   129,    -1,   131,    -1,   133,
      -1,   135,    -1,   137,    -1,    15,    84,    16,    -1,    56,
      84,    57,    -1,    58,    84,    59,    -1,    60,    84,    61,
      -1,    62,    84,    63,    -1,    64,   130,    65,    -1,   130,
      84,    -1,   130,   133,    -1,    84,    -1,   133,    -1,    66,
     132,    67,    -1,   132,    84,    -1,   132,   129,    -1,   132,
     133,    -1,    -1,    68,   134,    69,    -1,   134,    84,    -1,
     134,   129,    -1,   134,   131,    -1,    -1,    70,   136,    71,
      -1,   136,    84,    -1,   136,   129,    -1,   136,   131,    -1,
      -1,    72,   104,    84,    73,    -1,    35,    -1,    -1,    36,
      -1,    -1,    37,    -1,    -1,    38,   142,    39,    -1,   142,
     143,    -1,   143,    -1,    40,   104,   144,    41,    -1,   144,
     145,    -1,   145,    -1,   121,    -1,   164,    -1,   155,    -1,
     161,    -1,   146,    -1,   162,    -1,    42,   104,   147,    43,
      -1,   147,   148,    -1,   148,    -1,   121,    -1,   164,    -1,
     155,    -1,   161,    -1,   149,    -1,   162,    -1,    44,   104,
     150,    45,    -1,   150,   151,    -1,   151,    -1,   121,    -1,
     164,    -1,   155,    -1,   161,    -1,   152,    -1,   162,    -1,
      46,   104,   153,    47,    -1,   153,   154,    -1,   154,    -1,
     121,    -1,   164,    -1,   155,    -1,   161,    -1,   162,    -1,
      48,   156,    49,    -1,   156,   157,    -1,   157,    -1,   158,
      -1,   159,    -1,   160,    -1,    89,    84,    84,    90,    -1,
      91,    84,    92,    -1,    93,    84,    94,    -1,    50,    84,
      51,    -1,    52,   163,    53,    -1,   163,    84,    -1,    84,
      -1,   165,    -1,   169,    -1,    74,   166,   168,    75,    -1,
      76,    84,   167,    77,    -1,    84,    -1,    -1,    78,    84,
      79,    -1,    80,   168,   170,    81,    -1,   170,   171,    -1,
     171,    -1,    84,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   105,   108,   110,   112,   114,   115,   117,
     118,   120,   122,   124,   126,   127,   129,   130,   132,   133,
     136,   140,   141,   144,   145,   148,   149,   153,   156,   159,
     160,   162,   163,   166,   169,   170,   171,   172,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   187,   189,
     191,   193,   195,   197,   199,   200,   201,   202,   204,   206,
     207,   208,   209,   211,   213,   214,   215,   216,   218,   220,
     221,   222,   223,   225,   228,   229,   231,   232,   234,   235,
     238,   241,   242,   245,   248,   249,   253,   254,   255,   256,
     257,   258,   261,   263,   264,   267,   268,   269,   270,   271,
     272,   274,   277,   278,   281,   282,   283,   284,   285,   286,
     289,   291,   292,   295,   296,   297,   298,   299,   302,   304,
     305,   307,   308,   309,   311,   313,   315,   317,   319,   321,
     322,   325,   326,   328,   330,   332,   333,   335,   338,   340,
     341,   343
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREPORT", "EREPORT", "BFM", "EFM",
  "BTITLE", "ETITLE", "BSUBTITLE", "ESUBTITLE", "BAUTHOR", "EAUTHOR",
  "BNAME", "ENAME", "BFOOT", "EFOOT", "BIDENT", "EINDENT", "BMAIL",
  "EMAIL", "BURL", "EURL", "BAFF", "EAFF", "BDATE", "EDATE", "BINST",
  "EINST", "BKEY", "EKEY", "BAKN", "EAKN", "BABS", "EABS", "TOC", "LOF",
  "LOT", "BBODY", "EBODY", "BCHAP", "ECHAP", "BSEC", "ESEC", "BSUBSEC",
  "ESUBSEC", "BSUBSUBSECTION", "ESUBSUBSECTION", "BLIST", "ELIST", "BCODE",
  "ECODE", "BSUM", "ESUM", "BPARA", "EPARA", "BREF", "EREF", "BXREF",
  "EXREF", "BCIT", "ECIT", "BITERM", "EITERM", "BBLOD", "EBOLD", "BITALIC",
  "EITALIC", "BUNDERLINE", "EUNDERLINE", "BINLINE", "EINLINE", "BACRONYM",
  "EACRONYM", "BFIG", "EFIG", "BGRAPH", "EGRAPH", "BCAPTION", "ECAPTION",
  "BTABLE", "ETABLE", "BBACK", "EBACK", "TEXTO", "TARGET", "INT",
  "Caminho", "texto", "BDESC", "EDESC", "BITEM", "EITEM", "BNUM", "ENUM",
  "BBM", "EBM", "BKEYS", "EKEYS", "$accept", "Final", "Report",
  "FrontMatter", "BackMatter", "Title", "SubTitle", "Authors", "Author",
  "Name", "Nident", "Email", "Url", "Affiliation", "Date", "Institution",
  "LKeys", "Keys", "Keywords", "Abstract", "Aknowledgements", "ParaList",
  "Paragraph", "ParaContent", "FreeElement", "Footnote", "Ref", "Xref",
  "Citref", "Iterm", "Bold", "BContent", "Italic", "IContent", "UnderLine",
  "UContent", "InlineCode", "INContent", "Acronym", "Toc", "Lof", "Lot",
  "Body", "ChapterList", "Chapter", "ElemList", "Elem", "Section",
  "ElemListSec", "ElemSec", "SubSection", "ElemListSubSec", "ElemSubSec",
  "SubSubSection", "ElemListSubSubSec", "ElemSubSubSec", "List",
  "ElemLists", "Elems", "Desc", "Item", "Num", "CodeBlock", "Summary",
  "ElemSum", "Float", "Figure", "Graphic", "Format", "Caption", "Table",
  "TrowList", "Trow", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   101,   102,   103,   104,   105,   105,   106,
     106,   107,   108,   109,   110,   110,   111,   111,   112,   112,
     113,   114,   114,   115,   115,   116,   116,   117,   118,   119,
     119,   120,   120,   121,   122,   122,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   124,   125,
     126,   127,   128,   129,   130,   130,   130,   130,   131,   132,
     132,   132,   132,   133,   134,   134,   134,   134,   135,   136,
     136,   136,   136,   137,   138,   138,   139,   139,   140,   140,
     141,   142,   142,   143,   144,   144,   145,   145,   145,   145,
     145,   145,   146,   147,   147,   148,   148,   148,   148,   148,
     148,   149,   150,   150,   151,   151,   151,   151,   151,   151,
     152,   153,   153,   154,   154,   154,   154,   154,   155,   156,
     156,   157,   157,   157,   158,   159,   160,   161,   162,   163,
     163,   164,   164,   165,   166,   167,   167,   168,   169,   170,
     170,   171
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     5,    13,     3,     3,     3,     0,     2,
       1,     7,     3,     3,     3,     0,     3,     0,     3,     0,
       3,     3,     0,     3,     0,     2,     1,     3,     3,     3,
       0,     2,     1,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     1,     3,     2,
       2,     2,     0,     3,     2,     2,     2,     0,     3,     2,
       2,     2,     0,     4,     1,     0,     1,     0,     1,     0,
       3,     2,     1,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     1,     1,     4,     3,     3,     3,     3,     2,
       1,     1,     1,     4,     4,     1,     0,     3,     4,     2,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     1,     0,     8,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     6,
       0,     0,     0,    10,     0,    80,    81,     0,     0,    32,
       3,     7,     0,     0,     0,     9,    22,     0,     0,     0,
       0,     0,     0,    86,     0,    85,    90,    88,    89,    91,
      87,   131,   132,     0,     0,     0,     0,     0,     0,    62,
      67,    72,     0,    36,     0,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     5,    31,     0,     0,
      15,     0,     0,    24,     0,     0,     0,     0,     0,   120,
     121,   122,   123,     0,   130,     0,     0,     0,     0,     0,
      83,    84,     0,     0,     0,     0,     0,    56,     0,    57,
       0,     0,     0,     0,    33,    34,    35,    12,     0,     0,
      17,    20,     0,     0,     0,     0,    95,     0,    94,    99,
      97,    98,   100,    96,     0,     0,     0,   118,   119,   127,
     128,   129,   136,     0,     0,   141,     0,   140,    48,    49,
      50,    51,    52,    53,    54,    55,    58,    59,    60,    61,
      63,    64,    65,    66,    68,    69,    70,    71,     0,    13,
       0,     0,    19,    21,     0,     0,    26,     0,    30,     0,
      92,    93,     0,   125,   126,   135,     0,   133,   137,   138,
     139,    73,    14,     0,     0,     0,     0,    23,    25,     0,
       0,    75,     0,   104,     0,   103,   108,   106,   107,   109,
     105,   124,   134,    16,     0,    11,    27,    28,     0,    74,
      77,     0,   101,   102,    18,    29,    76,    79,   113,     0,
     112,   115,   116,   117,   114,    78,     0,   110,   111,     4
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,    18,     8,    13,    22,    23,    33,
      80,   120,   172,   195,    36,    83,   124,   175,   176,   178,
     201,    28,    29,    64,    65,    66,    67,    68,    69,    70,
      71,   108,    72,   110,    73,   111,    74,   112,    75,   220,
     227,   236,    10,    15,    16,    44,    45,    46,   127,   128,
     129,   204,   205,   206,   229,   230,    47,    88,    89,    90,
      91,    92,    48,    49,    95,    50,    51,    97,   186,    99,
      52,   146,   147
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -170
static const yytype_int16 yypact[] =
{
      20,    24,    35,  -170,    37,     9,  -170,    -4,    62,    52,
      25,   116,    42,   117,    37,    48,  -170,    75,   128,  -170,
     125,   121,    15,  -170,    57,  -170,  -170,     6,   -45,  -170,
    -170,  -170,    54,   126,    61,  -170,   114,    37,   -61,    65,
      67,    70,    78,  -170,    41,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,    89,    93,    95,    97,    98,   -50,  -170,
    -170,  -170,    37,  -170,    -3,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,   145,    99,
     166,   162,   107,   103,   113,   108,   111,   112,   -35,  -170,
    -170,  -170,  -170,   148,  -170,   -11,   118,    78,   119,   123,
    -170,  -170,   185,   152,   154,   150,   153,  -170,   -43,  -170,
      49,   102,    30,   131,  -170,  -170,  -170,  -170,   199,   134,
     198,  -170,   192,   193,   188,    37,  -170,   110,  -170,  -170,
    -170,  -170,  -170,  -170,   139,   132,   133,  -170,  -170,  -170,
    -170,  -170,   141,   151,   149,  -170,   -48,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,   156,  -170,
     210,   147,   209,  -170,   155,   -23,  -170,    75,   202,   160,
    -170,  -170,   146,  -170,  -170,  -170,   158,  -170,  -170,  -170,
    -170,  -170,  -170,   215,   157,   226,   212,  -170,  -170,   -15,
      75,   208,    37,  -170,   124,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,   220,  -170,  -170,  -170,   -16,  -170,
     211,    56,  -170,  -170,  -170,  -170,  -170,   213,  -170,   -37,
    -170,  -170,  -170,  -170,  -170,  -170,   239,  -170,  -170,  -170
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -170,  -170,  -170,  -170,  -170,   -13,  -170,  -170,   224,  -170,
    -170,  -170,  -170,  -170,  -170,  -170,  -170,  -170,    73,  -170,
    -170,  -169,   -24,  -170,   187,  -170,  -170,  -170,  -170,  -170,
     -26,  -170,     7,  -170,   -31,  -170,  -170,  -170,  -170,  -170,
    -170,  -170,  -170,  -170,   234,  -170,   214,  -170,  -170,   127,
    -170,  -170,    51,  -170,  -170,    23,   -82,  -170,   165,  -170,
    -170,  -170,   -81,   -79,  -170,   -77,  -170,  -170,  -170,   159,
    -170,  -170,   115
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      43,    24,   130,   131,    77,   132,   174,   133,   199,    27,
     237,    38,    53,    39,   137,    40,   225,    27,    60,   217,
      43,    53,   153,     1,    84,    60,    21,   109,    85,     4,
      86,   218,    87,   189,   107,     6,   145,    41,    27,    27,
      34,   154,   140,    42,     7,   130,   131,     9,   132,   113,
     133,    76,   114,    54,    85,    55,    86,    56,    87,    57,
     126,    58,    54,    59,    55,    60,    56,    61,    57,    62,
      58,    12,    59,   141,    60,   197,    61,   155,    62,   159,
      11,   115,   100,    37,   158,   162,   166,    25,    14,    38,
      63,    39,    14,    40,    58,    27,    59,   207,   208,    37,
     209,   164,   210,   126,    38,    38,    39,    39,    40,    40,
      27,    27,   179,    58,   165,    41,   156,    60,   163,   167,
      17,    42,   207,   208,    19,   209,    20,   210,    21,    27,
      41,    41,    30,   157,    32,    31,    42,    42,    78,   231,
     232,    82,   233,    79,   234,    81,    96,   231,   232,    93,
     233,    94,   234,   180,   125,   203,    98,   125,    38,   117,
      39,    38,    40,    39,    27,    40,    58,    27,    59,   222,
     202,   160,    38,   102,    39,    77,    40,   103,    27,   104,
     203,   105,   106,   118,    41,   119,   161,    41,   121,   221,
      42,   122,   134,    42,    77,   135,   136,   228,    41,   139,
     123,   148,   142,   144,    42,   228,   202,   145,    38,   149,
      39,   151,    40,   150,    27,   168,   152,   169,   170,   171,
     173,   177,   174,   182,   183,   185,   187,   184,   188,   191,
     192,   193,   194,   200,    41,   212,   211,   213,   215,   196,
      42,   214,   216,   219,   224,   239,    35,   226,   198,    26,
     235,   116,   238,   138,   181,   223,   143,     0,   101,     0,
       0,   190
};

static const yytype_int16 yycheck[] =
{
      24,    14,    84,    84,    28,    84,    29,    84,   177,    54,
      47,    48,    15,    50,    49,    52,    32,    54,    68,    34,
      44,    15,    65,     3,    37,    68,    11,    58,    89,     5,
      91,   200,    93,    81,    84,     0,    84,    74,    54,    54,
      25,    84,    53,    80,     7,   127,   127,    38,   127,    62,
     127,    96,    55,    56,    89,    58,    91,    60,    93,    62,
      84,    64,    56,    66,    58,    68,    60,    70,    62,    72,
      64,     9,    66,    84,    68,    98,    70,   108,    72,   110,
      84,    84,    41,    42,   110,   111,   112,    39,    40,    48,
      84,    50,    40,    52,    64,    54,    66,   179,   179,    42,
     179,    71,   179,   127,    48,    48,    50,    50,    52,    52,
      54,    54,   125,    64,    84,    74,    67,    68,   111,   112,
      95,    80,   204,   204,     8,   204,    84,   204,    11,    54,
      74,    74,     4,    84,    13,    10,    80,    80,    84,   221,
     221,    27,   221,    17,   221,    84,    76,   229,   229,    84,
     229,    84,   229,    43,    44,   179,    78,    44,    48,    14,
      50,    48,    52,    50,    54,    52,    64,    54,    66,    45,
      46,    69,    48,    84,    50,   199,    52,    84,    54,    84,
     204,    84,    84,    84,    74,    19,    84,    74,    26,   202,
      80,    84,    84,    80,   218,    84,    84,   221,    74,    51,
      97,    16,    84,    84,    80,   229,    46,    84,    48,    57,
      50,    61,    52,    59,    54,    84,    63,    18,    84,    21,
      28,    33,    29,    84,    92,    84,    75,    94,    79,    73,
      20,    84,    23,    31,    74,    77,    90,    22,    12,    84,
      80,    84,    30,    35,    24,     6,    22,    36,   175,    15,
      37,    64,   229,    88,   127,   204,    97,    -1,    44,    -1,
      -1,   146
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   100,   101,     5,   102,     0,     7,   104,    38,
     141,    84,     9,   105,    40,   142,   143,    95,   103,     8,
      84,    11,   106,   107,   104,    39,   143,    54,   120,   121,
       4,    10,    13,   108,    25,   107,   113,    42,    48,    50,
      52,    74,    80,   121,   144,   145,   146,   155,   161,   162,
     164,   165,   169,    15,    56,    58,    60,    62,    64,    66,
      68,    70,    72,    84,   122,   123,   124,   125,   126,   127,
     128,   129,   131,   133,   135,   137,    96,   121,    84,    17,
     109,    84,    27,   114,   104,    89,    91,    93,   156,   157,
     158,   159,   160,    84,    84,   163,    76,   166,    78,   168,
      41,   145,    84,    84,    84,    84,    84,    84,   130,   133,
     132,   134,   136,   104,    55,    84,   123,    14,    84,    19,
     110,    26,    84,    97,   115,    44,   121,   147,   148,   149,
     155,   161,   162,   164,    84,    84,    84,    49,   157,    51,
      53,    84,    84,   168,    84,    84,   170,   171,    16,    57,
      59,    61,    63,    65,    84,   133,    67,    84,   129,   133,
      69,    84,   129,   131,    71,    84,   129,   131,    84,    18,
      84,    21,   111,    28,    29,   116,   117,    33,   118,   104,
      43,   148,    84,    92,    94,    84,   167,    75,    79,    81,
     171,    73,    20,    84,    23,   112,    84,    98,   117,   120,
      31,   119,    46,   121,   150,   151,   152,   155,   161,   162,
     164,    90,    77,    22,    84,    12,    30,    34,   120,    35,
     138,   104,    45,   151,    24,    32,    36,   139,   121,   153,
     154,   155,   161,   162,   164,    37,   140,    47,   154,     6
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 104 "gramatica.y"
    {showReport((yyvsp[(1) - (1)].report));return 0;}
    break;

  case 3:
#line 105 "gramatica.y"
    {(yyval.report)=consReport((yyvsp[(2) - (5)].front),(yyvsp[(3) - (5)].lchapter),(yyvsp[(4) - (5)].lparagraph));}
    break;

  case 4:
#line 108 "gramatica.y"
    {(yyval.front)=consFontMatter((yyvsp[(2) - (13)].str),(yyvsp[(3) - (13)].str),(yyvsp[(4) - (13)].lauthor),(yyvsp[(5) - (13)].str),(yyvsp[(6) - (13)].str),(yyvsp[(7) - (13)].words),(yyvsp[(8) - (13)].lparagraph),(yyvsp[(9) - (13)].lparagraph1),(yyvsp[(10) - (13)].str),(yyvsp[(11) - (13)].str),(yyvsp[(12) - (13)].str));}
    break;

  case 5:
#line 110 "gramatica.y"
    {(yyval.lparagraph)=(yyvsp[(2) - (3)].lparagraph);}
    break;

  case 6:
#line 112 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 7:
#line 114 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 8:
#line 115 "gramatica.y"
    {(yyval.str)=NULL;}
    break;

  case 9:
#line 117 "gramatica.y"
    {(yyval.lauthor)=consListAuthor((yyvsp[(1) - (2)].lauthor),(yyvsp[(2) - (2)].author));}
    break;

  case 10:
#line 118 "gramatica.y"
    {(yyval.lauthor)=consListAuthor(NULL,(yyvsp[(1) - (1)].author));}
    break;

  case 11:
#line 120 "gramatica.y"
    {(yyval.author)=consAuthor((yyvsp[(2) - (7)].str),(yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str));}
    break;

  case 12:
#line 122 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 13:
#line 124 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 14:
#line 126 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 15:
#line 127 "gramatica.y"
    {(yyval.str)="";}
    break;

  case 16:
#line 129 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 17:
#line 130 "gramatica.y"
    {(yyval.str)="";}
    break;

  case 18:
#line 132 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 19:
#line 133 "gramatica.y"
    {(yyval.str)="";}
    break;

  case 20:
#line 136 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 21:
#line 140 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 22:
#line 141 "gramatica.y"
    {(yyval.str)=NULL;}
    break;

  case 23:
#line 144 "gramatica.y"
    {(yyval.words)=(yyvsp[(2) - (3)].words);}
    break;

  case 24:
#line 145 "gramatica.y"
    {(yyval.words)=NULL;}
    break;

  case 25:
#line 148 "gramatica.y"
    {(yyval.words)=consListKey((yyvsp[(1) - (2)].words),(yyvsp[(2) - (2)].str));}
    break;

  case 26:
#line 149 "gramatica.y"
    {(yyval.words)=consListKey(NULL,(yyvsp[(1) - (1)].str));}
    break;

  case 27:
#line 153 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 28:
#line 156 "gramatica.y"
    {(yyval.lparagraph)=(yyvsp[(2) - (3)].lparagraph);}
    break;

  case 29:
#line 159 "gramatica.y"
    {(yyval.lparagraph1)=(yyvsp[(2) - (3)].lparagraph);}
    break;

  case 30:
#line 160 "gramatica.y"
    {(yyval.lparagraph1)=NULL;}
    break;

  case 31:
#line 162 "gramatica.y"
    {(yyval.lparagraph)=consListPara((yyvsp[(1) - (2)].lparagraph),(yyvsp[(2) - (2)].lconteudo));}
    break;

  case 32:
#line 163 "gramatica.y"
    {(yyval.lparagraph)=consListPara(NULL,(yyvsp[(1) - (1)].lconteudo));}
    break;

  case 33:
#line 166 "gramatica.y"
    {(yyval.lconteudo)=(yyvsp[(2) - (3)].lconteudo);}
    break;

  case 34:
#line 169 "gramatica.y"
    {(yyval.lconteudo)=consParaContentListTexto((yyvsp[(1) - (2)].lconteudo),(yyvsp[(2) - (2)].str));}
    break;

  case 35:
#line 170 "gramatica.y"
    {(yyval.lconteudo)=consParaContentListFreeElement((yyvsp[(1) - (2)].lconteudo),(yyvsp[(2) - (2)].conteudo));}
    break;

  case 36:
#line 171 "gramatica.y"
    {(yyval.lconteudo)=consParaContentListTexto(NULL,(yyvsp[(1) - (1)].str));}
    break;

  case 37:
#line 172 "gramatica.y"
    {(yyval.lconteudo)=consParaContentListFreeElement(NULL,(yyvsp[(1) - (1)].conteudo));}
    break;

  case 38:
#line 175 "gramatica.y"
    {(yyval.conteudo)=consFootNote((yyvsp[(1) - (1)].str));}
    break;

  case 39:
#line 176 "gramatica.y"
    {(yyval.conteudo)=consRef((yyvsp[(1) - (1)].str));}
    break;

  case 40:
#line 177 "gramatica.y"
    {(yyval.conteudo)=consXRef((yyvsp[(1) - (1)].str));}
    break;

  case 41:
#line 178 "gramatica.y"
    {(yyval.conteudo)=consCitref((yyvsp[(1) - (1)].str));}
    break;

  case 42:
#line 179 "gramatica.y"
    {(yyval.conteudo)=consIterm((yyvsp[(1) - (1)].str));}
    break;

  case 43:
#line 180 "gramatica.y"
    {(yyval.conteudo)=consBold((yyvsp[(1) - (1)].bold));}
    break;

  case 44:
#line 181 "gramatica.y"
    {(yyval.conteudo)=consItalic((yyvsp[(1) - (1)].litalic));}
    break;

  case 45:
#line 182 "gramatica.y"
    {(yyval.conteudo)=consUnderLine((yyvsp[(1) - (1)].lunderline));}
    break;

  case 46:
#line 183 "gramatica.y"
    {(yyval.conteudo)=consInLine((yyvsp[(1) - (1)].inLine));}
    break;

  case 47:
#line 184 "gramatica.y"
    {(yyval.conteudo)=consParaAcronym((yyvsp[(1) - (1)].acronym));}
    break;

  case 48:
#line 187 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 49:
#line 189 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 50:
#line 191 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 51:
#line 193 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 52:
#line 195 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 53:
#line 197 "gramatica.y"
    {(yyval.bold)=(yyvsp[(2) - (3)].bold);}
    break;

  case 54:
#line 199 "gramatica.y"
    {(yyval.bold)=consBoldListTexto((yyvsp[(1) - (2)].bold),(yyvsp[(2) - (2)].str));}
    break;

  case 55:
#line 200 "gramatica.y"
    {(yyval.bold)=consBoldListUnderline((yyvsp[(1) - (2)].bold),(yyvsp[(2) - (2)].lunderline));}
    break;

  case 56:
#line 201 "gramatica.y"
    {(yyval.bold)=consBoldListTexto(NULL,(yyvsp[(1) - (1)].str));}
    break;

  case 57:
#line 202 "gramatica.y"
    {(yyval.bold)=consBoldListUnderline(NULL,(yyvsp[(1) - (1)].lunderline));}
    break;

  case 58:
#line 204 "gramatica.y"
    {(yyval.litalic)=(yyvsp[(2) - (3)].litalic);}
    break;

  case 59:
#line 206 "gramatica.y"
    {(yyval.litalic)=consItalicTexto((yyvsp[(1) - (2)].litalic),(yyvsp[(2) - (2)].str));}
    break;

  case 60:
#line 207 "gramatica.y"
    {(yyval.litalic)=consItalicBold((yyvsp[(1) - (2)].litalic),(yyvsp[(2) - (2)].bold));}
    break;

  case 61:
#line 208 "gramatica.y"
    {(yyval.litalic)=consItalicUnderline((yyvsp[(1) - (2)].litalic),(yyvsp[(2) - (2)].lunderline));}
    break;

  case 62:
#line 209 "gramatica.y"
    {(yyval.litalic)=NULL;}
    break;

  case 63:
#line 211 "gramatica.y"
    {(yyval.lunderline)=(yyvsp[(2) - (3)].lunderline);}
    break;

  case 64:
#line 213 "gramatica.y"
    {(yyval.lunderline)=consUnderLineTexto((yyvsp[(1) - (2)].lunderline),(yyvsp[(2) - (2)].str));}
    break;

  case 65:
#line 214 "gramatica.y"
    {(yyval.lunderline)=consUnderLineBold((yyvsp[(1) - (2)].lunderline),(yyvsp[(2) - (2)].bold));}
    break;

  case 66:
#line 215 "gramatica.y"
    {(yyval.lunderline)=consUnderLineItalic((yyvsp[(1) - (2)].lunderline),(yyvsp[(2) - (2)].litalic));}
    break;

  case 67:
#line 216 "gramatica.y"
    {(yyval.lunderline)=NULL;}
    break;

  case 68:
#line 218 "gramatica.y"
    {(yyval.inLine)=(yyvsp[(2) - (3)].inLine);}
    break;

  case 69:
#line 220 "gramatica.y"
    {(yyval.inLine)=consInlineTexto((yyvsp[(1) - (2)].inLine),(yyvsp[(2) - (2)].str));}
    break;

  case 70:
#line 221 "gramatica.y"
    {(yyval.inLine)=consInlineBold((yyvsp[(1) - (2)].inLine),(yyvsp[(2) - (2)].bold));}
    break;

  case 71:
#line 222 "gramatica.y"
    {(yyval.inLine)=consInlineItalic((yyvsp[(1) - (2)].inLine),(yyvsp[(2) - (2)].litalic));}
    break;

  case 72:
#line 223 "gramatica.y"
    {(yyval.inLine)=NULL;}
    break;

  case 73:
#line 225 "gramatica.y"
    {(yyval.acronym)=consAcronym((yyvsp[(2) - (4)].str) ,(yyvsp[(3) - (4)].str));}
    break;

  case 74:
#line 228 "gramatica.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 75:
#line 229 "gramatica.y"
    {(yyval.str)=NULL;}
    break;

  case 76:
#line 231 "gramatica.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 77:
#line 232 "gramatica.y"
    {(yyval.str)=NULL;}
    break;

  case 78:
#line 234 "gramatica.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 79:
#line 235 "gramatica.y"
    {(yyval.str)=NULL;}
    break;

  case 80:
#line 238 "gramatica.y"
    {(yyval.lchapter)=(yyvsp[(2) - (3)].lchapter);}
    break;

  case 81:
#line 241 "gramatica.y"
    {(yyval.lchapter)=consChapterList((yyvsp[(1) - (2)].lchapter),(yyvsp[(2) - (2)].chapter));}
    break;

  case 82:
#line 242 "gramatica.y"
    {(yyval.lchapter)=consChapterList(NULL,(yyvsp[(1) - (1)].chapter));}
    break;

  case 83:
#line 245 "gramatica.y"
    {(yyval.chapter)=consCapitulo((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].Cchapter));}
    break;

  case 84:
#line 248 "gramatica.y"
    {(yyval.Cchapter)=consChapterConteudo((yyvsp[(1) - (2)].Cchapter),(yyvsp[(2) - (2)].chapterConteudo));}
    break;

  case 85:
#line 249 "gramatica.y"
    {(yyval.Cchapter)=consChapterConteudo(NULL,(yyvsp[(1) - (1)].chapterConteudo));}
    break;

  case 86:
#line 253 "gramatica.y"
    {(yyval.chapterConteudo)=consChapterParagraph((yyvsp[(1) - (1)].lconteudo));}
    break;

  case 87:
#line 254 "gramatica.y"
    {(yyval.chapterConteudo)=consChapterFloat((yyvsp[(1) - (1)].foat));}
    break;

  case 88:
#line 255 "gramatica.y"
    {(yyval.chapterConteudo)=consChapterItem((yyvsp[(1) - (1)].list));}
    break;

  case 89:
#line 256 "gramatica.y"
    {(yyval.chapterConteudo)=consChapterCodeBlock((yyvsp[(1) - (1)].codeblock));}
    break;

  case 90:
#line 257 "gramatica.y"
    {(yyval.chapterConteudo)=consChapterSection((yyvsp[(1) - (1)].section));}
    break;

  case 91:
#line 258 "gramatica.y"
    {(yyval.chapterConteudo)=consChapterSummary((yyvsp[(1) - (1)].lsumary));}
    break;

  case 92:
#line 261 "gramatica.y"
    {(yyval.section)=consSection((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].lsection));}
    break;

  case 93:
#line 263 "gramatica.y"
    {(yyval.lsection)=consSectionConteudo((yyvsp[(1) - (2)].lsection),(yyvsp[(2) - (2)].sectionConteudo));}
    break;

  case 94:
#line 264 "gramatica.y"
    {(yyval.lsection)=consSectionConteudo(NULL,(yyvsp[(1) - (1)].sectionConteudo));}
    break;

  case 95:
#line 267 "gramatica.y"
    {(yyval.sectionConteudo)=consSectionParagraph((yyvsp[(1) - (1)].lconteudo));}
    break;

  case 96:
#line 268 "gramatica.y"
    {(yyval.sectionConteudo)=consSectionFloat((yyvsp[(1) - (1)].foat));}
    break;

  case 97:
#line 269 "gramatica.y"
    {(yyval.sectionConteudo)=consSectionItem((yyvsp[(1) - (1)].list));}
    break;

  case 98:
#line 270 "gramatica.y"
    {(yyval.sectionConteudo)=consSectionCodeBlock((yyvsp[(1) - (1)].codeblock));}
    break;

  case 99:
#line 271 "gramatica.y"
    {(yyval.sectionConteudo)=consSectionSubSection((yyvsp[(1) - (1)].subSection));}
    break;

  case 100:
#line 272 "gramatica.y"
    {(yyval.sectionConteudo)=consSectionSummary((yyvsp[(1) - (1)].lsumary));}
    break;

  case 101:
#line 274 "gramatica.y"
    {(yyval.subSection)=consSubSection((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].LSubSection));}
    break;

  case 102:
#line 277 "gramatica.y"
    {(yyval.LSubSection)=consSubSectionConteudo((yyvsp[(1) - (2)].LSubSection),(yyvsp[(2) - (2)].subsectionConteudo));}
    break;

  case 103:
#line 278 "gramatica.y"
    {(yyval.LSubSection)=consSubSectionConteudo(NULL,(yyvsp[(1) - (1)].subsectionConteudo));}
    break;

  case 104:
#line 281 "gramatica.y"
    {(yyval.subsectionConteudo)=consSubSectionParagraph((yyvsp[(1) - (1)].lconteudo));}
    break;

  case 105:
#line 282 "gramatica.y"
    {(yyval.subsectionConteudo)=consSubSectionFloat((yyvsp[(1) - (1)].foat));}
    break;

  case 106:
#line 283 "gramatica.y"
    {(yyval.subsectionConteudo)=consSubSectionItem((yyvsp[(1) - (1)].list));}
    break;

  case 107:
#line 284 "gramatica.y"
    {(yyval.subsectionConteudo)=consSubSectionCodeBlock((yyvsp[(1) - (1)].codeblock));}
    break;

  case 108:
#line 285 "gramatica.y"
    {(yyval.subsectionConteudo)=consSubSectionSubSubSection((yyvsp[(1) - (1)].subSubSection));}
    break;

  case 109:
#line 286 "gramatica.y"
    {(yyval.subsectionConteudo)=consSubSectionSummary((yyvsp[(1) - (1)].lsumary));}
    break;

  case 110:
#line 289 "gramatica.y"
    {(yyval.subSubSection)=consSubSubSection((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].lsubSubSection));}
    break;

  case 111:
#line 291 "gramatica.y"
    {(yyval.lsubSubSection)=consSubSubSectionConteudo((yyvsp[(1) - (2)].lsubSubSection),(yyvsp[(2) - (2)].subSubSectionConteudo));}
    break;

  case 112:
#line 292 "gramatica.y"
    {(yyval.lsubSubSection)=consSubSubSectionConteudo(NULL,(yyvsp[(1) - (1)].subSubSectionConteudo));}
    break;

  case 113:
#line 295 "gramatica.y"
    {(yyval.subSubSectionConteudo)=consSubSubSectionParagraph((yyvsp[(1) - (1)].lconteudo));}
    break;

  case 114:
#line 296 "gramatica.y"
    {(yyval.subSubSectionConteudo)=consSubSubSectionFloat((yyvsp[(1) - (1)].foat));}
    break;

  case 115:
#line 297 "gramatica.y"
    {(yyval.subSubSectionConteudo)=consSubSubSectionItem((yyvsp[(1) - (1)].list));}
    break;

  case 116:
#line 298 "gramatica.y"
    {(yyval.subSubSectionConteudo)=consSubSubSectionCodeBlock((yyvsp[(1) - (1)].codeblock));}
    break;

  case 117:
#line 299 "gramatica.y"
    {(yyval.subSubSectionConteudo)=consSubSubSectionSummary((yyvsp[(1) - (1)].lsumary));}
    break;

  case 118:
#line 302 "gramatica.y"
    {(yyval.list)=(yyvsp[(2) - (3)].list);}
    break;

  case 119:
#line 304 "gramatica.y"
    {(yyval.list)=consElemListConteudo((yyvsp[(1) - (2)].list),(yyvsp[(2) - (2)].listConteudo));}
    break;

  case 120:
#line 305 "gramatica.y"
    {(yyval.list)=consElemListConteudo(NULL,(yyvsp[(1) - (1)].listConteudo));}
    break;

  case 121:
#line 307 "gramatica.y"
    {(yyval.listConteudo)=consElemsDesc((yyvsp[(1) - (1)].desc));}
    break;

  case 122:
#line 308 "gramatica.y"
    {(yyval.listConteudo)=consElemsItem((yyvsp[(1) - (1)].item));}
    break;

  case 123:
#line 309 "gramatica.y"
    {(yyval.listConteudo)=consElemsNum((yyvsp[(1) - (1)].num));}
    break;

  case 124:
#line 311 "gramatica.y"
    {consDesc((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str));}
    break;

  case 125:
#line 313 "gramatica.y"
    {(yyval.item)=consItem((yyvsp[(2) - (3)].str));}
    break;

  case 126:
#line 315 "gramatica.y"
    {(yyval.num)=consNum((yyvsp[(2) - (3)].str));}
    break;

  case 127:
#line 317 "gramatica.y"
    {(yyval.codeblock)=consCodeBlock((yyvsp[(2) - (3)].str));}
    break;

  case 128:
#line 319 "gramatica.y"
    {(yyval.lsumary)=(yyvsp[(2) - (3)].lsumary);}
    break;

  case 129:
#line 321 "gramatica.y"
    {(yyval.lsumary)=consSummary((yyvsp[(1) - (2)].lsumary),(yyvsp[(2) - (2)].str));}
    break;

  case 130:
#line 322 "gramatica.y"
    {(yyval.lsumary)=consSummary(NULL,(yyvsp[(1) - (1)].str));}
    break;

  case 131:
#line 325 "gramatica.y"
    {(yyval.foat)=consFloatFigure((yyvsp[(1) - (1)].figure));}
    break;

  case 132:
#line 326 "gramatica.y"
    {(yyval.foat)=consFloatTable((yyvsp[(1) - (1)].table));}
    break;

  case 133:
#line 328 "gramatica.y"
    {(yyval.figure)=consFigure((yyvsp[(2) - (4)].graphic),(yyvsp[(3) - (4)].str));}
    break;

  case 134:
#line 330 "gramatica.y"
    {(yyval.graphic)=consGraphic((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str));}
    break;

  case 135:
#line 332 "gramatica.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;

  case 136:
#line 333 "gramatica.y"
    {(yyval.str)="";}
    break;

  case 137:
#line 335 "gramatica.y"
    {(yyval.str)=(yyvsp[(2) - (3)].str);}
    break;

  case 138:
#line 338 "gramatica.y"
    {(yyval.table)=consTable((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].ltrow));}
    break;

  case 139:
#line 340 "gramatica.y"
    {(yyval.ltrow)=consTrowList((yyvsp[(1) - (2)].ltrow),(yyvsp[(2) - (2)].str));}
    break;

  case 140:
#line 341 "gramatica.y"
    {(yyval.ltrow)=consTrowList(NULL,(yyvsp[(1) - (1)].str));}
    break;

  case 141:
#line 343 "gramatica.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);}
    break;


/* Line 1267 of yacc.c.  */
#line 2511 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 346 "gramatica.y"


int main(int argc ,char *argv[])
{
    yyparse();
    return 0;
}

int yyerror(){
	fprintf(stderr,"ERRO em \"%s\"--- %d\n",yytext,yylineno);
	return 0;
}


