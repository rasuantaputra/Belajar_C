#include <stdio.h>

#define BUFFER_SIZE 5
#define TOTAL_BUFFERS 1

#define PLATFORM_CODE 4

#define OS

#define VERSION_CODE 'a'

#define FUNC(x) x - 100

// its can use macros function for condition
#if FUNC(50) > 0
    #define VALUE 500
#else 
    #define VALUE 1000
#endif

int main(int argc, char const *argv[])
{
    #if PLATFORM_CODE == 1
        printf("Platform 1\n");
    #elif PLATFORM_CODE == 2
        printf("Platform 2\n");
    #elif PLATFORM_CODE == 3
        printf("Platform 3\n");
    #else
        printf("Unknown Platform\n");
    #endif

    #if 0
        // will not print,  cz "0" is false
        printf("will not print\n");
    #else
        printf("Zero is false\n");
    #endif

    #if -1
        printf("non-zero is true !\n");
    #endif

    // we can use some computations and bitwise operator
    #if BUFFER_SIZE * TOTAL_BUFFERS > 50 && 5000
        printf("%d\n", BUFFER_SIZE);
    #endif

    #if VERSION_CODE == 'a'
        printf("VERSION_CODE == a\n");
    #endif

    #if defined(OS)
        printf("OS is defined\n");
    #endif

    printf("Value: %d\n", VALUE);

    return 0;
}
