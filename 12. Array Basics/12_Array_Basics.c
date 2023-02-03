#include <stdio.h>

int main(int argc, char const *argv[])
{
    // we can make an array index null
    int grade[] = {91, 82, 73, 64, 55};

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += grade[i];
    }

    printf("total score: %d\n", total);
    printf("avera score: %d\n", total/5);
    
    return 0; 
}
