%{
  #include <stdio.h>
  
  int lineNum = 1;
%}
%x string 
%x comment

KEYWORD	    ("int")|("real")|("bool")|("string")|("true")|("false")|("if")|("else")|("fi")|("while")|("loop")|("pool")|("const")|("let")|("break")|("return")|("not")|("and")|("or")|("start")
INT_CON      ("0")|([1-9]([0-9])*)
REAL	     ({INT_CON})(".")("0")*({INT_CON}) 	   
REAL_CON     ({REAL})([Ee](("+")|("-"))?({INT_CON}))?
ID           [a-zA-Z][0-9a-zA-Z_]*




ID_ERROR          (("_")|({INT_CON}))[0-9a-zA-Z_]*
	
	/* 0123 OR 0123.5 OR 0123.5E+01 */
INT_CON_ERROR	  ((("0")+(({INT_CON})|({REAL_CON})))|(("0")*({REAL})[Ee](("+")|("-"))?("0")+({INT_CON})))
	 
	
%% 


 
{INT_CON}  	        printf("Line %d: Token INTEGER_POS_CONST:%s\n",lineNum,yytext);
{REAL_CON}   		printf("Line %d: Token REAL_POS_CONST:\t%s\n",lineNum,yytext);
("true"|"false") 	printf("Line %d: Token BOOLEAN_CONST:\t%s\n",lineNum,yytext);	
 
  			/*///////////////// KEYWORDS ///////////////////*/
int           		printf("Line %d: Token KEYWORD_INT:\t%s\n",lineNum,yytext);
real			printf("Line %d: Token KEYWORD_REAL:\t%s\n",lineNum,yytext);
bool			printf("Line %d: Token KEYWORD_BOOL:\t%s\n",lineNum,yytext);
string			printf("Line %d: Token KEYWORD_STRING:\t%s\n",lineNum,yytext);
else			printf("Line %d: Token KEYWORD_ELSE:\t%s\n",lineNum,yytext);
if			printf("Line %d: Token KEYWORD_IF:\t%s\n",lineNum,yytext);
fi			printf("Line %d: Token KEYWORD_FI:\t%s\n",lineNum,yytext);
while			printf("Line %d: Token KEYWORD_WHILE:\t%s\n",lineNum,yytext);
loop			printf("Line %d: Token KEYWORD_LOOP:\t%s\n",lineNum,yytext);
pool			printf("Line %d: Token KEYWORD_POOL:\t%s\n",lineNum,yytext);
const			printf("Line %d: Token KEYWORD_CONST:\t%s\n",lineNum,yytext);
let			printf("Line %d: Token KEYWORD_LET:\t%s\n",lineNum,yytext);		
break			printf("Line %d: Token KEYWORD_BREAK:\t%s\n",lineNum,yytext);		
return			printf("Line %d: Token KEYWORD_RETURN:\t%s\n",lineNum,yytext);	
not			printf("Line %d: Token KEYWORD_NOT:\t%s\n",lineNum,yytext);	
and			printf("Line %d: Token KEYWORD_AND:\t%s\n",lineNum,yytext);	
or			printf("Line %d: Token KEYWORD_OR:\t%s\n",lineNum,yytext);
start			printf("Line %d: Token KEYWORD_START:\t%s\n",lineNum,yytext);



			/*///////////////// OPERATORS ///////////////////*/
"+"  	            	printf("Line %d: Token PLUS_OP:\t%s\n",lineNum,yytext);
"-"			printf("Line %d: Token MINUS_OP:\t%s\n",lineNum,yytext);
"*"			printf("Line %d: Token STAR_OP:\t%s\n",lineNum,yytext);
"/"			printf("Line %d: Token SLASH_OP:\t%s\n",lineNum,yytext);
"%"			printf("Line %d: Token PERC_OP:\t%s\n",lineNum,yytext);	
"="			printf("Line %d: Token EQUAL_OP:\t%s\n",lineNum,yytext);
"!="			printf("Line %d: Token NOT_EQUAL_OP:\t%s\n",lineNum,yytext);
"<"			printf("Line %d: Token LESS_OP:\t%s\n",lineNum,yytext);
"<="			printf("Line %d: Token LESS_EQUAL_OP:\t%s\n",lineNum,yytext);
"and"			printf("Line %d: Token AND_OP:\t%s\n",lineNum,yytext);
"or"			printf("Line %d: Token OR_OP:\t%s\n",lineNum,yytext);
"not"			printf("Line %d: Token NOT_OP:\t%s\n",lineNum,yytext);
"<-"                    printf("Line %d: Token ARROW_OP:\t%s\n",lineNum,yytext);


			/*///////////////// DELIMITERS ///////////////////*/
";"			printf("Line %d: Token SEMICOLON_OP:\t%s\n",lineNum,yytext);
"("			printf("Line %d: Token LEFT_PARENTHESIS_OP:\t%s\n",lineNum,yytext);
")"			printf("Line %d: Token RIGHT_PARENTHESIS_OP:\t%s\n",lineNum,yytext);
","			printf("Line %d: Token COMMA_OP:\t%s\n",lineNum,yytext);
"["			printf("Line %d: Token LEFT_SQR_PARENTHESIS_OP:\t%s\n",lineNum,yytext);
"]"			printf("Line %d: Token RIGHT_SQR_PARENTHESIS_OP:\t%s\n",lineNum,yytext);
":"			printf("Line %d: Token COLON_OP:\t%s\n",lineNum,yytext);


{ID}        		printf("Line %d: Token IDENTIFIER:\t%s\n",lineNum,yytext);













	/*/////////// Strings & Comments //////////*/

"\""         { BEGIN(string); printf("Token CONST_STRING:\t\t\""); }
 
<string>"\\""\""  {printf("\\\"");}
<string>"\\""n" {printf("\\n");}
<string>"\\""t" {printf("\\t");}
<string>"\\""r" {printf("\\r");}
<string>\n  	{printf("\nString ERROR - Multiple String lines\n"); lineNum++; return EOF;}
<string>"\""    { BEGIN(INITIAL); printf("\"\n"); }
<string>.  	{ECHO;}	
	/* Nom-nom(eat it) */


"--"[^\n]*  		/* eat line comments */

"(*"                    BEGIN(comment); 

<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++lineNum;
<comment>"*"+")"        { BEGIN(INITIAL); printf("comment ended at line: %d\n", lineNum); }







	/*////////// ERROR HANDLING ///////////*/

{INT_CON_ERROR} { printf("Line %d: Number format ERROR (Zero padding is not allowed!): %s\n", lineNum, yytext); } /* na ektupwsw kai olh thn grammh, kai return EOF*/
 	

{ID_ERROR} { printf("Line %d: Identifier Error:\t%s\n", lineNum, yytext); } 


	/*////////////////////////////////////*/








[ \r\t]		/* skip whitespace */
\n 			++lineNum;
<<EOF>> 	return EOF;  

.           {printf("Unrecognised Token %s in line %d:\n",yytext,lineNum); return EOF;} /* na ektupwsw kai olh thn grammh, kai return EOF*/


%%
int main() { 
  int token;
  while ( (token = yylex()) != EOF ){
	
	//printf("Line %d Token %s:\t %s\n",lineNum,s,yytext );
	//printf("Line %d Token %d: %s\n", lineNum, token, yytext);
  }	
}
