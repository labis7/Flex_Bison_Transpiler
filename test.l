%{
  #include <stdio.h>

  int lineNum = 1;
%}

KEYWORD	    ("int")|("real")|("bool")|("string")|("true")|("false")|("if")|("else")|("fi")|("while")|("loop")|("pool")|("const")|("let")|("break")|("return")|("not")|("and")|("or")|("start")

DIGIT       [0-9]([a-z])?
NUMBER      [0-9]([0-9])?
DECIMAL     ("."{NUMBER})|({NUMBER}("."{NUMBER}?)?)

ID          [a-zA-Z_][0-9a-zA-Z_]*

%%



{DIGIT}		{ printf("Line %d: Found the digit %s\n", lineNum, yytext); }

{NUMBER}   { printf("Line %d: Found the number %s\n", lineNum, yytext); }

{KEYWORD} { printf("Line %d: Found the keyword %s\n", lineNum, yytext); }


{ID}        { printf("Line %d: Found the identifier %s\n", lineNum, yytext); }


[ \r\t]		/* skip whitespace */
\n 			++lineNum;
<<EOF>> 	return EOF;

.           { printf("Line %d: Error %s\n", lineNum, yytext); }


%%
int main() { 
  int token;
  while ( (token = yylex()) != EOF )
    printf("Line %d Token %d: %s\n", lineNum, token, yytext);
}
