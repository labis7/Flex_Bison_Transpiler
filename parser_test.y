%{
  #include <stdio.h>
  #include "cgen.h"
  #include <string.h>
  extern int yylex(void);
  extern int line_num;
  int check(char a,char b);
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
%type <str> main main_internals func_parameters func_decl1 decl_body_part_c decl_form_c
%type <str> expr if_st decl_assign decl_form ident_form_part decl_list decl decl_body_part body func_body_part 

%left '-' '+'
%left '*' '/'

%%

input:  
decl_list KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT FUNC_START_ARROW '{' body '}'
//|input func_decl1 main 
{ 
  if (yyerror_count == 0) {
    printf("\n\n");//puts(c_prologue);
    printf("Expression evaluates to: \n\n%s\n\nint main(){\n%s\n}\n",$1,$11); 
  }  
}
;

body:
	 { $$="";}
|decl_list {$$=template("%s",$1);}
;



decl_list:
decl		 		{ $$ = template("%s",$1); }
//|IDENTIFIER  ASSIGN '(' ')' ':' data_type FUNC_START_ARROW '{''}'  {$$ = template("%s %s(%s);",$7,$2);}//const func		
|decl_list decl 		{ $$ = template("%s\n%s", $1, $2); }
;

decl:
KW_LET decl_body_part 							{ $$ = template("%s", $2); }   //let x,y....
|KW_CONST  decl_body_part_c						{ $$ = template("const %s", $2); }//const x,y...
|KW_CONST func_decl							{ $$ = template("const %s", $2); }//const func
;

func_decl:
ident_form_part  ASSIGN '(' func_parameters')' ':' data_type FUNC_START_ARROW '{''}'  {$$ = template("%s %s(%s);",$7,$1,$4);
											int res=check($1[0],$1[strlen($1)-1]);
											if(res) return -1;}
|ident_form_part  ASSIGN '(' func_parameters')' ':' data_type';'  {$$ = template("%s %s(%s);",$7,$1,$4);
									int res=check($1[0],$1[strlen($1)-1]);
									if(res) return -1;}//decl
|ident_form_part  ASSIGN '(' func_parameters')' ':' '['']'data_type';'  {$$ = template("%s *%s(%s);",$9,$1,$4);
									int res=check($1[0],$1[strlen($1)-1]);
									if(res) return -1;}//decl,returns pointer
|ident_form_part  ASSIGN '(' func_parameters')' ':' '['']'data_type FUNC_START_ARROW '{''}'  {$$ = template("%s *%s(%s);",$9,$1,$4);
												int res=check($1[0],$1[strlen($1)-1]);
												 if(res) return -1;}//returns pointer
;

decl_body_part:
decl_form ':' data_type ';' 		{  $$ = template("%s %s;", $3, $1); }  //{ yyerror("Wrong way nigg\n");return -1;}
;
 
decl_body_part_c: //const
decl_form_c ':' data_type ';' 		{  $$ = template("%s %s;", $3, $1); }
;

decl_form_c://const
ident_form_part ASSIGN expr		    {  $$ = template("%s = %s", $1, $3); }
|decl_form_c ',' ident_form_part ASSIGN expr{  $$ = template("%s , %s = %s", $1, $3,$5); }
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
|IDENTIFIER '['']'             		{$$ = template ("*%s",$1);}  //i[10]
|IDENTIFIER '[' POSINT']'               {$$ = template ("%s[%s]",$1,$3);} 
;

///////////////////////////////////////////

func_parameters:
%empty {$$="";}
|ident_form_part ':' data_type			   {$$ = template("%s %s",$3,$1);}
|func_parameters ',' ident_form_part ':' data_type {$$ = template("%s ,%s %s",$1,$5,$3);}
;


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


int check(char a,char b){
if((a=='*')||(b==']')){
    yyerror("\nWrong identifier format(No '[]' allowed!\n)\n");
    return 1;
//printf("\n\n%c%c\n",a,b);
}
else 
return 0;
}



