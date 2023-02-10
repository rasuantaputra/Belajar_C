// Masih blm paham maksud dari bagian ini

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *array;
}Data;



int main(int argc, char const *argv[])
{
    Data x, y;

    x.array = malloc(sizeof(int) * 5);
    y.array = malloc(sizeof(int) * 5);

    x.array[0] = 1;
    x.array[1] = 2;
    x.array[2] = 3;
    x.array[3] = 4;
    x.array[4] = 5;

    y.array[0] = 9;
    y.array[1] = 9;
    y.array[2] = 9;
    y.array[3] = 9;
    y.array[4] = 9;

    x = y;

    // saat di print memang keluar berbentuk array, tp sebenernya itu adalah pointer array (address)
    // ini yg terjadi ketika menggunakan struct yg berisi pointer
    for (int i = 0; i < 5; i++) printf("x.array[%d]= %d\n", i, x.array[i]);
    printf("\n");
    x.array[2] = 80;
    for (int i = 0; i < 5; i++) printf("y.array[%d]= %d\n", i, y.array[i]);
    
    return 0;
}
