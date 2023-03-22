#include<stdio.h>

/**
 * @brief this tutorial about differences between string literal with pointer and without pointer
 */

int main(int argc, char const *argv[])
{
    // string literal tanpa pointer
    char s1[] = "abcdef";
    
    // we allow to midified this string
    s1[0] = 'X';

    // but we not allowed using pointer arithmatic, because s1 act like constant pointer
    // s1++;

    // dan karena dia constant dia jadi ga assignable
    // it will be error
    // s1 = "new string";

    printf("s1: %s\n", s1);

    // its not character array
    // its pointer
    // we can print this string, but cannot modified this string
    char *s2 = "abcdef";
    // not allowed
    // compiler akan menggap kita ingin memodifikasi tempat di memory 
    // atau kita dianggap mau modifikasi si memory nya, dan itu di larang
    // s2[0] = 'X';

    // but, in string pointer, we can use pointer arithmatic
    s2++;

    // string pointer is assignable
    // if "s2" not assigned with this string, it will be 8bit too
    s2 = "new string";

    printf("s2: %s\n", s2);

    // the value will bw 7bit, is because 7 charactter length
    printf("\nsizeof(s1): %d\n", sizeof(s1));
    // the value will be 8bit, its because they give a size of pointer, not the string legth
    printf("sizeof(s2): %d\n", sizeof(s2));

    return 0;
}
