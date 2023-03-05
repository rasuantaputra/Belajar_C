#include <stdio.h>
#include <stdlib.h>

/**
 * @note this tutorial how to convert char to double, int, and long int
 */

int main(int argc, char const *argv[])
{
    char *double_test = "455.99328";
    char *int_test = "69";
    char *long_int_test = "78634992837489320942346925";

    double double_result = atof(double_test);
    int int_result = atoi(int_test);
    long int long_int_result = atol(long_int_test);

    printf("double_result: %f\n", double_result);
    printf("int_result: %d\n", int_result);
    printf("long_int_result: %d\n", long_int_result);

    return 0;
}

