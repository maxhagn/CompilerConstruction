GCC=gcc -g
CC=gcc -g

codea: y.tab.o lex.yy.o symbol_table.o tree_grammar.o code_generator.o codegen.o
	$(GCC) -g symbol_table.o tree_grammar.o codegen.o code_generator.o y.tab.o lex.yy.o -ly -ll -o codea

codegen.o: codegen.c
	$(GCC) -g -c -pedantic -Wall codegen.c

codegen.c: codegen.bfe
	bfe < codegen.bfe | iburg > codegen.c

tree.o: tree_grammar.c tree_grammar.h
	$(GCC) -g -c -pedantic -Wall tree_grammar.c

code_generator.o: code_generator.c code_generator.h
	$(GCC) -g -c -pedantic -Wall code_generator.c

symbol_table.o: symbol_table.c symbol_table.h
	$(GCC) -g -c -pedantic -Wall symbol_table.c

oxout.y oxout.l: parser.y scanner.l
	ox parser.y scanner.l

y.tab.c y.tab.h: oxout.y
	yacc -vd oxout.y

lex.yy.c: oxout.l
	flex oxout.l

y.tab.o: y.tab.c
	$(CC) -c y.tab.c

lex.yy.o: lex.yy.c y.tab.h
	$(CC) -c lex.yy.c

clean:
	rm -f lex.yy.c y.output y.tab.c y.tab.h lex.yy.o symbol_table.o codea oxout.l oxout.y y.tab.o code_generator.o codegen.o tree.o