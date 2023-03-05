#include <stdio.h>
#include "library.h"

/**
 * @brief masih error kalau dipisah dari header filenya
 * 
 * @return int 
 */
int main()
{
  // the main function can access the functions defined in the external library
  add_one();
  print();
  
  // if we try to access the global variable defined in library.c, we will get
  // a compiler error because the variable is defined using the static keyword
  // number += 10;
  // print();

  return 0;
}