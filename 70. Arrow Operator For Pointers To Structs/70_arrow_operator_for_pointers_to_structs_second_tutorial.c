#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int x;
  int y;
} Point;

int main(int argc, char const *argv[])
{
  Point *p3;
  p3 = malloc(sizeof(Point));

  // second way to write
  (*p3).x = 7;
  (*p3).y = 3;
  printf("p3(%d, %d)\n", (*p3).x, (*p3).y);

  free(p3);
  return 0;
}
