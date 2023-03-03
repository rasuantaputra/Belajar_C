#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    // this function will generate random number every programm is running
    // the input must be "time(NULL)"
    srand(time(NULL));

    // if the "srand(2,3,4,5, etc...)" input like this, its still gonna same rand number at every we running the program
    // srand(2);
    for (int i = 0; i <= 5; i++) printf("random number-%d: %d\n",i, rand());

    printf("\n\n");
    printf("++++++++++ Generate random number inbetween 1-20 ++++++++++\n");
    for (int i = 0; i <= 5; i++)
    {
        // how to generate random number inbetween 1-20;
        int random = 1 + (rand() % 20);
        printf("random number-%d: %d\n",i, random);
    }

    return 0;
}
