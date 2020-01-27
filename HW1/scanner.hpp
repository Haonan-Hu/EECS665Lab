#ifndef EXAMPLE_SCANNER
#define EXAMPLE_SCANNER

#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

const int NOUN = 7;
const int VERB = 8;
const int ADJECTIVE = 9;

class Token{
public:
  Token(int tokenType, std::string lexerIn)
    :lexeme(lexerIn){

    }
    std::string lexeme;

};


class MyScanner :public yyFlexLexer{
public:
  MyScanner(std::istream * in) : yyFlexLexer(in){
  }
  virtual int yylex(Token ** lval);
};
#endif
