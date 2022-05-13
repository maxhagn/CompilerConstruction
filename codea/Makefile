CC=gcc -g -w
BFE=bfe
BURG=iburg
OX=ox
YACC=yacc
FLEX=flex

codea: helper.o symbol_list.o grammar_tree.o asm_writer.o matcher.o y.tab.o lex.yy.o
	$(CC) helper.o symbol_list.o grammar_tree.o asm_writer.o matcher.o y.tab.o lex.yy.o -ly -ll -o codea

helper.o: helper.c helper.h
	$(CC) -c -pedantic -Wall helper.c

symbol_list.o: symbol_list.c symbol_list.h
	$(CC) -c -pedantic -Wall symbol_list.c

asm_writer.o: asm_writer.c asm_writer.h
	$(CC) -c -pedantic -Wall asm_writer.c

grammar_tree.o: grammar_tree.c grammar_tree.h
	$(CC) -c -pedantic -Wall grammar_tree.c

oxout.y oxout.l: parser.y scanner.l
	$(OX) parser.y scanner.l

y.tab.c y.tab.h: oxout.y
	$(YACC) -d oxout.y

y.tab.o: y.tab.c
	$(CC) -c y.tab.c

lex.yy.c: oxout.l
	$(FLEX) oxout.l

lex.yy.o: lex.yy.c y.tab.h
	$(CC) -c lex.yy.c

matcher.o: matcher.c
	$(CC) -c -pedantic -Wall matcher.c

matcher.c: matcher.bfe
	$(BFE) < matcher.bfe | $(BURG) > matcher.c

clean:
	rm -f asm_writer.o codea matcher.c matcher.o grammar_tree.o helper.o lex.yy.c lex.yy.o oxout.l oxout.y symbol_list.o y.tab.c y.tab.h y.tab.o