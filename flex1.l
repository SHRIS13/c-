%{
    //definitions for   the following   functions   are defined in the file below   the definitions

%}

%%

[A-Z_][  a-z0-9A-Z_] {printf ("VALID");}
. {printf("NOT LOWERCASE");}
\n {return 0;}

%%

yywrap() {}

int main() {
    printf("enter string:");
    yylex();
    return 0;
} 