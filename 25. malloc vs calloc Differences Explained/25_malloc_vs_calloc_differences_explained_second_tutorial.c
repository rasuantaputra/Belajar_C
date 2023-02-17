#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * @brief We wanna see performance between malloc() vs calloc()
 * @note calloc() take taime to set memory to 0
 */

int main(int argc, char const *argv[])
{
    clock_t tic, toc;
    int *array;

    tic = clock();
    array = malloc(99999999999 * sizeof(int));
    toc = clock();
    printf("malloc: %f sec\n", 
            (double) (toc - tic)/CLOCKS_PER_SEC);
    
    free(array);


    tic = clock();
    array = calloc(99999999999, sizeof(int));
    toc = clock();
    printf("calloc: %f sec\n", 
            (double) (toc - tic)/CLOCKS_PER_SEC);
    
    free(array);
    return 0;
}
