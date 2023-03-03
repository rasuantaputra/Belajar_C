#include <stdio.h>
#include <unistd.h>

/**
 * @brief sleep() is second order
 * @brief usleep() is micro second order
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */
int main(int argc, char const *argv[])
{

    printf("before\n");
    // sleep(5);
    usleep(5000000);
    printf("after\n");
    return 0;
}
