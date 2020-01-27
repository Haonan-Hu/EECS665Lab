/*Direction Section*/
%option c++
%option noyywrap

%{
#include <iostream>
%}

SLASH    [/]
STAR     [*]

%%

{SLASH}{STAR}[^(*/)]*{STAR}{SLASH}

{SLASH}{STAR}(.)*{STAR}{SLASH}

{SLASH}{STAR}([^*]*{STAR}+[^*/])*{STAR}+{SLASH}

{SLASH}{STAR}([^*]|[^/])+{STAR}{SLASH}

{SLASH}{STAR}[^*]*{STAR}+{SLASH}+

%%

%{
  int main(int argc, char* argv[])
  {
