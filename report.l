%{
#include "report2007.h"
#include "y.tab.h"
#include <string.h>
#include <stdlib.h>
%}
%option noyywrap
%option yylineno
%x title subtitle name ident email url aff date inst key para akn code
%%

\\REPORT[ ]*                {return BREPORT;}
\/REPORT[ ]*                {return EREPORT;}
\\BFM[ ]*                   {return BFM;}
\\TOC[ ]*                    {return TOC;}
\\LOF[ ]*                    {return LOF;}
\\LOT[ ]*                    {return LOT;}
\/EFM[ ]*                   {return EFM;}
\\TITLE[ ]*                 {BEGIN title; return BTITLE;}
\/TITLE[ ]*                 {return ETITLE;}
\\SUBTITLE[ ]*              {BEGIN subtitle; return BSUBTITLE;}
\/SUBTITLE[ ]*              {return ESUBTITLE;}
<title>[A-Za-z0-9áàãÃÂéÈèíÌÍìóòõÕôÔúÙùç,;.:_\-!?\+\*(&) ]*    {BEGIN 0;yylval.str=strdup(yytext);return TEXTO;}
<subtitle>[A-Za-z0-9áàãÃÂéÈèíÌÍìóòõÕôÔúÙùç,;.:_\-!?\+\*(&) ]*  {BEGIN 0;yylval.str=strdup(yytext);return TEXTO;}
\\AUTHOR[ ]*                {return BAUTHOR;}
\/AUTHOR[ ]*                {return EAUTHOR;}
\\NAME[ ]*                  {BEGIN name;return BNAME;}
\/NAME[ ]*                  {return ENAME;}
<name>[a-zA-z0-9\ ]*     {BEGIN 0;yylval.str=strdup(yytext);return TEXTO;}
\\NIDENT[ ]*                {BEGIN ident;return BIDENT;}
\/NIDENT[ ]*                {return EINDENT;}
<ident>[a-zA-z0-9\ ]*    {BEGIN 0; yylval.str=strdup(yytext);return TEXTO;}
\\EMAIL[ ]*                 {BEGIN email;return BMAIL;}
\/EMAIL[ ]*                 {return EMAIL;}
<email>[\.a-zA-z0-9@_\- ]*   {BEGIN 0; yylval.str=strdup(yytext);return TEXTO;}
\\URL[ ]*                   {BEGIN url;return BURL;}
\/URL[ ]*                   {return EURL;}
<url>[a-zA-z0-9\ ]*      {BEGIN 0; yylval.str=strdup(yytext);return TEXTO;}
\\AFF[ ]*                   {BEGIN aff; return BAFF;}
\/AFF[ ]*                   {return EAFF;}
<aff>[a-zA-z0-9\ ]*      {BEGIN 0; yylval.str=strdup(yytext);return TEXTO;}
\\DATE[ ]*                  {BEGIN date; return BDATE;}
\/DATE[ ]*                  {return EDATE;}
<date>[a-zA-Z0-9\ ]*     {BEGIN 0;yylval.str=strdup(yytext);return TEXTO;}
\\INST[ ]*                  {BEGIN inst; return BINST;}
\/INST[ ]*                  {return EINST;}
<inst>[a-zA-Z\ ]*        {BEGIN 0; yylval.str=strdup(yytext);return TEXTO;}
\\BKEYS[ ]*					{return BKEYS;}
\/EKEYS[ ]* 					{return EKEYS;}
\\KEY[ ]*                   {BEGIN key;return BKEY;}
\/KEY[ ]*                   {return EKEY;}
<key>[a-zA-Z\ ]*         {BEGIN 0;yylval.str=strdup(yytext);return TEXTO;}
\\BABS[ ]*                  {return BABS;}
\/EABS[ ]*                  {return EABS;}
\\BPARA[ ]*                 {BEGIN para;return BPARA;}
<para>\/EPARA[ ]*           {BEGIN 0;return EPARA;}
<para>[A-Za-z0-9áàãÃÂéÈèíÌÍìóòõÕôÔúÙùç,;.:_\-!?\+\*(&) ]*        {yylval.str=strdup(yytext);return TEXTO;}
<para>www[.][/_.a-zA-Z\ ]*  {yylval.str=strdup(yytext);return TEXTO;}
<para>\\BFOOT[ ]*           {return BFOOT;}
<para>\/EFOOT[ ]*           {return EFOOT;}
<para>\\BREF[ ]*            {return BREF;}
<para>\/EREF[ ]*            {return EREF;}
<para>\\BXREF[ ]*           {return BXREF;}
<para>\/EXREF[ ]*           {return EXREF;}
<para>\\BCIT[ ]*            {return BCIT;}
<para>\/ECIT[ ]*            {return ECIT;}
<para>\\BITERM[ ]*          {return BITERM;}
<para>\/EITERM[ ]*          {return EITERM;}
<para>\\BBOLD[ ]*           {return BBLOD;}
<para>\/EBOLD[ ]*           {return EBOLD;}
<para>\\BACRONYM[ ]*        {return BACRONYM;}
<para>\/EACRONYM[ ]*        {return EACRONYM;}
<para>\\TITLE[ ]*           {return BTITLE;}
<para>\/TITLE[ ]*           {return ETITLE;}
<para>\\BITALIC[ ]*             {return BITALIC;}
<para>\/EITALIC[ ]*             {return EITALIC;}
<para>\\BINLINE[ ]*             {return BINLINE;}
<para>\/EINLINE[ ]*             {return EINLINE;}
\\BAKN[ ]*                  {return BAKN;}
\/EAKN[ ]*                  {return EAKN;}
\\BBODY[ ]*                 {return BBODY;}
\/EBODY[ ]*                 {return EBODY;}
\\BCHAP[ ]*                 {return BCHAP;}
\/ECHAP[ ]*                 {return ECHAP;}
\\BSEC[ ]*                  {return BSEC;}
\/ESEC[ ]*                  {return ESEC;}
\\BSUBSEC[ ]*               {return BSUBSEC;}
\/ESUBSEC[ ]*               {return ESUBSEC;}
\\BSUBSUBSECTION[ ]*        {return BSUBSUBSECTION;}
\/ESUBSUBSECTION[ ]*        {return ESUBSUBSECTION;}
\\BLIST[ ]*                 {return BLIST;}
\/ELIST[ ]*                 {return ELIST;}
\\BDESC[ ]*                 {return BDESC;}
\/EDESC[ ]*                 {return EDESC;}
\\BITEM[ ]*                 {return BITEM;}
\/EITEM[ ]*                 {return EITEM;}
\\BNUM[ ]*                 {return BNUM;}
\/ENUM[ ]*                  {return ENUM;}
\\CODE[ ]*                 {BEGIN code;return BCODE;}
<code>\/CODE[ ]*           {BEGIN 0;return ECODE;}
\\BSUM[ ]*                  {return BSUM;}
\/ESUM[ ]*                  {return ESUM;}
\\BFIG[ ]*                  {return BFIG;}
\/EFIG[ ]*                  {return EFIG;}
\\BGRAPH[ ]*                {return BGRAPH;}
\/EGRAPH[ ]*                {return EGRAPH;}
\\BCAPTION[ ]*              {return BCAPTION;}
\/ECAPTION[ ]*              {return ECAPTION;}
\\BTABLE[ ]*                {return BTABLE;}
\/ETABLE[ ]*                {return ETABLE;}
\\BBM[ ]*                    {return BBM;}
\/EBM[ ]*                    {return EBM;}
[A-Za-z0-9áàãÃÂéÈèíÌÍìóòõÕôÔúÙùç,;.:_\-!?\+\*(&)""\{\} ]+ {yylval.str=strdup(yytext);return TEXTO;}
<code>[A-Za-z0-9áàãÃÂéÈèíÌÍìóòõÕôÔúÙùç,;.:_\-!?\+\*(&)""\{\}\n ]+ {yylval.str=strdup(yytext);return TEXTO;}
[\n\t ] ;
