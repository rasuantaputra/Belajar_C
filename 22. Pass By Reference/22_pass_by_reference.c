#include <stdio.h>

void swap (int a, int b);
void swap_2 (int *a, int *b);

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 10;
    
    printf("===Nilai awal===\n");
    printf("x: %d y: %d\n", x, y);
    swap(x, y);

    printf("===Perubahan menggunakan fungsi swap===\n");
    printf("x: %d y: %d\n", x, y);

    swap_2(&x, &y);
    printf("===Perubahan menggunakan fungsi swap2===\n");
    printf("x: %d y: %d", x, y);


    return 0;
}

// fungsi swap ini tidak akan bisa menukar nilai variable, karena bersifat void
void swap (int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// fungsi swap_2 bisa menukar nilai variabel walaupun void, karena dia menggunakan pointer
// jadi dia menghubungkan address variabel apapun yg menjadi input
void swap_2 (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
* @note secara teknis,"pass by referance" itu gada. adanya "pass by pointer"
* @note tapi karena orang2 pada bilangnya "pass by referance", jadilah standar
*/