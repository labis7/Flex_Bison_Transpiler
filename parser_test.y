%{
  #include <stdio.h>
  #include "cgen.h"
  
  extern int yylex(void);
  extern int line_num;
%}

%union
{
  char* str;
  int num;
}

%define parse.trace
%debug

%token <str> KW_TRUE
%token <str> KW_FALSE
%token <str> KW_INT
%token <str> KW_REAL 
%token <str> KW_BOOL
%token <str> KW_STRING
%token <str> KW_ELSE
%token <str> KW_IF
%token <str> KW_THEN
%token <str> KW_FI
%token <str> KW_WHILE
%token <str> KW_LOOP
%token <str> KW_POOL
%token <str> KW_CONST
%token <str> KW_LET
%token <str> KW_RETURN
%token <str> KW_NOT
%token <str> KW_AND
%token <str> KW_OR
%token <str> KW_START
%token <str> NOT_EQUAL_OP
%token <str> LESS_OP
%token <str> LESS_EQUAL_OP
%token <str> FUNC_START_ARROW

%token <str> IDENTIFIER
%token <str> POSINT 
%token <str> STRING
%token <str> REAL

%token <str> ASSIGN









%start input

%type <str> data_type main_decl main_decl_part multiple_ident func_decl
%type <str> main main_internals func_parameters func_decl1
%type <str> expr if_st decl_assign decl_form ident_form_part decl_list decl decl_body_part


%left '-' '+'
%left '*' '/'

%%

input:  
decl_list //main_decl ';'
//|input func_decl1 main 
{ 
  if (yyerror_count == 0) {
    printf("\n\n");//puts(c_prologue);
    printf("Expression evaluates to: \n%s\n",$1); 
  }  
}
;
/*
main:
 ASSIGN'('')'':' data_type FUNC_START_ARROW '{' main_internals '}'   {$$ = template("\n%s main()\n{\n%s\n}",$5,$8);};


main_internals:
main_decl ';'					       	  {$$ = template("%s;",$1);}
|if_st ';'					  	  {$$ = template("%s;",$1);}
|main_internals if_st ';'				  {$$ = template("%s\n%s;",$1,$2);} //multiple lines support		  
|main_internals main_decl ';'				  {$$ = template("%s\n%s;",$1,$2);} //multiple lines support

;

if_st:
KW_TRUE   {$$=template("true");};

///////////////////////////////////////  Variable/Constant declaration & Assignment  /////////////////////////////////////////////
main_decl:
////Simple assignments///////
IDENTIFIER ASSIGN expr 					  {$$ = template("%s = %s",$1,$3);} //ASSIGNMENT WITHOUT LET
/////////////////////////////
|KW_CONST  main_decl_part ':' data_type					{$$ = template("const %s %s",$4,$2);}//Const x,y<-5 :int;(always assign smth)
|KW_LET multiple_ident ':' data_type 			 	        {$$ = template("%s %s",$4,$2);}//to format let i,y : int;
|KW_LET main_decl_part ':' data_type 			  		{$$ = template("%s %s",$4,$2);}//let i,y <- 10;  or let i,y<-10 ,z<-12 : int ;
|KW_LET main_decl_part ',' multiple_ident ':' data_type 		{$$ = template("%s %s , %s",$6,$2,$4);}//like above + let i,x<-10,y,a : int;	
; 


;

multiple_ident:
multiple_ident ',' IDENTIFIER 				 {$$ = template("%s , %s",$1,$3);}  // i,x,z,var
|multiple_ident ',' IDENTIFIER '[' POSINT ']'  		 {$$ = template("%s , %s[%s]",$1,$3,$5);}  // i[5],x,z[10],var
//assignment for each var(s).
multiple_ident ASSIGN expr     		     		 {$$ = template("%s = %s",$1,$3);}        //x,i <- 10  
|main_decl_part ',' multiple_ident ASSIGN expr 		 {$$ = template("%s , %s = %s",$1,$3,$5);}//x,i<-10 , z<-12;
;
*/

decl_list:
decl		 { $$ = template("%s",$1); }		
|decl_list decl { $$ = template("%s\n%s", $1, $2); }
;

decl:
KW_LET decl_body_part { $$ = template("%s", $2); }
|KW_CONST decl_body_part { $$ = template("const %s", $2); }
;

decl_body_part:
decl_form ':' data_type ';' 		{  $$ = template("%s %s;", $3, $1); }
;


decl_form:
decl_assign				{$$ = template ("%s",$1);}// x<-5 or x
|decl_form ',' decl_assign		{$$ = template ("%s , %s",$1,$3);}//last , (x<-5 or x) 
;

decl_assign:   // declaration of multiple vars, supports diff value 
ident_form_part   			{$$ = template ("%s",$1);}//x or x[]
|ident_form_part ASSIGN expr 		{$$ = template ("%s = %s",$1,$3);}//x<-5 or x[]<-5
;

ident_form_part:
IDENTIFIER 				{$$ = template("%s",$1);}				// x	
|IDENTIFIER '['']'              {$$ = template ("*%s",$1);}  //i[10]
;

///////////////////////////////////////////
/*
func_decl1:
%empty {$$ ="";}
|KW_CONST KW_START {$$ = template("");}
|func_decl KW_CONST KW_START {$$ = template("%s",$1);}
;

func_decl:
//%empty        {$$ = "";}
//| function '{' main_Body  '}'  //it can be a function before main, no just a declaration !!!!!
KW_CONST IDENTIFIER  ASSIGN '(' func_parameters ')' ':' data_type ';'  {$$ = template("%s %s(%s);",$8,$2,$5);}
|func_decl KW_CONST IDENTIFIER  ASSIGN '(' func_parameters ')' ':' data_type ';'  {$$ = template("%s\n%s %s(%s);",$1,$9,$3,$6);}  
;

func_parameters:
%empty {$$ = "";}
|IDENTIFIER ':' data_type			     {$$ = template("%s  %s",$3,$1);}
|IDENTIFIER '['']'':' data_type			     {$$ = template("%s  *%s",$5,$1);}
|func_parameters ',' IDENTIFIER ':' data_type	     {$$ = template("%s , %s %s",$1,$5,$3);}
|func_parameters ',' IDENTIFIER '['']'':' data_type  {$$ = template("%s , %s *%s",$1,$7,$3);}
;

*/
data_type:
 KW_INT     						 {$$ = template("%s", $1);}
|KW_BOOL   						 {$$ = template("%s", $1);}
|KW_REAL   						 {$$ = template("float");}
|KW_STRING   						 {$$ = template("char");}
;
expr:
  POSINT
| REAL
| '(' expr ')'  	{ $$ = template("(%s)", $2); }
| expr '+' expr 	{ $$ = template("%s + %s", $1, $3); }
| expr '-' expr 	{ $$ = template("%s - %s", $1, $3); }
| expr '*' expr 	{ $$ = template("%s * %s", $1, $3); }
| expr '/' expr 	{ $$ = template("%s / %s", $1, $3); }
;

%%
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
