codea: list.o tree.o y.tab.o lex.yy.o code_generator.o codegen.o
	gcc -g list.o y.tab.o lex.yy.o -ly -ll -o codea

codegen.o: codegen.c
	gcc -g -c -pedantic -Wall codegen.c

codegen.c: codegen.bfe
	bfe < codegen.bfe | ./iburg > codegen.c

tree.o: tree.c tree.h
	gcc -g -c -pedantic -Wall tree.c

code_generator.o: code_generator.c code_generator.h
	gcc -g -c -pedantic -Wall code_generator.c

list.o: list.c list.h
	gcc -g -c -pedantic -Wall list.c

oxout.y oxout.l: gram.y scanner.l
	ox gram.y scanner.l

y.tab.c y.tab.h: oxout.y
	yacc -d oxout.y

lex.yy.c: oxout.l
	lex oxout.l

y.tab.o: y.tab.c
	cc -c y.tab.c

lex.yy.o: lex.yy.c y.tab.h
	cc -c lex.yy.c

clean:
	rm -f lex.yy.c y.output y.tab.c y.tab.h lex.yy.o list.o .oxout.l oxout.l oxout.y y.tab.o code_generator.o codegen.o tree.o