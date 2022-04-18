GCC=gcc -g
BFE=bfe
BURG=iburg
OX=ox
YACC=yacc
FLEX=flex

codea: helper.o symbol_list.o tree_grammar.o code_generator.o codegen.o y.tab.o lex.yy.o
	$(CC) helper.o symbol_list.o tree_grammar.o codegen.o code_generator.o y.tab.o lex.yy.o -ly -ll -o codea

codegen.o: codegen.c
	$(CC) -c -pedantic -Wall codegen.c

codegen.c: codegen.bfe
	$(BFE) < codegen.bfe | $(BURG) > codegen.c

helper.o: helper.c helper.h
	$(CC) -c -pedantic -Wall helper.c

symbol_list.o: symbol_list.c symbol_list.h
	$(CC) -c -pedantic -Wall symbol_list.c

code_generator.o: code_generator.c code_generator.h
	$(CC) -c -pedantic -Wall code_generator.c

tree_grammar.o: tree_grammar.c tree_grammar.h
	$(CC) -c -pedantic -Wall tree_grammar.c

oxout.y oxout.l: parser.y scanner.l
	$(OX) parser.y scanner.l

y.tab.c y.tab.h: oxout.y
	$(YACC) -d oxout.y

lex.yy.c: oxout.l
	$(FLEX) oxout.l

y.tab.o: y.tab.c
	$(CC) -c y.tab.c

lex.yy.o: lex.yy.c y.tab.h
	$(CC) -c lex.yy.c

clean:
	rm -f lex.yy.c y.output y.tab.c y.tab.h lex.yy.o symbol_list.o helper.o .oxout.l oxout.l oxout.y y.tab.o ag