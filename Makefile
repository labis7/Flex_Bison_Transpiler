all:
	bison -d -v -r all parser_test.y
	flex lexertest.l
	gcc lex.yy.c parser_test.tab.c cgen.c -lfl
	./a.out < test1.in
