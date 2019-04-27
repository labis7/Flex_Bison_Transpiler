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
///*
%token <str> KW_NOT
%token <str> KW_AND
%token <str> KW_OR

%token <str> NOT_EQUAL_OP
%token <str> LESS_OP
%token <str> LESS_EQUAL_OP
//*/
%token <str> FUNC_START_ARROW
%token <str> KW_START
%token <str> IDENTIFIER
%token <str> POSINT 
%token <str> STRING
%token <str> REAL

%token <str> ASSIGN
%token <str> LINE_COMMENT
%token <str> MLINE_COMMENT

%token <str> READSTRING_FUNC
%token <str> READINT_FUNC
%token <str> READREAL_FUNC
%token <str> WRITESTRING_FUNC
%token <str> WRITEINT_FUNC
%token <str> WRITEREAL_FUNC


//%right KW_THEN KW_ELSE
%nonassoc KW_THEN
%nonassoc KW_ELSE

%start input

%type <str> data_type func_decl cmd_line func_parameters function_call decl_list1 if_stmt while_loop
%type <str> func_parameters_decl decl_body_part_c decl_form_c string comment more printf_func
%type <str> expr decl_assign decl_form ident_form_part decl_list decl decl_body_part body 

%left KW_AND
%left KW_OR
%left EQUAL_OP
%left NOT_EQUAL_OP
%left LESS_OP
%left LESS_EQUAL_OP
%left '-' '+'
%left '*' '/' '%'
%right KW_NOT


%%

input:
decl_list KW_CONST KW_START ASSIGN '(' ')' ':' KW_INT FUNC_START_ARROW '{' body '}'
//|input func_decl1 main 
{ 
  if (yyerror_count == 0) {
    printf("\n\n");//puts(c_prologue);
    //printf("%s",$1);
    printf("Expression evaluates to: \n\n%s\n\nint main(){\n%s\n}\n",$1,$11); 
  }  
}
;



body:
%empty	 { $$="";}
|more {$$=template("%s",$1);}
;

more:
while_loop
|if_stmt
|decl_list1
|printf_func
|more while_loop		{ $$ = template("%s\n%s", $1, $2); }
|more if_stmt	 		{ $$ = template("%s\n%s", $1, $2); }
|more decl_list1 		{ $$ = template("%s\n%s", $1, $2); }
|more printf_func		{ $$ = template("%s\n%s", $1, $2); }

;

decl_list1:
cmd_line
|comment
|decl
;

decl_list:
cmd_line
|comment
|decl		 		{ $$ = template("%s",$1); }		
|decl_list decl 		{ $$ = template("%s\n%s", $1, $2); }
|decl_list cmd_line		{ $$ = template("%s\n%s", $1, $2); }
|decl_list comment		{ $$ = template("%s\n%s", $1, $2); }
;

decl:
KW_LET decl_body_part 							{ $$ = template("%s", $2); }   //let x,y....
|KW_CONST  decl_body_part_c						{ $$ = template("const %s", $2); }//const x,y...95% completed(x,y<-10 format is not supported: #TODO)
|KW_CONST func_decl							{ $$ = template("%s", $2); }//'const' func
;

func_decl:
ident_form_part  ASSIGN '(' func_parameters_decl')' ':' data_type FUNC_START_ARROW '{'body'}'  {$$ = template("%s %s(%s)\n{\n%s\n}\n",$7,$1,$4,$10);
											int res=check($1[0],$1[strlen($1)-1]);
											if(res) return -1;}
|ident_form_part  ASSIGN '(' func_parameters_decl')' ':' data_type';'  {$$ = template("%s %s(%s);",$7,$1,$4);
									int res=check($1[0],$1[strlen($1)-1]);
									if(res) return -1;}//decl
|ident_form_part  ASSIGN '(' func_parameters_decl')' ':' '['']'data_type';'  {$$ = template("%s *%s(%s);",$9,$1,$4);
									int res=check($1[0],$1[strlen($1)-1]);
									if(res) return -1;}//decl,returns pointer
|ident_form_part  ASSIGN '(' func_parameters_decl')' ':' '['']'data_type FUNC_START_ARROW '{'body'}'  {$$ = template("%s *%s(%s)\n{\n%s\n}\n",$9,$1,$4,$12);
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
|IDENTIFIER '[' expr']'               {$$ = template ("%s[%s]",$1,$3);} 
;


//////////////////////////////// IF STMTs & WHILE LOOPs  //////////////////////////////////////////
if_stmt:
/*
KW_IF expr KW_THEN body KW_ELSE body    	 { $$ = template("if %s\n\n   {%s}\nelse\n {%s}",$2, $4, $6); }
|KW_IF expr KW_THEN body  			 { $$ = template("if %s\n\n   {%s}\n",$2, $4); }
|KW_FI';'
*/



KW_IF expr KW_THEN body 		                {$$ = template("if %s\n{\n%s",$2,$4);}
|KW_FI ';'						{$$ = template("\n}");}
//|KW_ELSE 						{$$ = template("else");}
|KW_ELSE body 						{if(($2[0]=='i')&&($2[1]=='f'))  $$ = template("}\nelse %s\n",$2); 
							else $$ = template("}\nelse   \n{\n%s",$2);}//$[2] && != every char/num 
;


while_loop:
KW_WHILE expr KW_LOOP body KW_POOL ';' 		{$$ = template("while %s\n{\n%s\n}\n",$2,$4);}

;



//////////////////////////////////////////////////////////////////////////////////////

func_parameters:
%empty			  {$$ = "";}
|expr                     {$$ = template("%s",$1);}
|func_parameters ',' expr {$$ = template("%s , %s",$1, $3);}
;

func_parameters_decl:
%empty {$$="";}
|ident_form_part ':' data_type			   {$$ = template("%s %s",$3,$1);}
|func_parameters_decl ',' ident_form_part ':' data_type {$$ = template("%s ,%s %s",$1,$5,$3);}
;


data_type:
 KW_INT     						 {$$ = template("%s", $1);}
|KW_BOOL   						 {$$ = template("%s", $1);}
|KW_REAL   						 {$$ = template("float");}
|KW_STRING   						 {$$ = template("char");}
;

printf_func:
WRITESTRING_FUNC'(' string ')' ';'	{$$ = template("%s(%s);",$1,$3);} //..simple, it can be used as an expression too..
|WRITEINT_FUNC'('expr')' 	';'	{$$ = template("%s(%s);",$1,$3);}
|WRITEREAL_FUNC'('expr')'	';' 	{$$ = template("%s(%s);",$1,$3);}
;

function_call:
IDENTIFIER'('func_parameters')' {$$ = template("%s(%s)",$1, $3);}
|READSTRING_FUNC '('')'              {$$ = template("%s()",$1);}
|READINT_FUNC '('')'              {$$ = template("%s()",$1);}
|READREAL_FUNC '('')'              {$$ = template("%s()",$1);}
;
cmd_line:
ident_form_part ASSIGN expr ';' {$$ = template("%s = %s;",$1,$3);}
|KW_RETURN expr ';'   ///NOT TESTED!!!!
;

comment:
LINE_COMMENT   			 {$$ = template("\\\\%s",$1);}
|MLINE_COMMENT  		 {$$ = template("/*%s*/",$1);}
;

string:
STRING  {$$ = template("%s",$1);};

expr:
string
|function_call
| ident_form_part
| '+' expr		 { $$ = template("+%s", $2); }
| '-' expr		 { $$ = template("-%s", $2); }
| KW_NOT expr 		 { $$ = template("!%s", $2); }
| POSINT
| REAL
| '(' expr ')'  	 { $$ = template("(%s)", $2); }
| expr '+' expr 	 { $$ = template("%s + %s", $1, $3); }
| expr '-' expr  	 { $$ = template("%s - %s", $1, $3); }
| expr '*' expr 	 { $$ = template("%s * %s", $1, $3); }
| expr '/' expr 	 { $$ = template("%s / %s", $1, $3); }
| expr '%' expr          { $$ = template("%s % %s", $1, $3); }
| expr EQUAL_OP expr     { $$ = template("%s = %s", $1, $3); }
| expr NOT_EQUAL_OP expr { $$ = template("%s != %s", $1, $3); }
| expr LESS_OP expr      { $$ = template("%s < %s", $1, $3); }
| expr LESS_EQUAL_OP expr{ $$ = template("%s <= %s", $1, $3); }
| expr KW_AND expr 	 { $$ = template("%s && %s", $1, $3); }
| expr KW_OR expr 	 { $$ = template("%s || %s", $1, $3); }
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



