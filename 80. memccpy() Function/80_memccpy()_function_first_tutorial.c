#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char source[] = "kekuatan.orang@microsoft.com";
    char destination[20];

    memccpy(destination, source, '@', 20);

    printf("%s", destination);
    
    for (int i = 0; i < 20; i++)
    {
        printf("destination[%d]: %c\n", i, destination[i]);
    }



    return 0;
}
