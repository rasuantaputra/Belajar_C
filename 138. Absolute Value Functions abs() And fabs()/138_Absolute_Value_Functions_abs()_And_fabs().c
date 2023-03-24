#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x = -5;
    double y = -2.5;

    int absolute_x = abs(x);
    printf("abs(%d): %d\n", x, absolute_x);

    // "fabs()" found in "math.h" for float or double data type
    double absolute_y = fabs(y);
    printf("fabs(%lf): %lf\n", y, absolute_y);


    return 0;
}

