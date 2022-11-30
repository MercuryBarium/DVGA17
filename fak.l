/* Scanner for c programs */

%option noyywrap 
%{
    #include <math.h>
%}

DIGIT   [0-9]
ID      [a-z][a-z0-9]*

%%

{DIGIT}+    {   /* INTEGER */
    printf( "An integer: %s (%d)\n", yytext,
    atoi( yytext ) );
}

{DIGIT}*'.'{DIGIT}+'f'  {   /* FLOAT */

}
