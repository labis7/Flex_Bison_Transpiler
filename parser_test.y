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


%token <str> IDENTIFIER
%token <str> POSINT 
%token <str> REAL 
%token <str> STRING

%token <str> ASSIGN

%token <str> KW_INT
%token <str> KW_CHAR
%token <str> KW_IF
%token <str> KW_THEN
%token <str> KW_ELSE
%token <str> KW_LET

%token <str> KW_TRUE
%token <str> KW_FALSE

%start input

%type <str> data_type assignment var_decl var_decl_part multiple_ident
%type <str> main
%type <str> expr
%type <str> more

%left '-' '+'
%left '*' '/'

%%

input:  
 main 
{ 
  if (yyerror_count == 0) {
    printf("\n\n");//puts(c_prologue);
    printf("Expression evaluates to: %s\n", $1); 
  }  
}
;

main:
IDENTIFIER '('')''{' var_decl '}' {$$ = template("main(){ %s }",$5);};

assignment:
IDENTIFIER ASSIGN expr ';'	{$$ = template("%s = %s;",$1,$3);}
|assignment IDENTIFIER ASSIGN expr ';' {$$ = template("%s %s = %s;",$1,$2,$4);};


///////////////////////////////////////  Variable declaration
var_decl:
KW_LET multiple_ident ':' data_type ';'		 {$$ = template("%s %s ;",$4,$2);}//to format let i,y : int;
|KW_LET var_decl_part ':' data_type ';'		 {$$ = template("%s %s ;",$4,$2);}//let i,y <- 10;  or let i,y<-10 ,z<-12 : int ;
|var_decl KW_LET var_decl_part ':' data_type ';' {$$ = template("%s %s %s ;",$1,$5,$3);}//multiple lines like the above
;

var_decl_part:   // declaration of multiple vars, supports diff value assignment for each var(s).
multiple_ident ASSIGN expr     		      {$$ = template("%s = %s",$1,$3);}        //x,i <- 10  
|var_decl_part ',' multiple_ident 	      {$$ = template("%s , %s",$1,$3);}//x,i<-10 , z, a, b 
|var_decl_part ',' multiple_ident ASSIGN expr {$$ = template("%s , %s = %s",$1,$3,$5);}//x,i<-10 , z<-12
;

multiple_ident:
IDENTIFIER							  // x
|multiple_ident ',' IDENTIFIER {$$ = template("%s , %s",$1,$3);}  // i,x,z,var
;


data_type:
KW_INT      {$$ = template("%s", $1);}
|KW_CHAR    {$$ = template("%s", $1);}
;
///////////////////////////////////////////

expr:
  POSINT
| REAL
| '(' expr ')' { $$ = template("(%s)", $2); }
| expr '+' expr { $$ = template("%s + %s", $1, $3); }
| expr '-' expr { $$ = template("%s - %s", $1, $3); }
| expr '*' expr { $$ = template("%s * %s", $1, $3); }
| expr '/' expr { $$ = template("%s / %s", $1, $3); }
;

%%
int main () {
  if ( yyparse() == 0 )
    printf("Accepted!\n");
  else
    printf("Rejected!\n");
}
