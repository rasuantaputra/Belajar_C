#include <stdio.h>
#include <stdlib.h>
/**
 * @brief pembuktian kalau realloc() meng-copy data di memory address sebelumnya ke memory adress yg baru
 */

int main(int argc, char const *argv[])
{
    int *a1 = malloc(sizeof(int) * 5);
    int *a2 = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++)
    {
        // its can be filled by 10 integers now, cz we allready realloc the memory
        a1[i] = i;
        a2[i] = 9;
    }



    // address a1 dan a1 akan di letakan berdekatan
    printf("a1 adress: %p\n", a1);
    printf("a2 adress: %p\n", a2);

    // ketika memory a1 suda penuh, maka akan dialihkan ke memory a2
    // ini adalah yg dilakukan olah malloc
    // agar tidak terjadi, makan kita menggunakan realloc
    for (int i = 0; i < 14; i++) printf("a1[%d]: %d\n", i, a1[i]);


    printf("\na1 adress before realloc: %p\n", a1);
    int *save = a1;
    // if we use feree() before realloc() its will be undifine behavior
    // free(a1);
    a1 = realloc(a1, sizeof(int) * 20);
    // address setelah realloc() berbeda
    // nilai yg di address sebelum akan di copy ke address yg baru ini
    printf("a1 adress after realloc: %p\n\n", a1);
    printf("save adress: %p\n\n", save);

    for (int i = 0; i < 20; i++) a1[i] = i;
    // bukti bahwa masih ada data di memory adrress sebelumnya (lihat address nya sama dg a1 sebelum realloc())
    for (int i = 0; i < 5; i++) printf("save[%d]: %d\n", i, save[i]);

    free(a1);
    free(a2);
    free(save);

    return 0;
}
