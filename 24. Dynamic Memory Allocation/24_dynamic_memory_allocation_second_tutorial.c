#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 * @param argc 
 * @param argv 
 * @return int
 * @note here is example of memory leaks 
 */

void mem_leak(int size);

int main(int argc, char const *argv[])
{
    while (1)
    {
        mem_leak(727379969);
    }
    
    return 0;
}

void mem_leak(int size)
{
    int *a = malloc(size);
}