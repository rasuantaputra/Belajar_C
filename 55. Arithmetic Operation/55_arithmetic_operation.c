#include <stdio.h>
#include <math.h>

/**
 * @note remember!, different data type will give different result
 */
int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 8;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n\n", a, b, a % b);

    a++;
    printf("a++: %d\n", a);
    a--;
    printf("a--: %d\n", a);

    ++a;
    printf("++a: %d\n", a);

    // its gonna different when u use in function
    printf("a++: %d\n", a++);
    printf("a: %d\n", a);
    printf("++a: %d\n\n", ++a);

    printf("+++++++++ Using math.h +++++++++\n");
    double x = 5.2;
    double y = 8.7;

    double result = pow(b, a);
    printf("%f + %f = %f\n", x, y, result);


    return 0;
}
