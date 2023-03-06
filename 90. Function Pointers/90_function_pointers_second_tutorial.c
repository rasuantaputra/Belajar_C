#include <stdio.h>

/**
 * @brief this tutorial is pointer function for function wich return some value
 * 
 */

double add(double a, double b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{

    double (*add_pointer)(double, double) = add;

    double a = 10;
    double b = 60;

    double result = add_pointer(a, b);
    printf("result = %f\n", result);

    return 0;
}
