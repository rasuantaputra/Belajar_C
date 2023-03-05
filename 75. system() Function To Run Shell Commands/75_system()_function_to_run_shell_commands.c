#include <stdio.h>
#include <stdlib.h>

/**
 * @brief "system()" can run every command in terminal
 * @note system not return 0 value
 */

int main(int argc, char const *argv[])
{
    system("dir");

    if (system("abcd") != 0) printf("Error command !\n");
    
    return 0;
}
