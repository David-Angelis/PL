#include "report2007.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


PConteudo consFootNote(char * footnote){
    PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=FOOT;
    aux->PContent.footnote=strdup(footnote);
    return aux;
}

PConteudo consRef(char *ref){
    PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=REF;
    aux->PContent.ref=strdup(ref);
    return aux;
}

PConteudo consXRef(char *Xref){
    PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=XREF;
    aux->PContent.xref=strdup(Xref);
    return aux;
}

PConteudo consCitref(char *ref){
     PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=CITREF;
    aux->PContent.citref=strdup(ref);
    return aux;
}

PConteudo consIterm(char *ref){
    PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=ITERM;
    aux->PContent.iterm=strdup(ref);
    return aux;
}

Bold reverseListBold(Bold head)
{
    Bold cursor = NULL;
    Bold next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}

PConteudo consBold(Bold bl){
    PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=BOLD;
    aux->PContent.bold=reverseListBold(bl);
    return aux;
}

Italic reverseListItalic(Italic head)
{
    Italic cursor = NULL;
    Italic next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}
PConteudo consItalic(Italic it){
    PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=ITALIC;
    aux->PContent.italic=reverseListItalic(it);
    return aux;
    
}
LUnderline reverseListUnderLine(LUnderline head)
{
    LUnderline cursor = NULL;
    LUnderline next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}
PConteudo consUnderLine(LUnderline um){
    PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=UNDERLINE;
    aux->PContent.underline=reverseListUnderLine(um);
    return aux;
}

LInline reverseListInline(LInline head)
{
    LInline cursor = NULL;
    LInline next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}
PConteudo consInLine(LInline il){
    PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=INLINE;
    aux->PContent.Inline=reverseListInline(il);
    return aux;
}

PConteudo consParaAcronym(Acronym acronym){
     PConteudo aux=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->tipo=ACRONYM;
    aux->PContent.acronym=acronym;
    return aux;
}

Acronym consAcronym(char * a ,char * b){
    Acronym aux=(Acronym)malloc(sizeof(Sacronym));
    aux->title=strdup(a);
    aux->text=strdup(b);
    return aux;
}

Italic consItalicTexto(Italic l,char *a){
    Italic aux=(Italic)malloc(sizeof(ItalicNodo));
    aux->tipo=TEXT;
    aux->IContent.text=strdup(a);
    aux->seg=l;
    return aux;
}

Italic consItalicUnderline(Italic l,LUnderline um){
    Italic aux=(Italic)malloc(sizeof(ItalicNodo));
    aux->tipo=UNDERLINE;
    aux->IContent.underline=um;
    aux->seg=l;
    return aux;
    
}

Italic consItalicBold(Italic l,Bold bl){
    Italic aux=(Italic)malloc(sizeof(ItalicNodo));
    aux->tipo=BOLD;
    aux->IContent.bold=bl;
    aux->seg=l;
    return aux;
}

LUnderline consUnderLineTexto(LUnderline l,char *a)
{
    LUnderline aux=(LUnderline)malloc(sizeof(UnderlineNode));
    aux->tipo=TEXT;
    aux->UContent.text=strdup(a);
    aux->seg=l;
    return aux;
}


LUnderline consUnderLineBold(LUnderline l,Bold bl)
{
    LUnderline aux=(LUnderline)malloc(sizeof(UnderlineNode));
    aux->tipo=BOLD;
    aux->UContent.bold=bl;
    aux->seg=l;
    return aux;
}

LUnderline consUnderLineItalic(LUnderline l,Italic it)
{
    LUnderline aux=(LUnderline)malloc(sizeof(UnderlineNode));
    aux->tipo=ITALIC;
    aux->UContent.italic=it;
    aux->seg=l;
    return aux;
}

LInline consInlineTexto(LInline l ,char * a)
{
    LInline aux=(LInline)malloc(sizeof(InlineNode));
    aux->tipo=TEXT;
    aux->UContent.text=strdup(a);
    aux->seg=l;
    return aux;
}

LInline consInlineBold(LInline l ,Bold bl)
{
    LInline aux=(LInline)malloc(sizeof(InlineNode));
    aux->tipo=BOLD;
    aux->UContent.bold=bl;
    aux->seg=l;
    return aux;
}

LInline consInlineItalic(LInline l ,Italic it)
{
    LInline aux=(LInline)malloc(sizeof(InlineNode));
    aux->tipo=ITALIC;
    aux->UContent.italic=it;
    aux->seg=l;
    return aux;
}

ListaConteudo consParaContentListFreeElement(ListaConteudo l,PConteudo p)
{
    ListaConteudo aux;
    aux=(ListaConteudo)malloc(sizeof(ConteudoNode));
    aux->conteudo=p;
    aux->seg=l;
    return aux;
    
}

ListaConteudo consParaContentListTexto(ListaConteudo l,char * texto)
{
    ListaConteudo aux;
    aux=(ListaConteudo)malloc(sizeof(ConteudoNode));
    aux->conteudo=(PConteudo)malloc(sizeof(SPConteudoNode));
    aux->conteudo->tipo=TEXT;
    aux->conteudo->PContent.normal=strdup(texto);
    aux->seg=l;
    return aux;
}
Bold consBoldListTexto(Bold l,char *texto){
    Bold aux =(Bold)malloc(sizeof(BoldNode));
    aux->tipo=TEXT;
    aux->BContent.text=strdup(texto);
    aux->seg=l;
    return aux;
}

Bold consBoldListItalic(Bold l,Italic it){
    Bold aux=(Bold)malloc(sizeof(BoldNode));
    aux->tipo=ITALIC;
    aux->BContent.italic=it;
    aux->seg=l;
    return aux;
}

Bold consBoldListUnderline(Bold l,LUnderline um){
    Bold aux=(Bold)malloc(sizeof(BoldNode));
    aux->tipo=UNDERLINE;
    aux->BContent.underline=um;
    aux->seg=l;
    return aux;
}

ListaConteudo reverseCont (ListaConteudo l) {
    ListaConteudo r, aux;
    r = NULL;
    while (l != NULL) {
        aux = l ; l = l->seg;
        aux-> seg = r; r = aux;
    }
    return r;
}

ListaParagraph consListPara(ListaParagraph l,ListaConteudo lc)
{
    ListaParagraph aux=(ListaParagraph)malloc(sizeof(ParagraphNode));
    aux->conteudo=reverseCont(lc);
    aux->seg=l;
    return aux;
}




ListaParagraph reverseList(ListaParagraph head)
{
    ListaParagraph cursor = NULL;
    ListaParagraph next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}

ListChapter  reverseListChapter (ListChapter  head)
{
    ListChapter  cursor = NULL;
    ListChapter  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}
Report consReport(Front a, ListChapter b,ListaParagraph g){
    Report aux;
    aux=(Report)malloc(sizeof(SReport));
    aux->front=a;
    aux->listchapter=reverseListChapter(b);
    aux->final=g;
    return aux;
    
}
ListAuthor reverseListAuthor(ListAuthor head)
{
    ListAuthor cursor = NULL;
    ListAuthor next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}

Front consFontMatter(char* a,char *b,ListAuthor c,char *d,char *i,KeyWords e,ListaParagraph f,ListaParagraph g,char *toc,char* lof,char* lot)
{
    Front aux;
    aux = (Front)malloc(sizeof(SFront));
    aux->title = strdup(a);
    aux->SubTitle=strdup(b);
    aux->lauthor=reverseListAuthor(c);
    aux->Date=strdup(d);
    aux->Institution=strdup(i);
    aux->words=e;
    aux->abstract=f;
    aux->aknowledgement=g;
    if(toc)
    aux->toc=strdup(toc);
    else
    aux->toc=NULL;
    if(lof)
    aux->lof=strdup(lof);
    else
    aux->lof=NULL;
    if(lot)
    aux->lot=strdup(lot);
    else
    aux->lof=NULL;
    
    return aux;
}

Author consAuthor(char * a,char *b,char *c,char *d,char *e)
{
    Author aux;
    
    aux = (Author)malloc(sizeof(SAuthor));
    aux->Nome= strdup(a);
    aux->Nident=strdup(b);
    aux->Email=strdup(c);
    aux->Url=strdup(d);
    aux->Affiliation=strdup(e);
    return aux;
        
}

ListAuthor consListAuthor(ListAuthor l,Author autor){
    ListAuthor aux;
    aux = (ListAuthor)malloc(sizeof(AuthorNodo));
    aux->author =autor;
    aux->seg = l;
    return aux;
}

char * consDate(char * a ,char * b,char * c){
    char *aux=(char*)malloc(50*sizeof(char));
    sprintf(aux,"%s/%s/%s\n",a,b,c);
    return aux;
}

ListChapter consChapterList(ListChapter l, Capitulo a ){
    ListChapter aux;
    aux=(ListChapter)malloc(sizeof(ChapterNodo));
    aux->capitulo=a;
    aux->seg=l;
    return aux;
}

LChapter  reverseLChapter (LChapter  head)
{
    LChapter  cursor = NULL;
    LChapter  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}

Capitulo consCapitulo(char * title,LChapter a){
    Capitulo aux=(Capitulo)malloc(sizeof(Scapitulo));
    aux->title=strdup(title);
    aux->capitulo=reverseLChapter(a);
    return aux;
}

LChapter consChapterConteudo(LChapter l,ChapterConteudo a){
    LChapter aux;
    aux=(LChapter)malloc(sizeof(Schapter));
    aux->conteudo=a;
    aux->seg=l;
    return aux;
}
ChapterConteudo consChapterParagraph(ListaConteudo a){
    ChapterConteudo aux;
    aux=(ChapterConteudo)malloc(sizeof(ChapterConteudoNodo));
    aux->tipo=PARA;
    aux->ChapConteudo.paragraph=reverseCont(a);
    return aux;
}
ChapterConteudo consChapterFloat(Float a){
    ChapterConteudo aux;
    aux=(ChapterConteudo)malloc(sizeof(ChapterConteudoNodo));
    aux->tipo=FLOAT;
    aux->ChapConteudo.foat=a;
    return aux;
}

ItemList  reverseItemList (ItemList  head)
{
    ItemList  cursor = NULL;
    ItemList  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}

ChapterConteudo consChapterItem(ItemList a){
    ChapterConteudo aux;
    aux=(ChapterConteudo)malloc(sizeof(ChapterConteudoNodo));
    aux->tipo=ITEM;
    aux->ChapConteudo.list=reverseItemList(a);
    return aux;

}
                         
ChapterConteudo consChapterCodeBlock(CodeBlock a){
    ChapterConteudo aux;
    aux=(ChapterConteudo)malloc(sizeof(ChapterConteudoNodo));
    aux->tipo=CODE;
    aux->ChapConteudo.codeBlock=a;
    return aux;

}
ChapterConteudo consChapterSection(Section a){
    ChapterConteudo aux;
    aux=(ChapterConteudo)malloc(sizeof(ChapterConteudoNodo));
    aux->tipo=SECTION;
    aux->ChapConteudo.section=a;
    return aux;
}

LSumary  reverseLSumary (LSumary  head)
{
    LSumary  cursor = NULL;
    LSumary  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}
ChapterConteudo consChapterSummary(LSumary a){
    ChapterConteudo aux;
    aux=(ChapterConteudo)malloc(sizeof(ChapterConteudoNodo));
    aux->tipo=SUMMARY;
    aux->ChapConteudo.sumary=reverseLSumary(a);
    return aux;
}

LSection  reverseLSection (LSection  head)
{
    LSection  cursor = NULL;
    LSection  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}

Section consSection(char * a,LSection b){
    Section aux;
    aux=(Section)malloc(sizeof(sSection));
    aux->titulo=strdup(a);
    aux->conteudo=reverseLSection(b);
    return aux;
}
                            
LSection consSectionConteudo(LSection l,SectionConteudo a){
    LSection aux;
    aux=(LSection)malloc(sizeof(LSecNodo));
    aux->conteudo=a;
    aux->seg=l;
    return aux;
}
SectionConteudo consSectionParagraph(ListaConteudo a){
    SectionConteudo aux;
    aux=(SectionConteudo)malloc(sizeof(SectionNode));
    aux->tipo=PARA;
    aux->SConteudo.paragraph=reverseCont(a);
    return aux;
}
                         
SectionConteudo consSectionFloat(Float a){
    SectionConteudo aux;
    aux=(SectionConteudo)malloc(sizeof(SectionNode));
    aux->tipo=FLOAT;
    aux->SConteudo.foat=a;
    return aux;
}
SectionConteudo consSectionItem(ItemList a){
    SectionConteudo aux;
    aux=(SectionConteudo)malloc(sizeof(SectionNode));
    aux->tipo=ITEM;
    aux->SConteudo.list=reverseItemList(a);
    return aux;
}
                         
SectionConteudo consSectionCodeBlock(CodeBlock a){
    SectionConteudo aux;
    aux=(SectionConteudo)malloc(sizeof(SectionNode));
    aux->tipo=CODE;
    aux->SConteudo.codeBlock=a;
    return aux;
}
SectionConteudo consSectionSubSection(SubSection a)
{
    SectionConteudo aux;
    aux=(SectionConteudo)malloc(sizeof(SectionNode));
    aux->tipo=SUBSECTION;
    aux->SConteudo.subsection=a;
    return aux;
}



SectionConteudo consSectionSummary(LSumary a){
    SectionConteudo aux;
    aux=(SectionConteudo)malloc(sizeof(SectionNode));
    aux->tipo=SUMMARY;
    aux->SConteudo.sumary=reverseLSumary(a);
    return aux;
}

LSubSectionC  reverseLSubSectionC (LSubSectionC  head)
{
    LSubSectionC  cursor = NULL;
    LSubSectionC  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}

SubSection consSubSection (char *titulo,LSubSectionC a){
    SubSection aux;
    aux=(SubSection)malloc(sizeof(sSubSection));
    aux->titulo=strdup(titulo);
    aux->conteudo=reverseLSubSectionC(a);
    return aux;
}
LSubSectionC consSubSectionConteudo(LSubSectionC l,SubSectionConteudo a){
    LSubSectionC aux;
    aux=(LSubSectionC)malloc(sizeof(LSubSectionNodo));
    aux->conteudo=a;
    aux->seg=l;
    return aux;
}
SubSectionConteudo consSubSectionParagraph(ListaConteudo a){
    SubSectionConteudo aux;
    aux=(SubSectionConteudo)malloc(sizeof(SNode));
    aux->tipo=PARA;
    aux->SbConteudo.paragraph=reverseCont(a);
    return aux;
}
SubSectionConteudo consSubSectionFloat(Float a){                                SubSectionConteudo aux;
    aux=(SubSectionConteudo)malloc(sizeof(SNode));
    aux->tipo=FLOAT;
    aux->SbConteudo.foat=a;
    return aux;
}
SubSectionConteudo consSubSectionItem(ItemList a){                                SubSectionConteudo aux;
    aux=(SubSectionConteudo)malloc(sizeof(SNode));
    aux->tipo=ITEM;
    aux->SbConteudo.list=reverseItemList(a);
    return aux;
}
SubSectionConteudo consSubSectionCodeBlock(CodeBlock a){                                SubSectionConteudo aux;
    aux=(SubSectionConteudo)malloc(sizeof(SNode));
    aux->tipo=CODE;
    aux->SbConteudo.codeBlock=a;
    return aux;
}
SubSectionConteudo consSubSectionSubSubSection(SubSubSection a){                                SubSectionConteudo aux;
    aux=(SubSectionConteudo)malloc(sizeof(SNode));
    aux->tipo=SUBSUBSECTION;
    aux->SbConteudo.LSubSubSection=a;
    return aux;
}
SubSectionConteudo consSubSectionSummary(LSumary a){                                SubSectionConteudo aux;
    aux=(SubSectionConteudo)malloc(sizeof(SNode));
    aux->tipo=SUMMARY;
    aux->SbConteudo.sumary=reverseLSumary(a);
    return aux;
}

LSubSubSection  reverseLSubSubSection (LSubSubSection  head)
{
   LSubSubSection  cursor = NULL;
   LSubSubSection  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}
SubSubSection consSubSubSection(char * titulo,LSubSubSection a){
    SubSubSection aux;
    aux=(SubSubSection)malloc(sizeof(SubSubNodo));
    aux->titulo=strdup(titulo);
    aux->conteudo=reverseLSubSubSection(a);
    return aux;
}



LSubSubSection consSubSubSectionConteudo(LSubSubSection l,SubSubSectionConteudo a){
    LSubSubSection aux;
    aux=(LSubSubSection)malloc(sizeof(subsubnodo));
    aux->conteudo=a;
    aux->seg=l;
    return aux;
}
SubSubSectionConteudo consSubSubSectionParagraph(ListaConteudo a){
    SubSubSectionConteudo aux;
    aux=(SubSubSectionConteudo)malloc(sizeof(SubSubSectionConteudoNodo));
    aux->tipo=PARA;
    aux->SbSbConteudo.paragraph=reverseCont(a);
    return aux;
}
SubSubSectionConteudo consSubSubSectionFloat(Float a){                                SubSubSectionConteudo aux;
    aux=(SubSubSectionConteudo)malloc(sizeof(SubSubSectionConteudoNodo));
    aux->tipo=FLOAT;
    aux->SbSbConteudo.foat=a;
    return aux;
}
SubSubSectionConteudo consSubSubSectionItem(ItemList a){                                SubSubSectionConteudo aux;
    aux=(SubSubSectionConteudo)malloc(sizeof(SubSubSectionConteudoNodo));
    aux->tipo=ITEM;
    aux->SbSbConteudo.list=reverseItemList(a);
    return aux;
}
SubSubSectionConteudo consSubSubSectionCodeBlock(CodeBlock a){                                SubSubSectionConteudo aux;
    aux=(SubSubSectionConteudo)malloc(sizeof(SubSubSectionConteudoNodo));
    aux->tipo=CODE;
    aux->SbSbConteudo.codeBlock=a;
    return aux;
}
SubSubSectionConteudo consSubSubSectionSummary(LSumary a){                                SubSubSectionConteudo aux;
    aux=(SubSubSectionConteudo)malloc(sizeof(SubSubSectionConteudoNodo));
    aux->tipo=SUMMARY;
    aux->SbSbConteudo.sumary=reverseLSumary(a);
    return aux;
}
ItemList consElemListConteudo(ItemList l,ListConteudo a){
    ItemList aux;
    aux=(ItemList)malloc(sizeof(ItemNodo));
    aux->items=a;
    aux->seg=l;
    return aux;
}
ListConteudo consElemsDesc(Desc a){
    ListConteudo aux;
    aux=(ListConteudo)malloc(sizeof(ListNodo));
    aux->tipo=DESC;
    aux->Conteudo.desc=a;
    return aux;
}
ListConteudo consElemsItem(Item a){
    ListConteudo aux;
    aux=(ListConteudo)malloc(sizeof(ListNodo));
    aux->tipo=ITEM;
    aux->Conteudo.item=a;
    return aux;
}
ListConteudo consElemsNum(Num a){
    ListConteudo aux;
    aux=(ListConteudo)malloc(sizeof(ListNodo));
    aux->tipo=NUM;
    aux->Conteudo.num=a;
    return aux;
}
Desc consDesc(char * desc1,char * desc2){
    Desc aux;
    aux=(Desc)malloc(sizeof(SDesc));
    aux->desc1=strdup(desc1);
    aux->desc2=strdup(desc2);
    return aux;
}
Item consItem(char * txt){
    Item aux;
    aux=(Item)malloc(sizeof(SItem));
    aux->item=strdup(txt);
    return aux;
}
Num consNum(char * txt){
    Num aux;
    aux=(Num)malloc(sizeof(SNum));
    aux->num=strdup(txt);
    return aux;
}
CodeBlock consCodeBlock(char *txt){
    CodeBlock aux;
    aux=(CodeBlock)malloc(sizeof(SCode));
    aux->text=strdup(txt);
    return aux;
}
LSumary consSummary(LSumary l, char * text){
    LSumary aux;
    aux=(LSumary)malloc(sizeof(SumaryNodo));
    aux->text=strdup(text);
    aux->seg=l;
    return aux;
    
}
Graphic consGraphic(char*path,char*format){
    Graphic aux;
    aux=(Graphic)malloc(sizeof(SGraphic));
    aux->caminho=strdup(path);
    aux->format=strdup(format);
    return aux;
}
Figure consFigure(Graphic a,char *caption){
    Figure aux;
    aux=(Figure)malloc(sizeof(SFigure));
    aux->graphic=a;
    aux->text=strdup(caption);
    return aux;
}
Float consFloatFigure(Figure a){
    Float aux=(Float)malloc(sizeof(SFloat));
    aux->tipo=FLOAT;
    aux->Conteudo.figure=a;
    return aux;
}

Float consFloatTable(Table a){
    Float aux=(Float)malloc(sizeof(SFloat));
    aux->tipo=TABLE;
    aux->Conteudo.table=a;
    return aux;
}
                            
LTrow consTrowList(LTrow l,Trow a){
    LTrow aux;
    aux=(LTrow)malloc(sizeof(TrowNodo));
    aux->trow=a;
    aux->seg=l;
    return aux;

}
LTrow  reverseLTrow (LTrow  head)
{
    LTrow  cursor = NULL;
    LTrow  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}
Trow  reverseTrow (Trow  head)
{
    Trow  cursor = NULL;
    Trow  next;
    while (head)
    {
        next = head->seg;
        head->seg= cursor;
        cursor = head;
        head = next;
    }
    return cursor;
}

Trow consTRowList(Trow l,char * text){
    Trow aux;
    aux=(Trow)malloc(sizeof(STrow));
    aux->text=text;
    aux->seg=l;
    return reverseTrow(aux);
}

Table consTable(char *caption,LTrow trow){
    Table aux;
    aux=(Table)malloc(sizeof(STable));
    aux->caption=strdup(caption);
    aux->trow=reverseLTrow(trow);
    return aux;
}
                         
KeyWords consListKey(KeyWords l,char * a){
    KeyWords aux;
    aux = (KeyWords)malloc(sizeof(Wordsnode));
    aux->key.Key=strdup(a);
    aux->seg=l;
    return aux;
}
void printParagraph(ListaParagraph e,FILE * report,FILE * latex){
    int i=1;
    for(ListaParagraph aux=e;aux!=NULL;aux=aux->seg){
        for(ListaConteudo aux1=aux->conteudo;aux1!=NULL;aux1=aux1->seg){
            switch(aux1->conteudo->tipo){
                case TEXT :
                    fprintf(report,"%s\n",aux1->conteudo->PContent.normal);
                    fprintf(latex,"%s\n",aux1->conteudo->PContent.normal);
                    break;
                case REF :
                    fprintf(report,"<a href=\"%s\">%s</a>",aux1->conteudo->PContent.footnote,aux1->conteudo->PContent.footnote);
                    fprintf(latex,"\\href{%s}{%s}",aux1->conteudo->PContent.footnote,aux1->conteudo->PContent.footnote);
                    break;
                case XREF:
                    fprintf(report,"<xref  linkend=\"%s\"/>",aux1->conteudo->PContent.xref);
                     fprintf(latex,"\\href{%s}{%s}",aux1->conteudo->PContent.xref,aux1->conteudo->PContent.xref);
                    break;
                case ITERM:
                    fprintf(report,"<a href=\"%s\">%s</a>",aux1->conteudo->PContent.iterm,aux1->conteudo->PContent.iterm);
                    fprintf(latex,"\\href{%s}{%s}",aux1->conteudo->PContent.iterm,aux1->conteudo->PContent.iterm);
                case BOLD:
                    for(Bold bl=aux1->conteudo->PContent.bold;bl!=NULL;bl=bl->seg){
                        switch(bl->tipo){
                            case TEXT:
                                fprintf(report,"<b>%s<b>",bl->BContent.text);
                                fprintf(latex,"\\textbf{%s}",bl->BContent.text);
                                break;
                            case ITALIC:
                                for(Italic it=bl->BContent.italic;it!=NULL;it=it->seg){
                                    if(it->tipo==TEXT)
                                    fprintf(report,"<i><b>%s</b></i>",it->IContent.text);
                                    fprintf(latex,"\\textit{\\textbf{%s}}",it->IContent.text);
                                }
                            case UNDERLINE:
                                for(LUnderline lu=bl->BContent.underline;lu!=NULL;lu=lu->seg){
                                    if(lu->tipo==TEXT)
                                    fprintf(report,"<u><b>%s</b></u>",lu->UContent.text);
                                    fprintf(latex,"\\underline{\\textbf{%s}}",lu->UContent.text);
                                }
                        }
                    }
                    break;
                case ACRONYM:
                    fprintf(report,"<acronym title=\"%s\">%s</acronym><br>",aux1->conteudo->PContent.acronym->title,aux1->conteudo->PContent.acronym->text);
                    fprintf(latex,"\\textit{%s}\\footnote{%s}",aux1->conteudo->PContent.acronym->title,aux1->conteudo->PContent.acronym->text);
                    break;
                case FOOT :
                    fprintf(report,"<sup>%d</sup><hr/>%d.%s",i,i,aux1->conteudo->PContent.footnote);
                    fprintf(latex,"\\footnote{%s}",aux1->conteudo->PContent.footnote);

                    i++;
                    break;
                case CITREF:
                    fprintf(report,"<a href=\"%s\">%s</a>",aux1->conteudo->PContent.citref,aux1->conteudo->PContent.citref);
                    fprintf(latex,"\\href{%s}{%s}",aux1->conteudo->PContent.xref,aux1->conteudo->PContent.xref);
                    break;
                case ITALIC:
                    for(Italic it=aux1->conteudo->PContent.italic;it!=NULL;it=it->seg){
                        switch(it->tipo){
                            case TEXT:
                                fprintf(report,"<i>%s</i>",it->IContent.text);
                                fprintf(latex,"\\textit{%s}",it->IContent.text);
                                break;
                            case BOLD:
                                for(Bold bl=it->IContent.bold;bl!=NULL;bl=bl->seg){
                                    if(bl->tipo==TEXT){
                                        fprintf(report,"<b><i>%s</i></b>",bl->BContent.text);
                                        fprintf(latex,"\\textit{\\textbf{%s}}",bl->BContent.text);
                                    }
                                }
                                break;
                                
                            case UNDERLINE:
                                for(LUnderline lu=it->IContent.underline;lu!=NULL;lu=lu->seg){
                                    if(lu->tipo==TEXT)
                                    fprintf(report,"<u><i>%s</i></u>",lu->UContent.text);
                                    fprintf(latex,"\\underline{\\textit{%s}}",lu->UContent.text);
                                }
                                break;
                        }
                        
                    }
                    break;
                case UNDERLINE:
                    for(LUnderline ul=aux1->conteudo->PContent.underline;ul!=NULL;ul=ul->seg){
                        switch(ul->tipo){
                            case TEXT:
                                fprintf(report,"<u>%s</u>",ul->UContent.text);
                                fprintf(latex,"\\underline{%s}",ul->UContent.text);
                                break;
                            case BOLD:
                                for(Bold bl=ul->UContent.bold;bl!=NULL;bl=bl->seg){
                                    if(bl->tipo==TEXT)
                                    fprintf(report,"<b><u>%s</u></b>",bl->BContent.text);
                                    fprintf(latex,"\\underline{\\textbf{%s}}",bl->BContent.text);
                                }
                                break;
                            case ITALIC:
                                for(Italic it=ul->UContent.italic;it!=NULL;it=it->seg){
                                    if(it->tipo==TEXT){
                                        fprintf(report,"<i><u>%s</u></i>",it->IContent.text);
                                        fprintf(latex,"\\underline{\\textit{%s}}",it->IContent.text);
                                    }
                                }
                                break;
                        }
                    }
                case INLINE :
                    for(LInline iline=aux1->conteudo->PContent.Inline;iline!=NULL;iline=aux1->conteudo->PContent.Inline->seg){
                        switch(iline->tipo){
                            case TEXT:
                                fprintf(report,"<u>%s</u>",iline->UContent.text);
                                 fprintf(latex,"\\begin{verbatim} %s \n\\end{verbatim}",iline->UContent.text);
                                
                                break;
                            case BOLD:
                                for(Bold bl=aux1->conteudo->PContent.bold;bl!=NULL;bl= aux1->conteudo->PContent.bold->seg){
                                    switch (bl->tipo){
                                        case TEXT:
                                            fprintf(report,"<u><b>%s</b></u>",bl->BContent.text);
                                            fprintf(latex,"\\begin{verbatim} %s \n\\end{verbatim}",bl->BContent.text);
                                            break;
                                        case ITALIC:
                                            for(Italic it=aux1->conteudo->PContent.italic;it!=NULL;it=aux1->conteudo->PContent.italic->seg){
                                                switch (it->tipo) {
                                                    case TEXT:
                                                        fprintf(report,"<u><i>%s</i></u>",it->IContent.text);
                                                        fprintf(latex,"\\begin{verbatim} %s \n\\end{verbatim}",it->IContent.text);
                                                        break;
                                                        
                                                    case  BOLD:
                                                        for(Bold bl1=it->IContent.bold;bl1!=NULL;bl1=it->IContent.bold->seg){
                                                            switch (bl1->tipo) {
                                                                    
                                                                case  TEXT:
                                                                    fprintf(report,"<u><i><b>%s</b></i></u>",bl1->BContent.text);
                                                                    fprintf(latex,"\\begin{verbatim} %s \n\\end{verbatim}",bl1->BContent.text);
                                                                    break;
                                                            }
                                                        }
                                                        
                                                }
                                            }
                                    }
                                }
                        }
                    }
                    break;
                    
            }
        }
    }
}

void printParagraphConteudo(ListaConteudo e,FILE * report,FILE * latex){
    int i=1;
        for(ListaConteudo aux1=e;aux1!=NULL;aux1=aux1->seg){
            switch(aux1->conteudo->tipo){
                case TEXT :
                    fprintf(report,"%s\n",aux1->conteudo->PContent.normal);
                    fprintf(latex,"%s\n",aux1->conteudo->PContent.normal);
                    break;
                case REF :
                    fprintf(report,"<a href=\"%s\">%s</a>",aux1->conteudo->PContent.footnote,aux1->conteudo->PContent.footnote);
                    fprintf(latex,"\\href{%s}{%s}",aux1->conteudo->PContent.footnote,aux1->conteudo->PContent.footnote);
                    break;
                case XREF:
                    fprintf(report,"<xref  linkend=\"%s\"/>",aux1->conteudo->PContent.xref);
                    fprintf(latex,"\\href{%s}{%s}",aux1->conteudo->PContent.xref,aux1->conteudo->PContent.xref);
                    break;
                case ITERM:
                    fprintf(report,"<a href=\"%s\">%s</a>",aux1->conteudo->PContent.iterm,aux1->conteudo->PContent.iterm);
                    fprintf(latex,"\\href{%s}{%s}",aux1->conteudo->PContent.iterm,aux1->conteudo->PContent.iterm);
                case BOLD:
                    for(Bold bl=aux1->conteudo->PContent.bold;bl!=NULL;bl=bl->seg){
                        switch(bl->tipo){
                            case TEXT:
                                fprintf(report,"<b>%s<b>",bl->BContent.text);
                                fprintf(latex,"\\textbf{%s}",bl->BContent.text);
                                break;
                            case ITALIC:
                                for(Italic it=bl->BContent.italic;it!=NULL;it=it->seg){
                                    if(it->tipo==TEXT)
                                    fprintf(report,"<i><b>%s</b></i>",it->IContent.text);
                                    fprintf(latex,"\\textit{\\textbf{%s}}",it->IContent.text);
                                }
                            case UNDERLINE:
                                for(LUnderline lu=bl->BContent.underline;lu!=NULL;lu=lu->seg){
                                    if(lu->tipo==TEXT)
                                    fprintf(report,"<u><b>%s</b></u>",lu->UContent.text);
                                    fprintf(latex,"\\underline{\\textbf{%s}}",lu->UContent.text);
                                }
                        }
                    }
                    break;
                case ACRONYM:
                    fprintf(report,"<acronym title=\"%s\">%s</acronym><br>",aux1->conteudo->PContent.acronym->title,aux1->conteudo->PContent.acronym->text);
                    fprintf(latex,"\\textit{%s}\\footnote{%s}",aux1->conteudo->PContent.acronym->title,aux1->conteudo->PContent.acronym->text);
                    break;
                case FOOT :
                    fprintf(report,"<sup>%d</sup><hr/>%d.%s",i,i,aux1->conteudo->PContent.footnote);
                    fprintf(latex,"\\footnote{%s}",aux1->conteudo->PContent.footnote);
                    
                    i++;
                    break;
                case CITREF:
                    fprintf(report,"<a href=\"%s\">%s</a>",aux1->conteudo->PContent.citref,aux1->conteudo->PContent.citref);
                    fprintf(latex,"\\href{%s}{%s}",aux1->conteudo->PContent.xref,aux1->conteudo->PContent.xref);
                    break;
                case ITALIC:
                    for(Italic it=aux1->conteudo->PContent.italic;it!=NULL;it=it->seg){
                        switch(it->tipo){
                            case TEXT:
                                fprintf(report,"<i>%s</i>",it->IContent.text);
                                fprintf(latex,"\\textit{%s}",it->IContent.text);
                                break;
                            case BOLD:
                                for(Bold bl=it->IContent.bold;bl!=NULL;bl=bl->seg){
                                    if(bl->tipo==TEXT){
                                        fprintf(report,"<b><i>%s</i></b>",bl->BContent.text);
                                        fprintf(latex,"\\textit{\\textbf{%s}}",bl->BContent.text);
                                    }
                                }
                                break;
                                
                            case UNDERLINE:
                                for(LUnderline lu=it->IContent.underline;lu!=NULL;lu=lu->seg){
                                    if(lu->tipo==TEXT)
                                    fprintf(report,"<u><i>%s</i></u>",lu->UContent.text);
                                    fprintf(latex,"\\underline{\\textit{%s}}",lu->UContent.text);
                                }
                                break;
                        }
                        
                    }
                    break;
                case UNDERLINE:
                    for(LUnderline ul=aux1->conteudo->PContent.underline;ul!=NULL;ul=ul->seg){
                        switch(ul->tipo){
                            case TEXT:
                                fprintf(report,"<u>%s</u>",ul->UContent.text);
                                fprintf(latex,"\\underline{%s}",ul->UContent.text);
                                break;
                            case BOLD:
                                for(Bold bl=ul->UContent.bold;bl!=NULL;bl=bl->seg){
                                    if(bl->tipo==TEXT)
                                    fprintf(report,"<b><u>%s</u></b>",bl->BContent.text);
                                    fprintf(latex,"\\underline{\\textbf{%s}}",bl->BContent.text);
                                }
                                break;
                            case ITALIC:
                                for(Italic it=ul->UContent.italic;it!=NULL;it=it->seg){
                                    if(it->tipo==TEXT){
                                        fprintf(report,"<i><u>%s</u></i>",it->IContent.text);
                                        fprintf(latex,"\\underline{\\textit{%s}}",it->IContent.text);
                                    }
                                }
                                break;
                        }
                    }
                case INLINE :
                    for(LInline iline=aux1->conteudo->PContent.Inline;iline!=NULL;iline=aux1->conteudo->PContent.Inline->seg){
                        switch(iline->tipo){
                            case TEXT:
                                fprintf(report,"<u>%s</u>",iline->UContent.text);
                                fprintf(latex,"\\begin{verbatim} %s \n\\end{verbatim}",iline->UContent.text);
                                
                                break;
                            case BOLD:
                                for(Bold bl=aux1->conteudo->PContent.bold;bl!=NULL;bl= aux1->conteudo->PContent.bold->seg){
                                    switch (bl->tipo){
                                        case TEXT:
                                            fprintf(report,"<u><b>%s</b></u>",bl->BContent.text);
                                            fprintf(latex,"\\begin{verbatim} %s \n\\end{verbatim}",bl->BContent.text);
                                            break;
                                        case ITALIC:
                                            for(Italic it=aux1->conteudo->PContent.italic;it!=NULL;it=aux1->conteudo->PContent.italic->seg){
                                                switch (it->tipo) {
                                                    case TEXT:
                                                        fprintf(report,"<u><i>%s</i></u>",it->IContent.text);
                                                        fprintf(latex,"\\begin{verbatim} %s \n\end{verbatim}",it->IContent.text);
                                                        break;
                                                        
                                                    case  BOLD:
                                                        for(Bold bl1=it->IContent.bold;bl1!=NULL;bl1=it->IContent.bold->seg){
                                                            switch (bl1->tipo) {
                                                                    
                                                                case  TEXT:
                                                                    fprintf(report,"<u><i><b>%s</b></i></u>",bl1->BContent.text);
                                                                    fprintf(latex,"\\begin{verbatim} %s \n \\end{verbatim}",bl1->BContent.text);
                                                                    break;
                                                            }
                                                        }
                                                        
                                                }
                                            }
                                    }
                                }
                        }
                    }
                    break;
                    
            }
        }
}
void printFloat(Float a,FILE *report,FILE *latex ){
    
    if(a->tipo==FLOAT){
        
        fprintf(report, "<div style=\"text-align:center;\">");
        fprintf(report,"<figure><img src=\"%s\"><figcaption><a name=\"%s\">%s</a></figcaption></figure>",a->Conteudo.figure->graphic->caminho,a->Conteudo.figure->text,a->Conteudo.figure->text);
        fprintf(report, "</div>");
        fprintf(latex,"\\begin{figure}\\includegraphics{%s}\\caption{%s}\\end{figure}",a->Conteudo.figure->graphic->caminho,a->Conteudo.figure->text);
        
    }
    if(a->tipo==TABLE){
        
        int i=0,j=0;
        fprintf(report,"<table border=2 class=\"selectorsReview\" style=\"margin-left:auto; margin-right:auto; padding-top:25px;padding-bottom:25px;\">");
         for(LTrow ltrow=a->Conteudo.table->trow;ltrow!=NULL;ltrow=ltrow->seg){
             fprintf(report,"<tr>");
             for(Trow trow=ltrow->trow;trow!=NULL;trow=trow->seg){
            i++;
            fprintf(report,"<td>%s</td>",trow->text);
        }
        fprintf(report,"</tr>");
        }
        fprintf(report,"<caption><a name=\"%s\">%s</a></caption>",a->Conteudo.table->caption,a->Conteudo.table->caption);
        fprintf(report,"</table>");
        fprintf(latex,"\\begin{table}");
        fprintf(latex,"\\begin{center}\\begin{tabular}{");
        while(j<i){
            fprintf(latex,"| l");
            j++;
        }
        fprintf(latex,"|}\n");
                 fprintf(latex,"\\hline\n");
        for(LTrow ltrow=a->Conteudo.table->trow;ltrow!=NULL;ltrow=ltrow->seg){
          for(Trow trow=ltrow->trow;trow!=NULL;trow=trow->seg){
              if(trow->seg==NULL){
                  fprintf(latex,"%s \n",trow->text);
                  break;
              }
            fprintf(latex,"%s & \n",trow->text);
          }
             fprintf(latex,"\\\\");
            fprintf(latex,"\\hline\n");
        }
        fprintf(latex,"\\end{tabular}\n");
        fprintf(latex,"\\end{center}\n");
        fprintf(latex,"\\caption{%s}",a->Conteudo.table->caption);
        fprintf(latex,"\\end{table}");
        
    }
}

void printItemDesc(ItemList a,FILE *report,FILE *latex){
    if(a->items->tipo==DESC){
        fprintf(report,"<dl>");
        fprintf(latex,"\\begin{description}");
        for(ItemList l=a;l!=NULL;l=l->seg){
            if(l->items->tipo==DESC){
                fprintf(latex,"\\item[%s] %s",l->items->Conteudo.desc->desc1,l->items->Conteudo.desc->desc2);
                fprintf(report,"<dt>%s</dt>",l->items->Conteudo.desc->desc1);
                fprintf(report,"<dd>%s<dd>",l->items->Conteudo.desc->desc2);
            
            }
        }
        fprintf(latex,"\\end{description}");
        fprintf(report,"</dl>");
    }
}
void printItem(ItemList a ,FILE *report,FILE *latex){
    if(a->items->tipo==ITEM){
        fprintf(report,"<ul>");
        fprintf(latex,"\\begin{itemize}");
        for(ItemList l=a;l!=NULL;l=l->seg){
            if(l->items->tipo==ITEM){
                fprintf(latex,"\\item %s",l->items->Conteudo.item->item);
                fprintf(report,"<li>%s</dt>",l->items->Conteudo.item->item);
            }
        }
        fprintf(report,"</ul>");
        fprintf(latex,"\\end{itemize}");

    }
}
void printItemNum(ItemList a ,FILE *report,FILE*latex){
    if(a->items->tipo==NUM){
        fprintf(report,"<ol>");
        fprintf(latex,"\\begin{enumerate}");
        for(ItemList l=a;l!=NULL;l=l->seg){
            if(l->items->tipo==ITEM){
                fprintf(latex,"\\item %s",l->items->Conteudo.item->item);
                fprintf(report,"<li>%s</dt>",l->items->Conteudo.item->item);
            }
        }
        fprintf(report,"</ol>");
          fprintf(latex,"\\end{enumerate}");
    }
}

void printCODEBLOCK(CodeBlock cb,FILE *report,FILE*latex){
    fprintf(report,"<div><p><pre>%s</pre></p></div>",cb->text);
    fprintf(latex,"\\begin{verbatim}%s \n\\end{verbatim}",cb->text);
}
void printSummary(LSumary a,FILE *report,FILE* latex){
    for(LSumary b=a;b!=NULL;b=b->seg){
         fprintf(report,"<p style=\"text-align: center;\">%s</p>",b->text);
         fprintf(latex,"%s",b->text);
    }
}

void showReport( Report reports )
{
    
    FILE * report;
    FILE *latex;
    Front e=reports->front;
    report=fopen("report.html","w");
    latex=fopen("latex.tex","w");
    fprintf(latex,"\\documentclass[12pt,a4paper]{report}\n\\usepackage[portuguese]{babel}\n\\usepackage[utf8]{inputenc}\n\\usepackage{graphicx}\\usepackage{hyperref}\n\\usepackage{acronym}\n");
    fprintf(latex,"\\begin{document}");
    fprintf(report,"<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\" />");
    fprintf(latex,"\\title{%s\\\\ %s}",e->title,e->SubTitle);
    fprintf(report,"<head><h1>%s</h1></head><br>\n",e->title);
    fprintf(report,"<h2>%s</h2><br>\n",e->SubTitle);
    fprintf(latex,"\\date{%s}\n",e->Date);
    fprintf(report,"<h3>%s</h3><br>\n",e->Date);
    
    fprintf(latex,"\\author{");
    fprintf(report,"<h4>Author</h4>");
    while(e->lauthor!=NULL)
    {
        fprintf(latex,"%s  %s %s %s \\\\",e->lauthor->author->Nome,e->lauthor->author->Nident,e->lauthor->author->Email,e->lauthor->author->Url);
        fprintf(report,"%s  %s %s %s \n<br>",e->lauthor->author->Nome,e->lauthor->author->Nident,e->lauthor->author->Email,e->lauthor->author->Url);
        e->lauthor=e->lauthor->seg;
    }
 
    fprintf(latex,"}");
       fprintf(latex,"\\maketitle");
    if(e->Institution!=NULL){
        fprintf(report,"<h4>%s</h4><br>",e->Institution);
        fprintf(latex,"\\textbf{\\textit{%s}}",e->Institution);
    }
    if(e->words){
        fprintf(report,"<h4>KeyWords:</h4>");
        fprintf(latex,"\\section*{KeyWords}\n");
    while(e->words){
        fprintf(latex,"\\textbf{%s}\n",e->words->key.Key);
        fprintf(report,"%s;",e->words->key.Key);
        e->words=e->words->seg;
    }
        fprintf(report,"<br><br>");
    }
    fprintf(report,"<h2>Abstract</h2>\n");
    fprintf(latex,"\\begin{abstract}\n");
    printParagraph(e->abstract,report,latex);
    fprintf(latex,"\\end{abstract}\n");
    if(e->aknowledgement){
        fprintf(latex,"\\section*{Acknowledgement}\n");
        fprintf(report,"<h2>Aknowledgement</h2>\n");
        printParagraph(e->aknowledgement,report,latex);
    }
    if(e->words){
        
    }
    
   
    
    
    int i=1,j=1;
    if(e->toc!=NULL){
        fprintf(latex,"\\tableofcontents\n");
    fprintf(report,"<h2>Table of Contents</h2>");
    for(ListChapter lc=reports->listchapter;lc!=NULL;lc=lc->seg){
        fprintf(report,"<li><p><a href=\"#%s\">%d %s<a/></p></li>\n",lc->capitulo->title,i,lc->capitulo->title);
            for(LChapter chap=lc->capitulo->capitulo;chap!=NULL;chap=chap->seg){
                if(chap->conteudo->tipo==SECTION){
                    fprintf(report,"<li><a href=\"#%s\">%d.%d %s<a/></li>\n",chap->conteudo->ChapConteudo.section->titulo,i,j,chap->conteudo->ChapConteudo.section->titulo);
                    j++;
                }
            }
        
                i++;
            }
    }
    i=0;j=0;
    if(e->lof!=NULL){
        fprintf(latex,"\\listoffigures\n");
        fprintf(report,"<h2>List of Figure</h2>");
        for(ListChapter lc=reports->listchapter;lc!=NULL;lc=lc->seg){
            for(LChapter chap=lc->capitulo->capitulo;chap!=NULL;chap=chap->seg){
                if(chap->conteudo->tipo==FLOAT){
                    if(chap->conteudo->ChapConteudo.foat->tipo==FLOAT)
                    fprintf(report,"<li><a href=\"#%s\"> %s<a/></li>\n",chap->conteudo->ChapConteudo.foat->Conteudo.figure->text,chap->conteudo->ChapConteudo.foat->Conteudo.figure->text);
                    j++;
                }
                if(chap->conteudo->tipo==SECTION){
                    Section sec=chap->conteudo->ChapConteudo.section;
                    for(LSection lsec=sec->conteudo;lsec!=NULL;lsec=lsec->seg){
                        //SECTION
                        if(lsec->conteudo->tipo==FLOAT){
                            if(lsec->conteudo->SConteudo.foat->tipo==FLOAT){
                                fprintf(report,"<li><a href=\"#%s\"> %s<a/></li>\n",lsec->conteudo->SConteudo.foat->Conteudo.figure->text,lsec->conteudo->SConteudo.foat->Conteudo.figure->text);
                            }
                        }
                        //SUBSECTION
                        if(lsec->conteudo->tipo==SUBSECTION){
                            SubSection subSec=lsec->conteudo->SConteudo.subsection;
                            for(LSubSectionC lsubsec=subSec->conteudo;lsubsec!=NULL;lsubsec=lsubsec->seg){
                                if(lsubsec->conteudo->tipo==FLOAT){
                                    if(lsubsec->conteudo->SbConteudo.foat->tipo==FLOAT){
                                        fprintf(report,"<li><a href=\"#%s\">%s<a/></li>\n",lsubsec->conteudo->SbConteudo.foat->Conteudo.figure->text,lsubsec->conteudo->SbConteudo.foat->Conteudo.figure->text);
                                    }
                                }
                                //SUBSUBSECTION
                                if(lsubsec->conteudo->tipo==SUBSUBSECTION){
                                    SubSubSection subsubsection=lsubsec->conteudo->SbConteudo.LSubSubSection;
                                    for(LSubSubSection lsubsubsec=subsubsection->conteudo;lsubsubsec!=NULL;lsubsubsec=lsubsubsec->seg){
                                        if(lsubsubsec->conteudo->tipo==FLOAT){
                                            if(lsubsec->conteudo->tipo==FLOAT){
                                                fprintf(report,"<li><a href=\"#%s\">%s<a/></li>\n",lsubsubsec->conteudo->SbSbConteudo.foat->Conteudo.figure->text,lsubsubsec->conteudo->SbSbConteudo.foat->Conteudo.figure->text);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    
                }
            }
            
            i++;
        }
    }
    if(e->lot!=NULL){
        fprintf(latex,"\\listoftables\n");
        fprintf(report,"<h2>List of Table</h2>");
        for(ListChapter lc=reports->listchapter;lc!=NULL;lc=lc->seg){
            for(LChapter chap=lc->capitulo->capitulo;chap!=NULL;chap=chap->seg){
                //CHAPTER
                if(chap->conteudo->tipo==FLOAT){
                    if(chap->conteudo->ChapConteudo.foat->tipo==TABLE)
                    fprintf(report,"<li><a href=\"#%s\">%s<a/></li>\n",chap->conteudo->ChapConteudo.foat->Conteudo.table->caption,chap->conteudo->ChapConteudo.foat->Conteudo.table->caption);
                    j++;
                }
                //SECTION
                if(chap->conteudo->tipo==SECTION){
                    Section sec=chap->conteudo->ChapConteudo.section;
                    for(LSection lsec=sec->conteudo;lsec!=NULL;lsec=lsec->seg){
                        if(lsec->conteudo->tipo==FLOAT){
                            if(lsec->conteudo->tipo==TABLE){
                                fprintf(report,"<li><a href=\"#%s\">%s<a/></li>\n",lsec->conteudo->SConteudo.foat->Conteudo.table->caption,lsec->conteudo->SConteudo.foat->Conteudo.table->caption);
                            }
                        }
                        //SUBSECTION
                        if(lsec->conteudo->tipo==SUBSECTION){
                            SubSection subSec=lsec->conteudo->SConteudo.subsection;
                            for(LSubSectionC lsubsec=subSec->conteudo;lsubsec!=NULL;lsubsec=lsubsec->seg){
                                if(lsubsec->conteudo->tipo==FLOAT){
                                    if(lsubsec->conteudo->tipo==TABLE){
                                        fprintf(report,"<li><a href=\"#%s\">%s<a/></li>\n",lsubsec->conteudo->SbConteudo.foat->Conteudo.table->caption,lsubsec->conteudo->SbConteudo.foat->Conteudo.table->caption);
                                    }
                                }
                             //SUBSUBSECTION
                                if(lsubsec->conteudo->tipo==SUBSUBSECTION){
                                    SubSubSection subsubsection=lsubsec->conteudo->SbConteudo.LSubSubSection;
                                    for(LSubSubSection lsubsubsec=subsubsection->conteudo;lsubsubsec!=NULL;lsubsubsec=lsubsubsec->seg){
                                        if(lsubsubsec->conteudo->tipo==FLOAT){
                                            if(lsubsec->conteudo->tipo==TABLE){
                                                fprintf(report,"<li><a href=\"#%s\">%s<a/></li>\n",lsubsubsec->conteudo->SbSbConteudo.foat->Conteudo.table->caption,lsubsubsec->conteudo->SbSbConteudo.foat->Conteudo.table->caption);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                
                }
            }
            
            i++;
        }
    }
    Section sec;
    SubSection subSection;
    SubSubSection subsubSection;
    for(ListChapter lc=reports->listchapter;lc!=NULL;lc=lc->seg){
        fprintf(latex,"\\chapter{%s}\n",lc->capitulo->title);
        fprintf(report,"<h2><a name=\"%s\">%s</a></h2>",lc->capitulo->title,lc->capitulo->title);
        for(LChapter chap=lc->capitulo->capitulo;chap!=NULL;chap=chap->seg){
            switch(chap->conteudo->tipo){
                case PARA:
                    printParagraphConteudo(chap->conteudo->ChapConteudo.paragraph,report,latex);
                    break;
                case FLOAT:
                    printFloat(chap->conteudo->ChapConteudo.foat,report,latex);
                    break;
                case ITEM:
                    printItemDesc(chap->conteudo->ChapConteudo.list,report,latex);
                    printItem(chap->conteudo->ChapConteudo.list,report,latex);
                    printItemNum(chap->conteudo->ChapConteudo.list,report,latex);
                    break;
                case CODE:
                    printCODEBLOCK(chap->conteudo->ChapConteudo.codeBlock,report,latex);
                    break;
                case SECTION:
                    sec=chap->conteudo->ChapConteudo.section;
                    fprintf(latex,"\\section{%s}\n",sec->titulo);
                     fprintf(report,"<h3><a name=\"%s\">%s</a></h3>",sec->titulo,sec->titulo);
                        for(LSection aux=sec->conteudo;aux!=NULL;aux=aux->seg){
                        switch(aux->conteudo->tipo){
                            case PARA:
                                printParagraphConteudo(aux->conteudo->SConteudo.paragraph,report,latex);
                                break;
                            case FLOAT:
                                printFloat(aux->conteudo->SConteudo.foat,report,latex);
                                break;
                            case ITEM :
                                printItemDesc(aux->conteudo->SConteudo.list,report,latex);
                                printItem(aux->conteudo->SConteudo.list,report,latex);
                                printItemNum(aux->conteudo->SConteudo.list,report,latex);
                                break;
                            case CODE:
                                printCODEBLOCK(aux->conteudo->SConteudo.codeBlock,report,latex);
                                break;
                            case SUBSECTION:
                                subSection=aux->conteudo->SConteudo.subsection;
                                fprintf(latex,"\\subsection{%s}\n",subSection->titulo);
                                fprintf(report,"<h4><a name=\"%s\">%s</a></h4>",subSection->titulo,subSection->titulo);
                                for(LSubSectionC aux1=subSection->conteudo;aux1!=NULL;aux1=aux1->seg){
                                    switch(aux1->conteudo->tipo){
                                        case PARA:
                                            printParagraphConteudo(aux1->conteudo->SbConteudo.paragraph,report,latex);
                                            break;
                                        case FLOAT:
                                            printFloat(aux1->conteudo->SbConteudo.foat,report,latex);
                                            break;
                                        case ITEM:
                                            printItemDesc(aux1->conteudo->SbConteudo.list,report,latex);
                                            printItem(aux1->conteudo->SbConteudo.list,report,latex);
                                            printItemNum(aux1->conteudo->SbConteudo.list,report,latex);
                                            break;
                                        case CODE:
                                            printCODEBLOCK(aux1->conteudo->SbConteudo.codeBlock,report,latex);
                                            break;
                                        case SUBSUBSECTION:
                                            subsubSection=aux1->conteudo->SbConteudo.LSubSubSection;
                                            fprintf(latex,"\\subsubsection{%s}\n",subsubSection->titulo);
                                            fprintf(report,"<h5><a name=\"%s\">%s</a></h5>",subsubSection->titulo,subsubSection->titulo);
                                            for(LSubSubSection aux2=subsubSection->conteudo;aux2!=NULL;aux2=aux2->seg){
                                                switch(aux2->conteudo->tipo){
                                                    case PARA:
                                                        printParagraphConteudo(aux2->conteudo->SbSbConteudo.paragraph,report,latex);
                                                        break;
                                                    case FLOAT:
                                                        printFloat(aux2->conteudo->SbSbConteudo.foat,report,latex);
                                                        break;
                                                    case ITEM:
                                                        printItemDesc(aux2->conteudo->SbSbConteudo.list,report,latex);
                                                        printItem(aux2->conteudo->SbSbConteudo.list,report,latex);
                                                        printItemNum(aux2->conteudo->SbSbConteudo.list,report,latex);
                                                        break;
                                                    case CODE:
                                                        printCODEBLOCK(aux2->conteudo->SbSbConteudo.codeBlock,report,latex);
                                                        break;
                                                    case SUMMARY:
                                                        printSummary(aux2->conteudo->SbSbConteudo.sumary,report,latex);
                                                        break;
                                                }
                                            }
                                            
                                            break;
                                        case SUMMARY:
                                            printSummary(aux1->conteudo->SbConteudo.sumary,report,latex);
                                            break;
                                    }
                                    
                                }
                                break;
                            case SUMMARY:
                                printSummary(aux->conteudo->SConteudo.sumary,report,latex);
                                break;
                                
                        }
                    }
                    break;
                case SUMMARY:
                    printSummary(chap->conteudo->ChapConteudo.sumary,report,latex);
                    break;
            }
        
        
        }
    }
    
    fprintf(report,"<h2>Conclusão</h2>");
    fprintf(latex,"\\chapter{Conclusão}\n");
    printParagraph(reports->final,report,latex);
    fprintf(latex,"\\end{document}");
    fclose(latex);
    fclose(report);
    system("pdflatex latex.tex");
    system("pdflatex latex.tex");
}

