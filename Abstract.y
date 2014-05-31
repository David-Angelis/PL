%token BREPORT EREPORT BFM EFM BTITLE ETITLE BSUBTILE ESUBTITLE BAUTHOR EAUTHOR BNAME ENAME BFOOT EFOOT 
%token BIDENT EINDENT BMAIL EMAIL BURL EURL BAFF EAFF BDATE EDATE BINST EINST BKEY EKEY BAKN EAKN
%token BABS EABS TOC LOF LOT BBOBDY EBODY BCHAP ECHAP BSEC ESEC BSUBSEC ESUBSEC BSUBSUBSECTION ESUBSUBSECTION
%token BLIST ELIST BCODE ECODE BSUM ESUM BPARA EPARA BREF EREF BXREF EXREF BCIT ECIT BITERM EITERM BBLOD EBOLD
%token BITALIC EITALIC BUNDERLINE EUNDERLINE BINLINE EINLINE BACRONYM EACRONYM BFIG EFIG BGRAPH EGRAPH BCAPTION ECAPTION
%token BTABLE ETABLE BBACK EBACK texto path target Int

ListAuthor: texto Authors
	   ;
Authors: texto Authors
		| 
		;	   

ParaList: ParaList Paragraph
		| Paragraph
		;

ElemList: ElemList Elem
		| Elem
		;

Elem : Paragraph
	 | Float 
	 | List 
	 | CodeBlock 
	 | Section 
	 | Summary 
	 ;			
		
ElemListSec: ElemListSec ElemSec
			| ElemSec
			;
			
ElemSec: Paragraph
	   | Float 
	   | List 
	   | CodeBlock 
	   | SubSection 
	   | Summary 
	   ;
	 									
			 
ElemListSubSec : ElemListSubSec ElemSubSec
				| ElemSubSec
				;
				
ElemSubSec : Paragraph
	   | Float 
	   | List
	   | CodeBlock 
	   | SubSubSection 
	   | Summary
	   ;
	   
ElemListSubSubSec : ElemListSubSubSec ElemSubSubSec
				| ElemSubSubSec
				;			      							 		
				
ElemSubSubSec : Paragraph
	   | Float 
	   | List 
	   | CodeBlock 
	   | Summary 
	   ;														 		 				
	   
ElemLists : ElemLists Elems
		  | Elems
		  ;
Elems : Desc 
	  | Item 
	  | Num
	  ;

ElemSum : ElemSum texto
		| texto
		;				  		 	 	  
				  	 	   

ParaContent : ParaContent texto
			| ParaContent FreeElement
			| 
			;
FreeElement : Footnote
			| Ref
			| Xref
			| Citref
			| Iterm
			| Bold
			| Italic 
			| UnderLine
			| InlineCode
			| Acronym
			;
			
BContent : BContent texto
         | BContent Italic
         | BContent	UnderLine
         | 
         ;
	 
IContent : IContent texto
         | IContent Bold
         | IContent UnderLine
         | 
         ;

		 
UContent : UContent texto
		 | UContent Bold 
		 | UContent Italic
		 | 
		 ;

INContent : INContent texto
		  | INContent Bold
		  | INContent Italic
		  ;

TrowList :TrowList Trow
		 | Trow
		 ;
Trow : texto
	 |  
	 ;		
Report : BREPORT FrontMatter Body BackMatter EREPORT
	  ;
FrontMatter:BFM Title SubTitle Authors Date Institution Keywords Abstract Aknowledgements Toc Lof Lot EFM {printf("%s",$2);};
            ;
Title: BTITLE texto ETITLE {$$=$2;};
	 ;

SubTitle: BSUBTILE texto ESUBTITLE {$$=$2;};
		| {$$=NULL}
		;
Authors: Authors Author
	   | Author
	   ;
Author: BAUTHOR Name Nident Email Url Affiliation EAUTHOR {/*consAuthor*/};
		;
Name: BNAME texto ENAME {$$=$2;};
	;
Nident: BIDENT texto EINDENT {$$=$2;};
		;
Email: BMAIL texto EMAIL {$$=$2;};
	 | 
	 ;
Url: BURL texto EURL {$$=$2;};
	| 
	;
Affiliation: BAFF texto	EAFF {$$=$2;};
			| 	 				   		
			;
Date : BDATE Dia '/' Mes '/' Ano EDATE {$$=consDate($2,$4,$6);};
	 ;
Dia: Int {$$=$1;};
	; 
Mes: texto {$$=$1;};
	;
Ano: Int {$$=$1;};
	;
	
Institution:BINST texto EINST {$$=$2;};
			| 
			;
			
Keywords: BKEY Keys EKEY 
		| 
		;

Keys : Keys ',' texto
	 | ',' texto		
	 ;

Abstract: BABS ParaList EABS {$$=$2;};
		| 
		;
Aknowledgements: BAKN ParaList EAKN {$$=$2;};
				| 
				;
ParaList: ParaList Paragraph
		| Paragraph
		;
Toc:TOC {$$=consToc();};
	;
Lof:LOF {$$=consLof();};
	;
Lot:LOT
	;
Body: BBOBDY ChapterList EBODY {$$=$2;};
	;
ChapterList: ChapterList Chapter
		   | Chapter
			;
Chapter: BCHAP Title ElemList ECHAP {$$=consCapitulo($2,$3);};
		;
ElemList: ElemList Elem
		| Elem
		;

Elem : Paragraph {$$=$1;};
	 | Float {$$=$1;};
	 | List {$$=$1;};
	 | CodeBlock {$$=$1;};
	 | Section {$$=$1;};
	 | Summary {$$=$1;};
	 ;			
		
Section: BSEC Title ElemListSec ESEC {$$=consSection($2,$3);};
		;
ElemListSec: ElemListSec ElemSec
			| ElemSec
			;
			
ElemSec: Paragraph {$$=$1;};
	   | Float {$$=$1;};
	   | List {$$=$1;};
	   | CodeBlock {$$=$1;};
	   | SubSection {$$=$1;};
	   | Summary {$$=$1;};
	   ;
SubSection : BSUBSEC Title ElemListSubSec ESUBSEC {$$=consSubSec($1,$2);};
			;		 									
			 
ElemListSubSec : ElemListSubSec ElemSubSec
				| ElemSubSec
				;
				
ElemSubSec : Paragraph {$$=$1;};
	   | Float {$$=$1;};
	   | List {$$=$1;};
	   | CodeBlock {$$=$1;};
	   | SubSubSection {$$=$1;};
	   | Summary {$$=$1;};
	   ;
	   
SubSubSection : BSUBSUBSECTION Title ElemListSubSubSec ESUBSUBSECTION {$$=consSubSubSection($1,$2);};
			  ;
ElemListSubSubSec : ElemListSubSubSec ElemSubSubSec
				| ElemSubSubSec
				;			      							 		
				
ElemSubSubSec : Paragraph {$$=$1;};
	   | Float {$$=$1;};
	   | List {$$=$1;};
	   | CodeBlock {$$=$1;};
	   | Summary {$$=$1;};
	   ;														 		 				
	   
List : BLIST ElemLists ELIST {$$=$2;};
	 ;
ElemLists : ElemLists Elems
		  | Elems
		  ;
Elems : Desc {$$=$1;};
	  | Item {$$=$1;};
	  | Num {$$=$1;};
	  ;
Desc : texto texto {consDesc($1,$2);};
	 ;
Item : texto {$$=consItem($1);};
	 ;
Num : texto {$$=consNum($1);};
	;
CodeBlock : BCODE texto ECODE {$$=consCodeBlock($2);};
		  ;
Summary : BSUM ElemSum ESUM {$$=$2;};
		;
ElemSum : ElemSum texto
		| texto
		;				  		 	 	  
				  	 	   
Paragraph :BPARA ParaContent EPARA {$$=$2;};
		  ;
ParaContent : ParaContent texto
			| ParaContent FreeElement
			| 
			;
FreeElement : Footnote
			| Ref
			| Xref
			| Citref
			| Iterm
			| Bold
			| Italic 
			| UnderLine
			| InlineCode
			| Acronym
			;
			
Footnote : BFOOT texto EFOOT	
		  ;		
Ref: BREF target EREF 
   ;
Xref: BXREF target EXREF
	;
Citref : BCIT target ECIT
		;	 	 								  
Iterm : BITERM texto EITERM
	  ;
Bold : BBLOD BContent EBOLD
	 ;
BContent : BContent texto
         | BContent Italic
         | BContent	UnderLine
         | 
         ;
Italic : BITALIC IContent EITALIC
	   ;
IContent : IContent texto
         | IContent Bold
         | IContent UnderLine
         | 
         ;
UnderLine : BUNDERLINE UContent EUNDERLINE
		  ;
UContent : UContent texto
		 | UContent Bold 
		 | UContent Italic
		 | 
		 ;
InlineCode : BINLINE INContent EINLINE
			;
INContent : INContent texto
		  | INContent Bold
		  | INContent Italic
		  ;
Acronym : BACRONYM Title texto EACRONYM
		;
Float:Figure
	 | Table
	 ;
Figure : BFIG Graphic Caption EFIG
	   ;
Graphic : BGRAPH path Format EGRAPH
		;
Format : texto
		| 
		;		
Caption	: BCAPTION texto ECAPTION
		;
		
Table : BTABLE Caption TrowList ETABLE
	  ;
TrowList :TrowList Trow
		 | Trow
		 ;
Trow : texto
	 |  
	 ;			 	  
BackMatter: BBACK texto EBACK
		  ;					  					  
		  					 		           	          	  		  	   			  					  
		  					 		           	          	  		  	   