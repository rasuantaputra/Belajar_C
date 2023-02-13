#include <stdio.h>

void add(int a);
void add_array(int array[]);
void add_array_ptr(int *array);

int main(int argc, char const *argv[])
{
    int x = 5;
    int my_array[5] ={1, 2, 3, 4, 5};

    printf("===Nilai awal===\n");
    printf("x: %d \n", x);

    printf("===Perubahan menggunakan fungsi add===\n");
    add(x);
    // nilai x tidak akan berubah karena fungsi void dan tidak mengarahkan ke addres (tdk menggunakan pointer)
    printf("x: %d \n", x);


    printf("===Nilai awal===\n");
    printf("my_array[0]: %d \n", my_array[0]);

    printf("===Perubahan menggunakan fungsi add_array===\n");
    add_array(my_array);
    // nilai array[0] akan berubah, karena pada hakikatnya jika kita menjadikan array sebagai input fungsi, sebenarnya itu adalah pointer
    printf("my_array[0]: %d \n", my_array[0]);

    printf("===Perubahan menggunakan fungsi add_array_ptr===\n");
    add_array_ptr(my_array);
    printf("my_array[0]: %d \n", my_array[0]);




    return 0;
}

void add(int a)
{
    a += 1;
}

void add_array(int array[])
{
    array[0] += 1;
}

void add_array_ptr(int *array)
{
    array[0] += 1;
}

/*
* @note kalau array menjadi input fungsi, itu sebenarnya kita menggunakan pointr
* @note cara penulisan "void add_array(int array[])" dan "void add_array_ptr(int *array)" sama sajaS
*/