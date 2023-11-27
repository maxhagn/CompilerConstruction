SOURCES = $(shell find AST Config Lexer Logger Parser -name '*.cpp')
HEADERS = $(shell find AST Config Lexer Logger Parser -name '*.h')
TEMPORARIES = $(shell find AST Config Lexer Logger Parser -name '*.o.tmp')
OBJ = ${SOURCES:.cpp=.o}

CC = clang++-14
CFLAGS = -g -O3 -I ./
LLVMFLAGS = `/usr/bin/llvm-config-14 --cxxflags --ldflags --system-libs --libs all`

.PHONY: all

all: language

language: Main.cpp Main.h ${OBJ}
	${CC} ${CFLAGS} ${LLVMFLAGS} ${OBJ} $< -o $@

%.o: %.cpp ${HEADERS}
	${CC} ${CFLAGS} ${LLVMFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ} ${TEMPORARIES} language output output.s

fresh: clean clean_screen build

clean_screen:
	clear

check:
	./Test/test

