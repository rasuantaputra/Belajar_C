/*****************************************************************************************
 * @file 53_how_true_and_false_boolean_values_work_in_C.c
 * @author your name (you@domain.com)
 * @brief modern C language has stdbool.h
 * @brief old C language need to #define TRUE or FALSE for get boolean number
 * @brief but if we #define boolean number, sometime its gonna be bug (in some case)
 * @link https://github.com/portfoliocourses/c-example-code/blob/main/bool.c
 * 
 * @note in this tutorial, im gonna use stdbool.h
 * ****************************************************************************************
 */

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    // same like another language program 0 is FALSE, another 0 is TRUE. even though minus (-)
   bool x = -189;
   printf("x: %d", x);
    return 0;
}
