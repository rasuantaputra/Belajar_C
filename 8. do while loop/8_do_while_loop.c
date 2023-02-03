#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 6;

    // "do while" loop will executed atleast once, even though a condition false
    do
    {
        printf("i : %d\n", i);
        i++;
    } while (i < 5);
    
    return 0;
}
