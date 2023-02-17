#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // allocate 10 integer in meory a
    int *a = malloc(sizeof(int) * 10);

    for (int i = 0; i < 10; i++)
    {
        a[i] = 10 - i;
        printf("a[%d]: %d | Address: %p\n", i, a[i], a);
    }

    // free memory after used
    free(a);
    
    scanf("%d",&a);
    return 0;
}
