#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double num = 20.3;
    double den = 3.7;

    // modulus yg biasa hanya bisa mengoperasikan integer
    // printf("%f", num % den);

    printf("result: %f\n", fmod(num, den));
    return 0;
}
