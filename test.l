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


 
{INT_CON}   { printf("Token INTEGER_POS_CONST: %s\n", yytext); }

{REAL_CON}   { printf("Token REAL_POS_CONST: %s\n", yytext);
 }
("true"|"false") { printf("Token BOOLEAN_CONST: %s\n", yytext); }

{KEYWORD} { printf("Token KEYWORD_CONST: %s\n", yytext); }

{ID}        { printf("Token IDENTIFIER: %s\n", yytext); }

	/*/////////// Strings & Comments //////////*/

"\""         { BEGIN(string); printf("Token CONST_STRING: \""); }
 
<string>"\\""\""  {printf("\\\"");}
<string>"\\""n" {printf("\\n");}
<string>"\\""t" {printf("\\t");}
<string>"\\""r" {printf("\\r");}
<string>\n  	{BEGIN(SE);lineNum++;}
<string>"\""    { BEGIN(INITIAL); printf("\"\n"); }
<string>.  	{ECHO;}	
	/* Nom-nom(eat it) */





	/*////////// ERROR HANDLING ///////////*/

{INT_CON_ERROR} { printf("Line %d: Number format ERROR (Zero padding is not allowed!): %s\n", lineNum, yytext); } /* na ektupwsw kai olh thn grammh, kai return EOF*/
 	

{ID_ERROR} { printf("Line %d: Identifier Error: %s\n", lineNum, yytext); } /* na ektupwsw kai olh thn grammh, kai return EOF*/

<SE>"\\""\""  {printf("\\\"");}
<SE>"\\""n" {printf("\\n");}
<SE>"\\""t" {printf("\\t");}
<SE>"\\""r" {printf("\\r");}
<SE>\n  	{lineNum++;}
<SE>"\"" { BEGIN(INITIAL); printf("\"\nString ERROR - Multiple String lines\n");}  
	/*////////////////////////////////////*/








[ \r\t]		/* skip whitespace */
\n 			++lineNum;
<<EOF>> 	return EOF;  

.           {printf("Unrecognised Token %s in line %d:\n",yytext,lineNum);} /* na ektupwsw kai olh thn grammh, kai return EOF*/


%%
int main() { 
  int token;
  while ( (token = yylex()) != EOF )
    printf("Line %d Token %d: %s\n", lineNum, token, yytext);
}
