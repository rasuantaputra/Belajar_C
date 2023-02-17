#include <stdio.h>
#include <stdlib.h>

/**
 * @brief bassic of calloc
 * @note calloc gonna zero memory first
 */

int main(int argc, char const *argv[])
{
    int *a = calloc(10, sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        a[i] = 10 - i;
        printf("a[%d]: %d|Address : %p\n", i, a[i], a);
    }

    // free didnt clear the data
    free(a);

    int *save = a;
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("save[%d]: %d|Address : %p\n", i, save[i], save);
    }
    
    return 0;
}
