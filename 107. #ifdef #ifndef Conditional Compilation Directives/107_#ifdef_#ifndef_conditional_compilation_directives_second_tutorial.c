#include <stdio.h>

/**
 * @brief this tutorial how #ifdef use in pratical
 * 
 */

#define WINDOWS

#ifdef LINUX
    #define BUFFER_SIZE 100
#endif

#ifdef MAC
    #define BUFFER_SIZE 200
#endif

#ifdef WINDOWS
    #define BUFFER_SIZE 300
#endif

int main(int argc, char const *argv[])
{
    char buffer[BUFFER_SIZE];
    printf("sizeof(BUFFER_SIZE): %lu\n", sizeof(buffer));
    return 0;
}
