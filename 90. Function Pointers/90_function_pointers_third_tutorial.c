#include <stdio.h>

/**
 * @brief this tutorial is pointer function for array
 * 
 */

int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a/b;
}

int main(int argc, char const *argv[])
{
    // all data type have to same
    int (*array_function[])(int, int) = {sum, subtract, multiply, divide};

    int product = array_function[2](3, 5);
    printf("product = %d\n", product);




    
    return 0;
}
