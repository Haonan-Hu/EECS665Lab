#include <iostream>
#include <fstream>
#include "scanner.hpp"

int main(int argc, char* argv[]){
  std::ifstream * inFile = new std::ifstream(argv[1]);

  MyScanner * scanner = new MyScanner(inFile);

  while(true)
  {
    Token * tok;
    int res = scanner->yylex(&tok);
    std::cout << "res is " << res << '\n';
    std::cout << "lexeme is " << tok->lexeme << '\n';

    if (res == 0)
    {
      return 0;
    }
  }
}
