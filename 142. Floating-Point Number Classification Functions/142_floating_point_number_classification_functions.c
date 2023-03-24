#include <stdio.h>
#include <math.h>
#include <float.h>

/**
 * @brief tutorial for classify a number
 * 
 */

int main(int argc, char const *argv[])
{
    float finite = 2.5;
    if (isfinite(finite)) printf("%f is finite\n", finite);

    // in C it will return positive infinite 
    float infinite = 1.0/0;
    if (isinf(infinite)) printf("%f is infinite\n", infinite);

    // in C it will return negative infinite 
    float negative_infinite = -1.0/0;
    if (signbit(negative_infinite)) printf("%f is negative_infinite\n", negative_infinite); // signed bit
    
    float not_a_number = 0.0/0.0;
    if (isnan(not_a_number)) printf("%f is not_a_number\n", not_a_number);

    // preposecor constant its the value the smallest normelize number
    // float number = FLT_MIN;
    float number = FLT_MIN/10; // if we do this its gonna be subnormal
    if (isnormal(number)) printf("%e is normal\n", number);
    else printf("%e is not normal\n", number);

    // float test = 10/0.0;
    // float test = 0.0/0.0;
    // float test = 2.5;
    // float test = FLT_MIN/10;
    float test = 0.0;

    switch (fpclassify(test))
    {
    case FP_INFINITE:
        printf("%f is infinite\n", test);
        break;
    case FP_NAN:
        printf("%f is not a number\n", test);
        break;
    case FP_NORMAL:
        printf("%f is normal\n", test);
        break;
    case FP_SUBNORMAL:
        printf("%e is subnormal\n", test);
        break;
    case FP_ZERO:
        printf("%f is zero\n", test);
        break;    
    default:
        printf("UNKNOWN\n");
        break;
    }

    return 0;
}
