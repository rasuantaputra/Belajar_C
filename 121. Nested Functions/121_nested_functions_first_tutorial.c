#include <stdio.h>

/**
 * @note nested fuction is not standard in ASI C 
 * @note in this compiler suport nested function, some compiler does not suport
 */

void outer()
{
    int variable = 5;
    // if we declare before the function made, it will be eero
    // nested();
    // this is error too
    // void nested();
    // 
    // to handle that we use "auto" keyword
    // this keyword does not work in my compiler
    auto void nested();

    
    void nested()
    {
        // printf("i'm nested\n");
        printf("variable: %d\n", variable);
    }

    nested();
}

int main(int argc, char const *argv[])
{
    outer();
    return 0;
}

