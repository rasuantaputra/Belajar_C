#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * @note malloc didnt make a memory to zero first
 * @note calloc will set the memory to zero first
 */
int main(int argc, char const *argv[])
{
    int size = 0;
    int * junk = 0;
    srand(time(0));

    for (int i = 0; i < 1000; i++)
    {
        size = rand() % 16000;
        junk = malloc(size * sizeof(int));
        
        for (int j = 0; j < size; j++)
        {
            junk[j] = rand();
        }
        free(junk);        
    }
    



    // int *array = malloc(1000 * sizeof(int));
    int *array = calloc(1000, sizeof(int));

    for (int i = 0; i < 1000; i++)
    {
        printf("%d", array[i]);
    }

    free(array);
    
    return 0;
}
