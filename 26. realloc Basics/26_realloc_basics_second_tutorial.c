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
    int *a1 = malloc(sizeof(int) * 5);
    int *a2 = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
    {
        // its can be filled by 10 integers now, cz we allready realloc the memory
        a1[i] = i;
        a2[i] = i;
    }

    // ketika memory a1 suda penuh, maka akan dialihkab ke memory a2
    // ini adalah yg dilakukan olah malloc
    // agar tidak terjadi, makan kita menggunakan realloc
    for (int i = 0; i < 20; i++) printf("a1[%d]: %d\n", i, a1[i]);

    // address a1 dan a1 akan di letakan berdekatan
    printf("a1 adress: %p\n", a1);
    printf("a2 adress: %p\n", a2);

    free(a1);
    free(a2);

    return 0;
}
