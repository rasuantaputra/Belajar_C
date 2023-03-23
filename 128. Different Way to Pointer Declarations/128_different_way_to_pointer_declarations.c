#include <stdio.h>

/**
 * @note we better declare every single line statment
 * 
 */

int main(int argc, char const *argv[])
{
    int num = 5;

    // many way to declare a pointer
    int *p1 = &num;
    int* p2 = &num;
    int * p3 = &num;

    int *p4, *p5;
    // int* p6, *p7;

    printf(" int *p1: %d\n", *p1);
    printf(" int* p2: %d\n", *p2);
    printf("int * p3: %d\n", *p3);

    p4 = &num;
    p5 = &num;
    printf("*p4: %d\n", *p4);
    printf("*p5: %d\n", *p5);


    return 0;
}
