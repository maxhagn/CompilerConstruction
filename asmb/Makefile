all: asmb.o test.o

asma.o: asmb.s
test.o: test

asma.s:
	gcc -Wall -c asmb.s -o asmb.o

test:
	gcc -Wall asmb.o -o test test.c

clean:
	rm -f asmb.o test.o test
