all:

test:
	bison -d -v -r all parser_test.y
	flex lexertest.l
	gcc lex.yy.c parser_test.tab.c cgen.c -lfl
	./a.out < test.in > coutput.c

test1:
	bison -d -v -r all parser_test.y
	flex lexertest.l
	gcc lex.yy.c parser_test.tab.c cgen.c -lfl
	./a.out < test1.in > coutput.c
res:
	gcc -std=c99 -Wall coutput.c 
	./a.out
