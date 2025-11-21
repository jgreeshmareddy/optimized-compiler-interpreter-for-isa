%{
#include "nodes.hpp"
#include <stdio.h>
%}


%token DATA DECL LINEAR RELU
%token VAR INT_LIT FLOAT_LIT
%token COMMA LPAR RPAR LBR RBR
%token END


%%
program:
sections
;


sections:
section
| sections section
;


section:
DATA section_body
| DECL section_body
| LINEAR section_body
| RELU section_body
;


section_body:
/* simplified for ISA generation */
;


%%


int yyerror(const char *msg) {
printf("Parser error: %s\n", msg);
return 0;
}
