%option noyywrap


INTEGER [0-9]+
FLOAT [0-9]+\.[0-9]+
VARIABLE [a-zA-Z_][a-zA-Z0-9_]*
NAME {VARIABLE}


%%
".data" return DATA;
".declarations" return DECL;
".linear" return LINEAR;
".relu" return RELU;


{FLOAT} return FLOAT_LIT;
{INTEGER} return INT_LIT;
{VARIABLE} return VAR;
"," return COMMA;
"(" return LPAR;
")" return RPAR;
"[" return LBR;
"]" return RBR;
<<EOF>> return END;
[ \t\n]+ ;
. ;
%%
