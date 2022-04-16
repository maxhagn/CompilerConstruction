ag: symbol_table.o y.tab.o lex.yy.o
	gcc -g symbol_table.o y.tab.o lex.yy.o -ly -ll -o ag

symbol_table.o: symbol_table.c symbol_table.h
	gcc -g -c -pedantic -Wall symbol_table.c

oxout.y oxout.l: parser.y scanner.l
	ox parser.y scanner.l

y.tab.c y.tab.h: oxout.y
	yacc -d oxout.y

lex.yy.c: oxout.l
	lex oxout.l

y.tab.o: y.tab.c
	cc -c y.tab.c

lex.yy.o: lex.yy.c y.tab.h
	cc -c lex.yy.c

clean:
	rm -f lex.yy.c y.output y.tab.c y.tab.h ag lex.yy.o symbol_table.o .oxout.l oxout.l oxout.y y.tab.o