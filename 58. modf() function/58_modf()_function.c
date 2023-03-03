#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double x, frac, integral;

    x = 7.32;

    // untuk memisahkan antara bilangan bulat dan pecahan
    frac = modf(x, &integral);
    printf("integral : %f\n", integral);
    printf("frac: %f\n",frac);

    return 0;
}
