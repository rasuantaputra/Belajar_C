#include <stdio.h>
#include <string.h>
#include <errno.h>

/**
 * @brief these some example to use comma operator
 * 
 * @note becareful to use comma operator, it could be confusing
 */

int chech_value(int value)
{
    if (value > 100) return (errno = EINVAL, -1);
    
    return 0;    
}

int main(int argc, char const *argv[])
{
    // ================= First example of comma operator ==================
    printf("==== 1st Example ====\n");

    int a = 1;
    int b = 2;
    int c;

    // its will be 2
    c = (a, b);
    printf("c: %d\n", c);

    // kalau tidak di kurungkan, akan 1 nilainya
    // the comma has the lowest precedence of all operators in C
    c = a, b;
    printf("c: %d\n", c);

    // ================= Second example of comma operator ==================
    printf("\n==== 2nd Example ====\n");

    int m = 4;
    int n;

    // this is comma operator behaviour :
    // 4 + 1 = 5
    // 5 * 2 = 10
    n = (m += 1, m * 2);
    printf("m: %d\nn: %d\n", m, n);

    // ================= Third example of comma operator ==================
    printf("\n==== 3rd Example ====\n");

    int number = 5;
    int max = 10;
    int r1, r2;

    if(number < max) r1 = 1, r2 = 2;
    else r1 = 3, r2 = 4;

    printf("r1: %d\nr2: %d\n", r1, r2);

    // ================= Fourth example of comma operator ==================
    printf("\n==== 4th Example ====\n");
    char *s1 = "a string to print from the midle";
    int length, i;
    for (length = strlen(s1), i = length/2; i < length; i++) printf("%c", s1[i]);

    // ================= Fifth example of comma operator ==================
    printf("\n==== 5th Example ====\n");
    char *s2 = "some string";
    if (length = strlen(s2), length < 20)
    {
        for(int i = 0; i < length; i++) printf("%c", s2[i]);
        printf("\n");
    }

    // ================= sixth example of comma operator ==================
    printf("\n==== 6th Example ====\n");
    int return_value = chech_value(5000);
    printf("return_value: %d\n", return_value);

    if(errno == EINVAL) printf("errno set by check_value\n");


    return 0;
}
