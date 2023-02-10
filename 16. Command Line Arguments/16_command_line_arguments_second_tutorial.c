#include <stdio.h>
// header for converting data type
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if (argc != 3)
    {
        printf("Two args required!\n");
        exit(-1);
    }

    int lower = atoi(argv[1]);
    int higher = atoi(argv[2]);

    for (int i = lower; i <= higher; i++) printf("%d\n", i);
    
    
    

    return 0;
}
