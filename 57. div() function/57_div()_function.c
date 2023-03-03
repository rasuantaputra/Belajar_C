#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num, den;
    num = 10;
    den = 3;

    printf("+++++++++ Without div() +++++++++\n");
    int quot = num/den;
    int remain = num % den;
    printf("quot: %d\n", quot);
    printf("rem: %d\n", remain);

    printf("+++++++++ With div() +++++++++\n");

    // div_t is typdef or synomim of struct
    div_t result1 = div(num, den);
    printf("quot: %d\n", result1.quot);
    printf("rem: %d\n", result1.rem);

    long x, y;
    x = 83750329;
    y = 357862846;

    ldiv_t result2 = ldiv(x, y);
    printf("quot: %ld\n", result2.quot);
    printf("rem: %ld\n", result2.rem); 


    return 0;
}
