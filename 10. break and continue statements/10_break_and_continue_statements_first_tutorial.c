#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    while (i < 10)
    {
        i++;  
        if (i == 5) break;
        printf("i: %d\n", i);

    }

    printf("\nEND LOOP\n");
    
    return 0;
}
