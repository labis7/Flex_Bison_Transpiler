%{
  #include <stdio.h>

  int lineNum = 1;
%}
%x string 
%x SE

KEYWORD	    ("int")|("real")|("bool")|("string")|("true")|("false")|("if")|("else")|("fi")|("while")|("loop")|("pool")|("const")|("let")|("break")|("return")|("not")|("and")|("or")|("start")
INT_CON      ("0")|([1-9]([0-9])*)
REAL	     ({INT_CON})(".")("0")*({INT_CON}) 	   
REAL_CON     ({REAL})([Ee](("+")|("-"))?({INT_CON}))?
ID           [a-zA-Z][0-9a-zA-Z_]*




ID_ERROR          (("_")|({INT_CON}))[0-9a-zA-Z_]*
	
	/* 0123 OR 0123.5 OR 0123.5E+01 */
INT_CON_ERROR	  ((("0")+(({INT_CON})|({REAL_CON})))|(("0")*({REAL})[Ee](("+")|("-"))?("0")+({INT_CON})))
	 
	
%% 


 
{INT_CON}   { printf("Line %d: Found the positive integer constant: %s\n", lineNum, yytext); }

{REAL_CON}   { printf("Line %d: Found the positive real constant: %s\n", lineNum, yytext);
 }
("true"|"false") { printf("Line %d: Found the Boolean: %s\n", lineNum, yytext); }

{KEYWORD} { printf("Line %d: Found the Keyword:  %s\n", lineNum, yytext); }

{ID}        { printf("Line %d: Found the Identifier: %s\n", lineNum, yytext); }

	/*/////////// Strings & Comments //////////*/

"\""         { BEGIN(string); printf("String started at line: %d\nString Content: ", lineNum); }
 
<string>"\\""\""  {printf("\"");}
<string>"\\""n" {printf("(LF)");}
<string>"\\""t" {printf("(TAB)");}
<string>"\\""r" {printf("(CR)");}
<string>\n  	{BEGIN(SE);lineNum++;}
<string>"\"" { BEGIN(INITIAL); printf("\nString ended at line: %d\n", lineNum); }
	
	/* Nom-nom(eat it) */





	/*////////// ERROR HANDLING ///////////*/

{INT_CON_ERROR} { printf("Line %d: Number format ERROR (Zero padding is not allowed!): %s\n", lineNum, yytext); } 
 	

{ID_ERROR} { printf("Line %d: Identifier Error: %s\n", lineNum, yytext); } 

<SE>"\\""\""  {printf("\"");}
<SE>"\\""n" {printf("(LF)");}
<SE>"\\""t" {printf("(TAB)");}
<SE>"\\""r" {printf("(CR)");}
<SE>\n  	{lineNum++;}
<SE>"\"" { BEGIN(INITIAL); printf("\nString ended at line: %d\tString ERROR - Multiple String lines\n", lineNum); }
	/*////////////////////////////////////*/





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
