// pointer allow dynamic alocation

#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *a;
    int length = 0;

    printf("Enter a length : ");
    scanf("%d", &length);

    a = malloc(length * sizeof(int));

    printf("a: %p", a);

    for (int i = 0; i < length; i++) a[i] = i;
    for (int i = 0; i < length; i++) printf("a[%d]: %d\n", i, a[i]);

    // syntax ini digunakan agar tidak terjadi kebocoran memory (memory leak)
    free(a);
    return 0;
}
