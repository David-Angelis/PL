/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 288 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

