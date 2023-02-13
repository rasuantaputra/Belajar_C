#include <stdio.h>

// fungsi untuk merubah nilai variable menggunakan pointer
void swap(int *a, int *b);

int main(int argc, char const *argv[])
{

    int x, y;
    x = 5;
    y = 10;

    printf("x: %d y: %d\n", x, y);
    printf("&x: %p &y: %p\n", &x, &y);
    swap(&x, &y);
    printf("x: %d y: %d\n",x ,y);
    
    return 0;
}

// input disini nanti akan diisi oleh address variable yg akan di swipe
void swap(int *a, int *b)
{
    printf("a: %p b: %p\n", a, b);
    printf("*a: %d *b: %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
}