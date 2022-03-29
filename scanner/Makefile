all:
	flex --yylineno scanner.l && gcc scanner.c lex.yy.c -o scanner
clean:
	rm -f lex.yy.c scanner