#include <stdio.h>

/**
 * @note now day, C programmer dont need use keyword "register", because the compiler was really2 good to excecute our program
 * @note "register" keyword used long long long time ago (reaso:see how CPU work!)
 * 
 */

int main(int argc, char const *argv[])
{
    // varible "x" stored in register, not in memory
    register int x = 3;

    // we can't use pointer to "x", because "x" not store in memory. but in register
    int *y = &x;

    printf("x: %d\n", x);
    



    return 0;
}
