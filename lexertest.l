%{
  #include <stdio.h>
   #include <string.h>  
  #include "cgen.h"
  #include  "parser_test.tab.h"

  int line_num = 1;

%}
%x string 
%x comment
/*
KW	    ("int")|("real")|("bool")|("string")|("true")|("false")|("if")|("else")|("fi")|("while")|("loop")|("pool")|("const")|("let")|("break")|("return")|("not")|("and")|("or")|("start")
*/

INT_CON      ("0")|([1-9]([0-9])*)
REAL	     ({INT_CON})(".")("0")*({INT_CON}) 	   
REAL_CON     ({REAL})([Ee](("+")|("-"))?({INT_CON}))?
ID           [a-zA-Z][0-9a-zA-Z_]*
STRING       (\")[^\n]((\\[ntr\\\'\"]|[^\"\n]))*[^\n](\")



ID_ERROR          (("_")|({INT_CON}))[0-9a-zA-Z_]*
	
	/* 0123 OR 0123.5 OR 0123.5E+01 */
INT_CON_ERROR	  ((("0")+(({INT_CON})|({REAL_CON})))|(("0")*({REAL})[Ee](("+")|("-"))?("0")+({INT_CON})))
	 
	
%% 


 
{INT_CON}  	        { yylval.str = strdup(yytext); return POSINT; }
{REAL_CON}   		{ yylval.str = strdup(yytext); return REAL; }
 
  			/*///////////////// KEYWORDS ///////////////////*/

true 			{ yylval.str = strdup(yytext); return KW_TRUE; }
false 			{ yylval.str = strdup(yytext); return KW_FALSE; }
int           		{ yylval.str = strdup(yytext); return KW_INT; }
real			{ yylval.str = strdup(yytext); return KW_REAL; }
bool			{ yylval.str = strdup(yytext); return KW_BOOL; }
string			{ yylval.str = strdup(yytext); return KW_STRING; }
else			{ yylval.str = strdup(yytext); return KW_ELSE; }
if			{ yylval.str = strdup(yytext); return KW_IF; }
fi			return KW_FI; 
while			{ yylval.str = strdup(yytext); return KW_WHILE; }
loop			return KW_LOOP; 
pool			return KW_POOL;
const			return KW_CONST; 
let			return KW_LET; 		
then			{ yylval.str = strdup(yytext); return KW_THEN; }		
return			{ yylval.str = strdup(yytext); return KW_RETURN; }	
not			{ yylval.str = strdup(yytext); return KW_NOT; }	
and			{ yylval.str = strdup(yytext); return KW_AND; }
or			{ yylval.str = strdup(yytext); return KW_OR; }
start			return KW_START;



			/*///////////////// OPERATORS ///////////////////*/
"+"         		return '+';
"-"         		return '-';
"*"         		return '*';
"/"         		return '/';
"%"			return '%';
"="			return '=';
"!="			{ yylval.str = strdup(yytext); return NOT_EQUAL_OP; }
"<"			{ yylval.str = strdup(yytext); return LESS_OP; }
"<="			{ yylval.str = strdup(yytext); return LESS_EQUAL_OP; }
"<-"                    return ASSIGN;


			/*///////////////// DELIMITERS ///////////////////*/
"("			return '(';
")"			return ')';
"["			return '[';
"]"			return ']';
"{"			return '{';
"}"			return '}';
":"			return ':';
";"			return ';';
","			return ',';

"=>" 			return FUNC_START_ARROW;





{ID}       		{ yylval.str = strdup(yytext); return IDENTIFIER; }



	/*/////////// Strings & Comments //////////*/
	
{STRING}  		{printf("\n\n\n%s",yytext);}
	


"--"[^\n]*  		/* eat line comments */

"(*"                    BEGIN(comment); 

<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*)\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++line_num;
<comment>"*"+")"        { BEGIN(INITIAL); printf("comment ended at line: %d\n", line_num); }







	/*////////// ERROR HANDLING ///////////*/

{INT_CON_ERROR} { printf("Line %d: Number format ERROR (Zero padding is not allowed!): %s\n", line_num, yytext); } /* na ektupwsw kai olh thn grammh, kai return EOF*/
 	

{ID_ERROR} { printf("Line %d: Identifier Error:\t%s\n", line_num, yytext); } 


	/*////////////////////////////////////*/








[ \r\t]		/* skip whitespace */
\n 			++line_num;
<<EOF>> 	return EOF;  

.           {printf("Unrecognised Token %s in line %d:\n",yytext,line_num); return EOF;} /* na ektupwsw kai olh thn grammh, kai return EOF*/


%%

/*
int main() { 
  int token;
  while ( (token = yylex()) != EOF ){
	
	//printf("Line %d Token %s:\t %s\n",line_num,s,yytext );
	//printf("Line %d Token %d: %s\n", line_num, token, yytext);
  }	
}
*/
