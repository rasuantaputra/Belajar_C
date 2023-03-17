#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief memory leaks occure when program fail free allocate memory or loses ability to access the memory dynamically allocate
 * @brief memory leaks also occure if our program loses the pointer to the block of memory, if that's the caseour program can no longger free that block memory (in 2nd tutorial)
 */

int main(int argc, char const *argv[])
{
    // value of this variable store in stack, we dont need worry about that
    int x = 5;

    // value of this store in heap, so we nedd to manage it to avoid memory leak
    int *pointer = malloc(sizeof(int));
    // "free()" use to free the memory/release the memory
    free(pointer);

    // this for example of memory leak (caused we dont free allocated memory)
    int *data;
    size_t data_size = sizeof(int) * 1000000;
    int iteration = 0;
    while (true)
    {
        data = malloc(data_size);
        if (data == NULL) break;
        iteration++;

        printf("iteration: %d\n", iteration);  
    }
    



    return 0;
}
