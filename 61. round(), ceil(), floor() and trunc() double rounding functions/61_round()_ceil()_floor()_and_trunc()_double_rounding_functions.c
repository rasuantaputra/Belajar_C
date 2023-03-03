#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

  double num = -2.5;
  
  // round will round away from 0 if the fractional component is .5 or higher
  printf("round(%.2f) = %.2f\n", num, round(num) );

  // ceil will always round to the next highest integer
  printf("ceil(%.2f) = %.2f\n", num, ceil(num) );

  // floor will always round to the next lowest integer
  printf("floor(%.2f) = %.2f\n", num, floor(num) );
  
  // trunc essentially chops off the fractional component and sets it to .0
  printf("trunc(%.2f) = %.2f\n", num, trunc(num) );

  return 0;
}
