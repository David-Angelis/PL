report : y.tab.o lex.yy.o report2007.o
	gcc -o report y.tab.o lex.yy.o report2007.o

y.tab.o: y.tab.c
	gcc -c y.tab.c
lex.yy.o : lex.yy.c
	gcc -c lex.yy.c
	
lex.yy.c :report.l y.tab.h
	flex report.l

y.tab.c : gramatica.y 
	yacc -d gramatica.y

report2007.o: report2007.h
	gcc -c -g report2007.c 

clean :
	rm *.o 