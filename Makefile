all:

c1:
	bison -d -v -r all parser_test.y
	flex lexertest.l
	gcc lex.yy.c parser_test.tab.c cgen.c -lfl
	./a.out < c1.tc > c1output.c

c2:
	bison -d -v -r all parser_test.y
	flex lexertest.l
	gcc lex.yy.c parser_test.tab.c cgen.c -lfl
	./a.out < c2.tc > c2output.c
w1:
	bison -d -v -r all parser_test.y
	flex lexertest.l
	gcc lex.yy.c parser_test.tab.c cgen.c -lfl
	./a.out < w1.tc > w1output.c

w2:
	bison -d -v -r all parser_test.y
	flex lexertest.l
	gcc lex.yy.c parser_test.tab.c cgen.c -lfl
	./a.out < w2.tc > w2output.c

c1res:
	gcc -std=c99 -Wall c1output.c 
	./a.out

c2res:
	gcc -std=c99 -Wall c2output.c 
	./a.out
w1res:
	gcc -std=c99 -Wall w1output.c 
	./a.out
w2res:
	gcc -std=c99 -Wall w2output.c 
	./a.out



	
test: 
	bison -d -v -r all parser_test.y
	flex lexertest.l
	gcc lex.yy.c parser_test.tab.c cgen.c -lfl
	./a.out < test.tc > testoutput.c

