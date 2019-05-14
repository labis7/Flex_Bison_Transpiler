%{
  #include <stdio.h>
   #include <string.h>  
  #include "cgen.h"
  #include  "parser_test.tab.h"

void cleanup();
 int line_num = 1;
 
 int old_p=0;
int b_pointer=0;
%}
%x string 
%x comment


INT_CON      ("0")|([1-9]([0-9])*)
REAL	     ({INT_CON})(".")("0")*({INT_CON}) 	   
REAL_CON     ({REAL})([Ee](("+")|("-"))?({INT_CON}))?
ID           [a-zA-Z][0-9a-zA-Z_]*
STRING_L       ((\')(\\[ntr\\\'\"]|[^\n])*(\'))|((\")((\\[ntr\\\'\"]|[^\"\n]))*(\"))



ID_ERROR          (("_")|({INT_CON}))[0-9a-zA-Z_]*
	
	/* 0123 OR 0123.5 OR 0123.5E+01 */
INT_CON_ERROR	  ((("0")+(({INT_CON})|({REAL_CON})))|(("0")*({REAL})[Ee](("+")|("-"))?("0")+({INT_CON})))
	 
	
%% 


 
{INT_CON}  	        { yylval.str = strdup(yytext);strcat(buff,yytext); return POSINT; }
{REAL_CON}   		{ yylval.str = strdup(yytext);strcat(buff,yytext); return REAL; }
 
  			/*///////////////// KEYWORDS ///////////////////*/

true 			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_TRUE; }
false 			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_FALSE; }
int           		{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_INT; }
real			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_REAL; }
bool			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_BOOL; }
string			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_STRING; }
else			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_ELSE; }
if			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_IF; }
fi			{strcat(buff,yytext); return KW_FI;} 
while			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_WHILE; }
loop			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_LOOP; }
pool			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_POOL; }
const			{strcat(buff,yytext); return KW_CONST; }
let			{strcat(buff,yytext); return KW_LET;} 		
then			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_THEN; }		
return			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_RETURN; }	
not			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_NOT; }	
and			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_AND; }
or			{ yylval.str = strdup(yytext);strcat(buff,yytext); return KW_OR; }
start			{strcat(buff,yytext); return KW_START;}



			/*///////////////// Function IDs ///////////////////*/

readString		{yylval.str = strdup(yytext);strcat(buff,yytext); return READSTRING_FUNC;}
readInt			{yylval.str = strdup(yytext);strcat(buff,yytext); return READINT_FUNC;}	
readReal		{yylval.str = strdup(yytext);strcat(buff,yytext); return READREAL_FUNC;}
writeString		{yylval.str = strdup(yytext);strcat(buff,yytext); return WRITESTRING_FUNC;}
writeInt		{yylval.str = strdup(yytext);strcat(buff,yytext); return WRITEINT_FUNC;}
writeReal		{yylval.str = strdup(yytext);strcat(buff,yytext); return WRITEREAL_FUNC;}

			/*///////////////// OPERATORS ///////////////////*/
"+"         		{strcat(buff,yytext);return '+';}
"-"         		{strcat(buff,yytext);return '-';}
"*"         		{strcat(buff,yytext);return '*';}
"/"         		{strcat(buff,yytext);return '/';}
"%"			{strcat(buff,yytext);return '%';} 
"="			{ yylval.str = strdup(yytext);strcat(buff,yytext); return EQUAL_OP; }
"!="			{ yylval.str = strdup(yytext);strcat(buff,yytext); return NOT_EQUAL_OP; }
"<"			{ yylval.str = strdup(yytext);strcat(buff,yytext); return LESS_OP; }
"<="			{ yylval.str = strdup(yytext);strcat(buff,yytext); return LESS_EQUAL_OP; }
"<-"                    {strcat(buff,yytext); return ASSIGN;}


			/*///////////////// DELIMITERS ///////////////////*/
"("			{strcat(buff,yytext);return '(';}
")"			{strcat(buff,yytext);return ')';}
"["			{strcat(buff,yytext);return '[';}
"]"			{strcat(buff,yytext);return ']';}
"{"			{strcat(buff,yytext);return '{';}
"}"			{strcat(buff,yytext);return '}';}
":"			{strcat(buff,yytext);return ':';}
";"			{strcat(buff,yytext);return ';';}
","			{strcat(buff,yytext); return ',';}

"=>" 			{strcat(buff,yytext); return FUNC_START_ARROW;}





{ID}       		{ yylval.str = strdup(yytext);strcat(buff,yytext); return IDENTIFIER; }



	/*/////////// Strings & Comments //////////*/
	
{STRING_L}  		{yylval.str = strdup(yytext);strcat(buff,yytext); return STRING;}
	


"--"[^\n]*  		{yylval.str = strdup(yytext+2);strcat(buff,yytext); return LINE_COMMENT;}  /* Line Commend  */ /* Returns only the usefull content  */
					
					/* Multiline Comment */

"(*"                    {BEGIN(comment); cleanup();}//cleaning up buff for the new multiline comment 	
					

<comment>(("*"+[^*)])|([^*]))*    {b_pointer = 0;  while (yytext[b_pointer] != '\0') {
    			 buff[old_p + b_pointer] = yytext[b_pointer];
   			 b_pointer++;}old_p=b_pointer;}	
<comment>"*"		{buff[old_p]='*';b_pointer++;old_p+=1;}
<comment>"*"+")"        { BEGIN(INITIAL);b_pointer=0;		while(b_pointer<=strlen(buff))
									{if(buff[b_pointer] == '\n') 											line_num++;
									  b_pointer++;  
									} yylval.str = strdup(buff);  return MLINE_COMMENT; }







	/*////////// ERROR HANDLING ///////////*/

{INT_CON_ERROR} { printf("Line %d: Number format ERROR (Zero padding is not allowed!): %s\n", line_num, yytext); } 

{ID_ERROR} { printf("Line %d: Identifier Error:\t%s\n", line_num, yytext); } 


	/*////////////////////////////////////*/








[ \r\t]		{strcat(buff,yytext);}/* skip whitespace */
\n 		{cleanup();	++line_num;}
<<EOF>> 	return EOF;  

.           {printf("Unrecognised Token %s in line %d:\n",yytext,line_num); return EOF;} 

%%



void cleanup(){
	
	b_pointer = 0;old_p=0;
	while(buff[b_pointer]!='\0') 
	{
		buff[b_pointer]='\0';//clean up
		b_pointer++;
	}
	b_pointer = 0;old_p=0;
}

/*
int main() { 
  int token;
  while ( (token = yylex()) != EOF ){
	
	//printf("Line %d Token %s:\t %s\n",line_num,s,yytext );
	//printf("Line %d Token %d: %s\n", line_num, token, yytext);
  }	
}
*/
