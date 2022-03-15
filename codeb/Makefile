all: asma.o test.o

asma.o: asma.s
test.o: test

asma.s:
	gcc -Wall -c asma.s -o asma.o

test:
	gcc -Wall asma.o -o test test.c

clean:
	rm -f asma.o test.o test
