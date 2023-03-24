#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double result1 = sqrt(9);
    printf("sqrt(9) = %f\n", result1);

    double result2 = sqrt(-9);
    printf("sqrt(-9) = %f\n", result2);

    float x1 = 2.0;
    float result3 = sqrtf(x1);
    printf("sqrtf(2.0) = %.15f\n", result3);

    // remember, long double more accurate, detail and more large than double and float
    long double x2 = 2.0; 
    long double result4 = sqrtl(x2); 
    printf("sqrtf(2.0) = %.15Lf\n", result4);



    return 0;
}
