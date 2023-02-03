#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 2;

    int x = 2;
    double y = 5;

    // compiler will convert a and b to double
    double c = (double) a / b;

    printf("before type casting: %d\n", a/b);
    printf("after type casting: %f\n", c);

    // compiler automatically convert x data type to double (following z data type)
    double z = y / x;
    printf("z: %d", z);



    return 0;
}