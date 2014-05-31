 %{
  #include <stdio.h>
  #include <stdlib.h>
  #include "report2007.h"
  extern int yylineno;
  int yyerror();
  extern char* yytext;
  int yylex();
%}
%union{
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
Trow trow;
}

%token BREPORT EREPORT BFM EFM BTITLE ETITLE BSUBTITLE ESUBTITLE BAUTHOR EAUTHOR BNAME ENAME BFOOT EFOOT
%token BIDENT EINDENT BMAIL EMAIL BURL EURL BAFF EAFF BDATE EDATE BINST EINST BKEY EKEY BAKN EAKN
%token BABS EABS TOC LOF LOT BBODY EBODY BCHAP ECHAP BSEC ESEC BSUBSEC ESUBSEC BSUBSUBSECTION ESUBSUBSECTION
%token BLIST ELIST BCODE ECODE BSUM ESUM BPARA EPARA BREF EREF BXREF EXREF BCIT ECIT BITERM EITERM BBLOD EBOLD
%token BITALIC EITALIC BUNDERLINE EUNDERLINE BINLINE EINLINE BACRONYM EACRONYM BFIG EFIG BGRAPH EGRAPH BCAPTION ECAPTION
%token BTABLE ETABLE BBACK EBACK TEXTO  TARGET INT Caminho texto BDESC EDESC BITEM EITEM BNUM ENUM BBM EBM BKEYS EKEYS BCELL ECELL BROW EROW
%type <report> Report
%type <front>FrontMatter
%type <lauthor>  Authors
%type <author> Author
%type <str> Institution TEXTO Title SubTitle Name Nident Email Url Affiliation Date Footnote Caminho Ref Xref Citref Iterm TOC LOT LOF Toc Lot Lof TARGET Format Caption texto
%type <words> Keys LKeys
%type <str> Keywords
%type <conteudo> FreeElement
%type <lparagraph> ParaList Abstract BackMatter
%type <lparagraph1>Aknowledgements
%type <lconteudo> Paragraph
%type <lconteudo> ParaContent
%type <bold> BContent Bold
%type <litalic> IContent Italic
%type <lunderline> UContent UnderLine
%type <inLine> InlineCode INContent
%type <acronym> Acronym
%type <lchapter> Body ChapterList
%type <chapter> Chapter
%type <Cchapter> ElemList
%type <chapterConteudo> Elem
%type <section>Section
%type <lsection> ElemListSec
%type <sectionConteudo>ElemSec
%type <subSection>SubSection
%type <LSubSection>ElemListSubSec
%type <subsectionConteudo>ElemSubSec
%type <subSubSection>SubSubSection
%type <lsubSubSection>ElemListSubSubSec
%type <subSubSectionConteudo>ElemSubSubSec
%type <list>ElemLists List
%type <listConteudo>Elems
%type <desc>Desc
%type <item>Item
%type <num>Num
%type <codeblock>CodeBlock
%type <lsumary>Summary ElemSum
%type <foat>Float
%type <figure>Figure
%type <graphic>Graphic
%type <table>Table
%type <ltrow>TrowList
%type <trow>TRow Row
%start Final
%%

Final : Report {showReport($1);return 0;}
Report : BREPORT FrontMatter Body BackMatter EREPORT {$$=consReport($2,$3,$4);}
        ;

FrontMatter:BFM Title SubTitle Authors Date Institution LKeys Abstract Aknowledgements Toc Lof Lot EFM {$$=consFontMatter($2,$3,$4,$5,$6,$7,$8,$9,$10,$11,$12);}

BackMatter :BBM ParaList EBM {$$=$2;}
            ;
Title :BTITLE TEXTO ETITLE {$$=$2;}
      ;
SubTitle : BSUBTITLE TEXTO ESUBTITLE {$$=$2;};
         | {$$=NULL;}
         ;
Authors: Authors Author {$$=consListAuthor($1,$2);};
| Author {$$=consListAuthor(NULL,$1);};
        ;
Author: BAUTHOR Name Nident Email Url Affiliation  EAUTHOR {$$=consAuthor($2,$3,$4,$5,$6);};
;
Name: BNAME TEXTO ENAME {$$=$2;};
;
Nident: BIDENT TEXTO EINDENT {$$=$2;};
;
Email: BMAIL TEXTO EMAIL {$$=$2;};
|{$$="";};
;
Url: BURL TEXTO EURL {$$=$2;};
|{$$="";};
;
Affiliation: BAFF TEXTO	EAFF {$$=$2;};
|{$$="";};
;

Date : BDATE TEXTO EDATE {$$=$2;};
;


Institution:BINST TEXTO EINST {$$=$2;};
| {$$=NULL;}
;

LKeys: BKEYS Keys EKEYS {$$=$2;}
    | {$$=NULL;}
    ;

Keys : Keys Keywords {$$=consListKey($1,$2);}
     | Keywords {$$=consListKey(NULL,$1);}

     ;

Keywords: BKEY TEXTO EKEY {$$=$2;};
        ;

Abstract: BABS ParaList EABS {$$=$2;};
        ;

Aknowledgements: BAKN ParaList EAKN {$$=$2;};
|{$$=NULL;}

ParaList: ParaList Paragraph {$$=consListPara($1,$2);}
        | Paragraph {$$=consListPara(NULL,$1);}
        ;

Paragraph :BPARA ParaContent EPARA {$$=$2;};
;

ParaContent : ParaContent TEXTO {$$=consParaContentListTexto($1,$2);}
            | ParaContent FreeElement {$$=consParaContentListFreeElement($1,$2);}
            | TEXTO {$$=consParaContentListTexto(NULL,$1);}
            | FreeElement{$$=consParaContentListFreeElement(NULL,$1);}
            ;

FreeElement : Footnote {$$=consFootNote($1);}
| Ref {$$=consRef($1);}
| Xref {$$=consXRef($1);}
| Citref {$$=consCitref($1);}
| Iterm {$$=consIterm($1);}
| Bold {$$=consBold($1);}
| Italic {$$=consItalic($1);}
| UnderLine {$$=consUnderLine($1);}
| InlineCode {$$=consInLine($1);}
| Acronym {$$=consParaAcronym($1);}
;

Footnote : BFOOT TEXTO EFOOT {$$=$2;}
;
Ref: BREF TEXTO EREF {$$=$2;}
;
Xref: BXREF TEXTO EXREF {$$=$2;}
;
Citref : BCIT TEXTO ECIT {$$=$2;}
;
Iterm : BITERM TEXTO EITERM {$$=$2;}
;
Bold : BBLOD BContent EBOLD {$$=$2;}
;
BContent : BContent TEXTO {$$=consBoldListTexto($1,$2);}
| BContent	UnderLine {$$=consBoldListUnderline($1,$2);}
| TEXTO {$$=consBoldListTexto(NULL,$1);}
| UnderLine {$$=consBoldListUnderline(NULL,$1);}
;
Italic : BITALIC IContent EITALIC {$$=$2;}
;
IContent : IContent TEXTO {$$=consItalicTexto($1,$2);}
| IContent Bold {$$=consItalicBold($1,$2);}
| IContent UnderLine {$$=consItalicUnderline($1,$2);}
|{$$=NULL;}
;
UnderLine : BUNDERLINE UContent EUNDERLINE {$$=$2;}
;
UContent : UContent TEXTO {$$=consUnderLineTexto($1,$2);}
| UContent Bold {$$=consUnderLineBold($1,$2);}
| UContent Italic {$$=consUnderLineItalic($1,$2);}
|{$$=NULL;}
;
InlineCode : BINLINE INContent EINLINE {$$=$2;}
;
INContent : INContent TEXTO {$$=consInlineTexto($1,$2);}
| INContent Bold {$$=consInlineBold($1,$2);}
| INContent Italic {$$=consInlineItalic($1,$2);}
|{$$=NULL;}
;
Acronym : BACRONYM Title TEXTO EACRONYM {$$=consAcronym($2 ,$3);}
;

Toc: TOC {$$=$1;}
| {$$=NULL;}
    ;
Lof :LOF {$$=$1;}
|{$$=NULL;}
;
Lot : LOT {$$=$1;}
|{$$=NULL;}
    ;

Body: BBODY ChapterList EBODY {$$=$2;}
    ;

ChapterList: ChapterList Chapter {$$=consChapterList($1,$2);}
          | Chapter {$$=consChapterList(NULL,$1);}
          ;

Chapter: BCHAP Title ElemList ECHAP {$$=consCapitulo($2,$3);};
        ;

ElemList: ElemList Elem {$$=consChapterConteudo($1,$2);}
        | Elem {$$=consChapterConteudo(NULL,$1);}
        ;


Elem : Paragraph {$$=consChapterParagraph($1);}
| Float {$$=consChapterFloat($1);}
| List {$$=consChapterItem($1);};
| CodeBlock {$$=consChapterCodeBlock($1);};
| Section {$$=consChapterSection($1);}
| Summary {$$=consChapterSummary($1);};
;

Section: BSEC Title ElemListSec ESEC {$$=consSection($2,$3);};
;
ElemListSec: ElemListSec ElemSec {$$=consSectionConteudo($1,$2);}
| ElemSec {$$=consSectionConteudo(NULL,$1);}
;

ElemSec: Paragraph {$$=consSectionParagraph($1);};
| Float {$$=consSectionFloat($1);};
| List {$$=consSectionItem($1);};
| CodeBlock {$$=consSectionCodeBlock($1);}
| SubSection {$$=consSectionSubSection($1);}
| Summary {$$=consSectionSummary($1);};
;
SubSection : BSUBSEC Title ElemListSubSec ESUBSEC {$$=consSubSection($2,$3);};
;

ElemListSubSec : ElemListSubSec ElemSubSec {$$=consSubSectionConteudo($1,$2);}
| ElemSubSec {$$=consSubSectionConteudo(NULL,$1);}
;

ElemSubSec : Paragraph {$$=consSubSectionParagraph($1);};
| Float {$$=consSubSectionFloat($1);};
| List {$$=consSubSectionItem($1);};
| CodeBlock {$$=consSubSectionCodeBlock($1);};
| SubSubSection {$$=consSubSectionSubSubSection($1);};
| Summary {$$=consSubSectionSummary($1);};
;

SubSubSection : BSUBSUBSECTION Title ElemListSubSubSec ESUBSUBSECTION {$$=consSubSubSection($2,$3);};
;
ElemListSubSubSec : ElemListSubSubSec ElemSubSubSec {$$=consSubSubSectionConteudo($1,$2);}
| ElemSubSubSec {$$=consSubSubSectionConteudo(NULL,$1);}
;

ElemSubSubSec : Paragraph {$$=consSubSubSectionParagraph($1);};
| Float {$$=consSubSubSectionFloat($1);};
| List {$$=consSubSubSectionItem($1);};
| CodeBlock {$$=consSubSubSectionCodeBlock($1);};
| Summary {$$=consSubSubSectionSummary($1);};
;

List : BLIST ElemLists ELIST {$$=$2;};
;
ElemLists : ElemLists Elems {$$=consElemListConteudo($1,$2);}
| Elems {$$=consElemListConteudo(NULL,$1);}
;
Elems : Desc {$$=consElemsDesc($1);};
| Item {$$=consElemsItem($1);}
| Num {$$=consElemsNum($1);}
;
Desc : BDESC TEXTO TEXTO EDESC {consDesc($2,$3);};
;
Item : BITEM TEXTO EITEM {$$=consItem($2);};
;
Num : BNUM TEXTO ENUM {$$=consNum($2);};
;
CodeBlock : BCODE TEXTO ECODE {$$=consCodeBlock($2);};
;
Summary : BSUM ElemSum ESUM {$$=$2;}
;
ElemSum : ElemSum TEXTO {$$=consSummary($1,$2);}
| TEXTO {$$=consSummary(NULL,$1);}
;

Float:Figure {$$=consFloatFigure($1);}
| Table {$$=consFloatTable($1);}
;
Figure : BFIG Graphic Caption EFIG {$$=consFigure($2,$3);}
;
Graphic : BGRAPH TEXTO Format EGRAPH {$$=consGraphic($2,$3);}
;
Format : TEXTO {$$=$1;}
| {$$="";}
;
Caption	: BCAPTION TEXTO ECAPTION {$$=$2;}
;

Table : BTABLE Caption TrowList ETABLE {$$=consTable($2,$3);}
;
TrowList :TrowList Row {$$=consTrowList($1,$2);}
| Row {$$=consTrowList(NULL,$1);}
;
Row :BROW TRow EROW {$$=$2;}
;
TRow: BCELL TEXTO ECELL {$$=consTRowList(NULL,$2);}
| TRow BCELL TEXTO ECELL {$$=consTRowList($1,$3);}
;
%%

int main(int argc ,char *argv[])
{
    yyparse();
    return 0;
}

int yyerror(){
	fprintf(stderr,"ERRO em \"%s\"--- %d\n",yytext,yylineno);
	return 0;
}

