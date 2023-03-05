#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char source[] = "kekuatan.orang@microsoft.com";
    char destination[20];

    // "memccpy()" return null value. so "*post" here gonna be null if we print
    char *post = memccpy(destination, source, '@', 20);
    // mencoba char yg tidak ada di string
    // char *post = memccpy(destination, source, 'q', 20);

    // "memccpy()" didnt provide null terminator character in end of sting we copied, so we provide by our self
    // post[0] = '\0';

    printf("post: %c\n", post);
    
    for (int i = 0; i < 20; i++)
    {
        printf("destination[%d]: %c\n", i, destination[i]);
    }



    return 0;
}
