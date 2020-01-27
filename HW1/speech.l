/* Direction Section*/
%option c++
%option noyywrap
%option yyclass="MyScanner"

%{
#include <iostream>
using namespace std;

#undef YY_DECL
#define YY_DECL int MyScanner::yylex(Token ** lval)

#include "scanner.hpp"
%}

SLASH    [/]
STAR     [*]

%%

{SLASH}{STAR}[^(*/)]*{STAR}{SLASH} {
      *lval = new Token(VERB, yytext);
      return VERB;
    }

\n     { }

%%
