#include <stdio.h>

/**
 * @brief in this tutorial, we will discuse how to remove code for debuging using prepossesing directive
 * 
 * @note some way to remove code for debuging :
 *       1. using command line
 *       2. using prepocessing directive
 * 
 * @note usually we temporary deactive code because an error/worng in program or something that we want to
 * 
 */

int main()
{
    printf("work 1");

    // 1st way to remove from debuging
    // printf("work 2"); // this line will never execute

    /*
    /* 2nd way
    printf("work 3");
    */
    // */ -> disadvantage of this way if the line larger and larger

    // 3rd way
    #if 0 // it will active if the value is 1/true (see #if in previous tutorial)
    printf("work 4");
    printf("work 5");
    printf("work 6");
    printf("work 7");
    printf("work 8");
    printf("work 9");
    #endif


    
    return 0;
}
