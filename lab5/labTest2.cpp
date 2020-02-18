#include <iostream>
#define GLUE(ARG1,ARG2) std::c##ARG1 << ARG2;

int main ()
{
  #ifndef VERBOSE
    #if OUTMODE == 1
      GLUE(out, "hello\n")
    #else
      GLUE(err,"bye\n")
    #endif
  #endif

  return 0;
}
