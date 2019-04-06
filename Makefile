all:
	flex test.l
	gcc -o analyzer lex.yy.c -lfl
	./analyzer < test.in
