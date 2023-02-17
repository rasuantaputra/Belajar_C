#include <stdio.h>
#include <stdlib.h>
/**
 * @brief realloc basic tutorial
 * 
 * @note realloc() not erase the data
 * @note realloc() copy the data to a new memory
 * @note data from previous memory still exist
 * @note memory address copied near from original memory
 */

int main(int argc, char const *argv[])
{
    int *a = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
        printf("a[%d]: %d\n", i, a[i]);
    }
    printf("\n");

    printf("a adress before realloc: %p\n", a);
    a = realloc(a, sizeof(int) * 10);
    // jika dilihat letak memory nya sama, cuma beda size
    printf("a adress after realloc: %p\n\n", a);
    
    for (int i = 0; i < 10; i++)
    {
        // its can be filled by 10 integers now, cz we allready realloc the memory
        a[i] = i;
        printf("a[%d]: %d\n", i, a[i]);
    }

    free(a);

    return 0;
}
