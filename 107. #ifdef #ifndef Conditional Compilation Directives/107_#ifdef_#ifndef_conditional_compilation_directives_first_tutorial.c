#include <stdio.h>

/**
 * @brief this is another type of macros
 *
 * @note way to write #ifdef
 *       1. #ifdef | #if defined(.....)
 *       2. #ifndef | #if !defined(.....)
 */

#define DEBUG_MODE

#undef DEBUG_MODE


#define BUFFER_SIZE 100


int main(int argc, char const *argv[])
{
    // another macros type
    // #ifdef = if define .....
    #ifdef DEBUG_MODE
        // if we define "DEBUG_MODE" its will be print
        printf("Debug Mode! \n");
    #else
        printf("Nott Debug Mode2! \n");
    #endif

    // #ifndef = if not define .....
    #ifndef DEBUG_MODE
        // if we not define "DEBUG_MODE" its will be print
        printf("Not Debug Mode! \n");
    #endif

    printf("BUFFER_SIZE: %d\n", BUFFER_SIZE);
    return 0;
}
