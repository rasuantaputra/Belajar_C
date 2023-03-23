#include <stdio.h>
#include <stdlib.h>

/**
 * @note this is another technique
 */
int *set_array1(int value)
{
    // this variable runtime will going to exist until we set "free()"
    int *array = malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++)array[i] = value;

    return array;    
}

// this way not recomended because confusing for people
int *set_array2(int value)
{
    // using static variable
    static int array[5];
    for (int i = 0; i < 5; i++)array[i] = value;

    return array;    
}

int main(int argc, char const *argv[])
{

    int *result1 = set_array1(4);
    int *result2 = set_array2(4);

    for (int i = 0; i < 5; i++) printf("result1[%d]: %d\n", i, result1[i]);
    printf("\n");
    for (int i = 0; i < 5; i++) printf("result2[%d]: %d\n", i, result2[i]);
    
    free(result1);

    return 0;
}
