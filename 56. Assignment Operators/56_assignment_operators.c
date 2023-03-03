#include <stdio.h>

int main(int argc, char const *argv[])
{
  int x;

  x = 9;
  printf("x: %d\n", x);
 
  x += 8;
  printf("x: %d\n", x);
  
  x -= 7;
  printf("x: %d\n", x);

  x *= 6;
  printf("x: %d\n", x);
  
  x /= 5;
  printf("x: %d\n", x);

  x %= 4;
  printf("x: %d\n", x);

  return 0;
}