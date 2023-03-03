#include <stdio.h>
#include <math.h>

/**
 * @brief C has function for power -> "pow()"
 */
int main(int argc, char const *argv[])
{
    double x, y;
    int a,b;

    x = 3.2;
    y = 8.3;

    a = 2;
    b = 4;

    double result1 = pow(x,y);
    printf("result1: %f\n",  result1);

    // event the data type is "integer", C implicitly  convert to "double"
    int result2 = pow(a,b);
    printf("result2: %d\n",  result2);
    
    return 0;
}
