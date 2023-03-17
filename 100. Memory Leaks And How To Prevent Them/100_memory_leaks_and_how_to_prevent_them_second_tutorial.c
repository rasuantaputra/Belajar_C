#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief memory leaks occure when program fail free allocate memory or loses ability to access the memory dynamically allocate
 * @brief memory leaks also occure if our program loses the pointer to the block of memory, if that's the caseour program can no longger free that block memory (in 2nd tutorial)
 */

int *allocate()
{
    int *pointer = malloc(sizeof(int) * 100);
    printf("function address: %p\n", pointer);

    return pointer;
}

int main(int argc, char const *argv[])
{

    int *block = allocate();
    printf("block address: %p\n", block);

    // this way still ok
    // cz we free the same allocated memory adress
    free(block);

    // yg di maksud "loses the pointer" itu seperti ini
    // adress nya berbeda pasti
    allocate();


    return 0;
}
