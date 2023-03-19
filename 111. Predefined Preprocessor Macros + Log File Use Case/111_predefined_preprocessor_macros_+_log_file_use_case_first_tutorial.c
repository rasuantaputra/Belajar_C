#include <stdio.h>
#include <stdlib.h>

/**
 * @brief There is predefine provide by C standard
 * @example __FILE__, __DATE__, __TIME__, __LINE__, __STDC__
 * 
 */

// this is prepocessing macros have we made
#define LENGTH 20


int main()
{
    printf("length: %d\n", LENGTH);

    printf("===== This is predefined prepocecor macros provide by C standard =====\n");
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__); // its will printed 22, because this code in line 22nd
    printf("ANSI: %d\n", __STDC__); // will set to 1 if the compiler can forms ANSI C standard (wich is sometimes called C standard)

    return 0;
}
