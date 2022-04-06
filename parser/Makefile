all:
	flex scanner.l && yacc -d -v parser.y && gcc lex.yy.c y.tab.c -o parser
clean:
	rm -f lex.yy.c parser y.output y.tab.c y.tab.h