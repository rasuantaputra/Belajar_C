#include<stdio.h>
#include<stdlib.h>

/**
 * @brief tutorial for realloc()
 * @note in newst C we can input size manually using scanf()
 */
int main(int argc, char const *argv[])
{
    int size;
    int *a = calloc(size, sizeof(int));

    printf("Enter the size : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        a[i] = size - i;
        printf("a[%d]: %d | Address : %p\n", i, a[i], a);
    }

    printf("\n");
    // reallocation memory of a by multiple with "size + 5"
    a = realloc(a, sizeof(int) * (size + 5));
    
    for (int i = size; i < (size+5); i++)
    {
        a[i] = 9;
        printf("a[%d]: %d | Address : %p\n", i, a[i], a);
    }
    free(a);
    return 0;
}
