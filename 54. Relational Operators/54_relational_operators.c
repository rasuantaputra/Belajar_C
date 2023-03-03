#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 8;

    printf("%d == %d -> %d\n", a, b, a == b);
    // not equal
    printf("%d != %d -> %d\n", a, b, a != b);
    printf("%d > %d -> %d\n", a, b, a > b);
    printf("%d < %d -> %d\n", a, b, a < b);
    printf("%d >= %d -> %d\n", a, b, a >= b);
    printf("%d <= %d -> %d\n", a, b, a <= b);
    printf("%d <= %d -> %d\n", a, b, a <= b);
    
    return 0;
}
