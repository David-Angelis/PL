#ifndef _REPORT
#define _REPORT
#define TEXT 1001
#define FOOT 1002
#define REF 1003
#define XREF 1004
#define CITREF 1005
#define ACRONYM 1006
#define ITALIC 1007
#define UNDERLINE 1008
#define INLINE 1009
#define BOLD 1010
#define ITERM 1011
#define PARA 1012
#define FLOAT 1013
#define ITEM 1014
#define SECTION 1015
#define SUMMARY 1016
#define CODE 1017
#define SUBSECTION 1018
#define SUBSUBSECTION 1019
#define DESC 1020
#define NUM 1022
#define TABLE 1023
typedef struct SUnderline *LUnderline;
typedef struct SInline *LInline;
typedef struct sItalic *Italic;
typedef  struct sCodeBlock *CodeBlock;
typedef struct sFloat *Float;
typedef struct  sList *ListConteudo;
typedef struct sSection *Section;
typedef struct sSumary *LSumary;


typedef struct SAcronym{
    char *title;
    char *text;
}*Acronym,Sacronym;

typedef struct SBold{
    int tipo;
    union
    {
        char *text;
        Italic italic;
        LUnderline underline;
    }BContent;
    struct SBold *seg;
}*Bold,BoldNode;

struct sItalic{
    int tipo;
    union
    {
        char * text;
        Bold bold;
        LUnderline underline;
    }IContent;
    struct sItalic *seg;
}ItalicNodo;

typedef struct SPConteudo{
    int tipo;
    union
    {
        char *normal;
        char *footnote;
        char *ref;
        char* xref;
        char* citref;
        char* iterm;
        Bold bold;
        Italic italic;
        LUnderline underline;
        Acronym acronym;
        LInline Inline;
    }PContent;
}*PConteudo,SPConteudoNode;


typedef struct SListaConteudo{
    PConteudo conteudo;
    struct SListaConteudo *seg;
}*ListaConteudo,ConteudoNode;

typedef struct  SLParagraph{
    ListaConteudo conteudo;
    struct SLParagraph *seg;
}*ListaParagraph,ParagraphNode;


typedef struct sTrow{
    char *text;
    struct sTrow *seg;
}*Trow,STrow;

typedef struct sLTrow{
    Trow trow;
    struct sLTrow *seg;
    
}*LTrow,TrowNodo;


typedef struct  sTable{
    char *caption;
    LTrow trow;
}*Table,STable;

struct sCodeBlock{
    char *text;
}SCode;

typedef struct sGraphic{
    char *caminho;
    char *format;
}*Graphic,SGraphic;

typedef struct sFigure{
    Graphic graphic;
    char *text;
}*Figure,SFigure;

struct sFloat{
    int tipo;
    union{
        Figure figure;
        Table table;
    }Conteudo;
}SFloat;
typedef struct sDesc{
    char * desc1;
    char* desc2;
}*Desc,SDesc;

typedef struct sItem{
    char *item;
}*Item,SItem;

typedef struct sNum{
    char *num;
}*Num,SNum;

struct sList{
    int tipo;
    union{
        Desc desc;
        Item item;
        Num num;
    }Conteudo;
}ListNodo;

typedef struct sItemList{
    ListConteudo items;
    struct sItemList *seg;
}*ItemList,ItemNodo;


struct sSumary{
    char * text;
    struct sSumary *seg;
}SumaryNodo;

typedef struct SSubSubsectionConteudo{
    int tipo;
    union{
        ListaConteudo paragraph;
        Float foat;
        ItemList list;
        CodeBlock codeBlock;
        LSumary sumary;
        
    }SbSbConteudo;
}*SubSubSectionConteudo,SubSubSectionConteudoNodo;

typedef struct  sLSubSubSection{
    SubSubSectionConteudo conteudo;
    struct sLSubSubSection *seg;
}*LSubSubSection,subsubnodo;

typedef struct  SubSubSection{
    char *titulo;
    LSubSubSection conteudo;
}*SubSubSection,SubSubNodo;


typedef struct SLsubSection{
    SubSubSectionConteudo conteudo;
    struct SLsubSection *seg;
}LSubSection,SubSectionNode;


typedef struct SSubsectionConteudo{
    int tipo;
    union{
        ListaConteudo paragraph;
        Float foat;
        ItemList list;
        CodeBlock codeBlock;
        SubSubSection LSubSubSection;
        LSumary sumary;
        
    }SbConteudo;
}*SubSectionConteudo,SNode;



typedef struct SLSubSection{
    SubSectionConteudo conteudo;
    struct SLSubSection *seg;
}*LSubSectionC,LSubSectionNodo;

typedef struct sSubSection{
    char * titulo;
    LSubSectionC conteudo;
}*SubSection,sSubSection;

typedef struct sSectionConteudo{
    int tipo;
    union{
        ListaConteudo paragraph;
        Float foat;
        ItemList list;
        CodeBlock codeBlock;
        SubSection subsection;
        LSumary sumary;
        
    }SConteudo;
}*SectionConteudo,SectionNode;

typedef struct SLSection{
    SectionConteudo conteudo;
    struct SLSection *seg;
}*LSection,LSecNodo;

struct sSection{
    char *titulo;
    LSection conteudo;
}sSection;




typedef struct sChapterConteudo{
    int tipo;
    union{
        ListaConteudo paragraph;
        Float foat;
        ItemList list;
        CodeBlock codeBlock;
        Section section;
        LSumary sumary;
    }ChapConteudo;
}*ChapterConteudo,ChapterConteudoNodo;

typedef struct SLCapitulo{
    ChapterConteudo conteudo;
    struct SLCapitulo *seg;
}*LChapter,Schapter;

typedef struct SCapitulo{
    char *title;
    LChapter capitulo;
}*Capitulo,Scapitulo;


typedef struct sLChapter{
    Capitulo capitulo;
    struct sLChapter *seg;
}*ListChapter,ChapterNodo;




struct SUnderline
{
    int tipo;
    union
    {
        char * text;
        Bold bold;
        Italic italic;
    }UContent;
    struct SUnderline *seg;
}UnderlineNode;

struct SInline
{
    int tipo;
    union
    {
        char * text;
        Bold bold;
        Italic italic;
    }UContent;
    struct SInline *seg;
}InlineNode;



typedef struct sAuthor
  {
  	char *Nome;
  	char *Nident;
  	char *Email;
    char *Url;
  	char *Affiliation;
  }*Author,SAuthor;
typedef struct SListAuthor
{
    Author author;
    struct SListAuthor *seg;
}*ListAuthor,AuthorNodo;

typedef struct sKey
 {
	char * Key;

 }Key,SKey;


typedef struct sListKey
{
	Key key;
	struct sListKey *seg;
}*KeyWords,Wordsnode;

typedef struct sFrontMatter
{
    
	char *title;
	char *SubTitle;
	char *Date;
	char *Institution;
    ListAuthor lauthor;
    ListaParagraph abstract;
    ListaParagraph aknowledgement;
    KeyWords words;
    char *toc;
    char *lof;
    char *lot;
}*Front, SFront;

typedef struct sReport{
    Front front;
    ListChapter listchapter;
    ListaParagraph final;
    
}*Report,SReport;

Report consReport(Front a, ListChapter b,ListaParagraph g);
Table consTable(char *caption,LTrow trow);
LTrow consTrowList(LTrow l,Trow a);
Trow consTRowList(Trow l,char * text);
Float consFloatFigure(Figure a);
Float consFloatTable(Table a);
Figure consFigure(Graphic a,char *caption);
Graphic consGraphic(char*p,char*format);
LSumary consSummary(LSumary l, char * text);
CodeBlock consCodeBlock(char *txt);
Num consNum(char * txt);
Item consItem(char * txt);
Desc consDesc(char * desc1,char * desc2);
ListConteudo consElemsNum(Num a);
ListConteudo consElemsItem(Item a);
ListConteudo consElemsDesc(Desc a);
ItemList consElemListConteudo(ItemList l,ListConteudo a);
SubSubSectionConteudo consSubSubSectionSummary(LSumary a);
SubSubSectionConteudo consSubSubSectionCodeBlock(CodeBlock a);
SubSubSectionConteudo consSubSubSectionItem(ItemList a);
SubSubSectionConteudo consSubSubSectionFloat(Float a);
SubSubSectionConteudo consSubSubSectionParagraph(ListaConteudo a);
LSubSubSection consSubSubSectionConteudo(LSubSubSection l,SubSubSectionConteudo a);
SubSubSection consSubSubSection(char * titulo,LSubSubSection a);
SubSectionConteudo consSubSectionSummary(LSumary a);
SubSectionConteudo consSubSectionSubSubSection(SubSubSection a);
SubSectionConteudo consSubSectionCodeBlock(CodeBlock a);
SubSectionConteudo consSubSectionItem(ItemList a);
SubSectionConteudo consSubSectionFloat(Float a);
LSection consSectionConteudo(LSection l,SectionConteudo a);
SubSectionConteudo consSubSectionParagraph(ListaConteudo a);
LSubSectionC consSubSectionConteudo(LSubSectionC l,SubSectionConteudo a);
SubSection consSubSection (char *titulo,LSubSectionC a);
SectionConteudo consSectionSummary(LSumary a);
SectionConteudo consSectionSubSection(SubSection a);
SectionConteudo consSectionCodeBlock(CodeBlock a);
SectionConteudo consSectionItem(ItemList a);
SectionConteudo consSectionFloat(Float a);
SectionConteudo consSectionParagraph(ListaConteudo a);
Section consSection(char * a,LSection b);
ChapterConteudo consChapterSummary(LSumary a);
ChapterConteudo consChapterSection(Section a);
ChapterConteudo consChapterCodeBlock(CodeBlock a);
ChapterConteudo consChapterItem(ItemList a);
ChapterConteudo consChapterFloat(Float a);
ChapterConteudo consChapterParagraph(ListaConteudo a);
LChapter consChapterConteudo(LChapter l,ChapterConteudo a);
Capitulo consCapitulo(char * title,LChapter a);
ListChapter consChapterList(ListChapter l, Capitulo a );
ListaParagraph reversePara (ListaParagraph l);
ListAuthor reverse (ListAuthor l);
ListaParagraph consListPara(ListaParagraph l,ListaConteudo lc);
PConteudo consUnderLine(LUnderline um);
PConteudo consRef(char *ref);
PConteudo consItalic(Italic it);
PConteudo consBold(Bold bl);
PConteudo consIterm(char *ref);
LUnderline consUnderLineBold(LUnderline l,Bold bl);
LUnderline consUnderLineTexto(LUnderline l,char *a);
LUnderline consUnderLineItalic(LUnderline l,Italic it);
LInline consInlineTexto(LInline l ,char * a);
LInline consInlineBold(LInline l ,Bold bl);
LInline consInlineItalic(LInline l ,Italic it);
Bold consBoldListUnderline(Bold l,LUnderline un);
Bold consBoldListItalic(Bold l,Italic it);
Bold consBoldListTexto(Bold l,char *text);
ListaConteudo consParaContentListTexto(ListaConteudo l,char * text);
ListaConteudo consParaContentListFreeElement(ListaConteudo l,PConteudo p);
Italic consItalicTexto(Italic l,char *a);
Italic consItalicUnderline(Italic l,LUnderline un);
Italic consItalicBold(Italic l,Bold bl);
Acronym consAcronym(char * a ,char * b);
PConteudo consParaAcronym(Acronym acronym);
PConteudo consCitref(char *ref);
PConteudo consXRef(char *Xref);
PConteudo consFootNote(char * footnote);
PConteudo consInLine(LInline il);
KeyWords consListKey(KeyWords l,char * a);
char * consDate(char * a ,char * b,char * c);
Front consFontMatter(char* a,char *b,ListAuthor c,char *d,char *i,KeyWords e,ListaParagraph f,ListaParagraph g,char *toc,char* lof,char* lot);
Author consAuthor(char * a,char *b,char *c,char *d,char *e);
ListAuthor consListAuthor(ListAuthor l,Author autor);
void showReport( Report reports );
#endif
