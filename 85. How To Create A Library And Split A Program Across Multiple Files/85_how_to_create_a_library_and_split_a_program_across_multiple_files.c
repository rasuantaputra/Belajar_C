#include <stdio.h>
#include "library.h"

int main(int argc, char const *argv[])
{
    int x = 6;
    int y = 2;

    printf("%d + %d = %d\n", x, y, add(x, y));
    printf("%d - %d = %d\n", x, y, sub(x, y));

    return 0;
}
