#include <stdio.h>

/**
 * @note detail explanation from portofoliocourses
 * 
 * @return int 
 */

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

// We can follow the below template to convert a for loop to a while loop,
// replacing the different parts of the template with the associated parts
// of the for loop.
//
//    /* initialization statement */
//    while ( /* condition (test expression) */ )
//    {
//       /* body */
//
//      /* update statement */
//    }
//
// This will work for any for loop, as the initialization statement will
// execute before anything else in the loop, the condition will be checked
// before each time the loop body executes, and the update statement will
// always execute after the body.  We reproduce the exact same behaviour
// and control-flow of the for-loop by respecting this order/behaviour in
// the for loop!
//