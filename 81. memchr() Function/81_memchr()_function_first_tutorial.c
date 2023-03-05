#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char data[] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    
    // "memchr()" return the pointer from character array
    // the character will store in "pos" variable
    char *pos = memchr(data, 'y', 10);

    // if the character not found, its gonna return NULL
    // no characer 'y' from index 0-4
    // char *pos = memchr(data, 'y', 4);

    // if the character not found, its gonna return NULL
    // no characer 'z' from index 0-4
    // char *pos = memchr(data, 'z', 10);

    if (pos == NULL)
    {
        printf("Character not found !");
    }else
    {
        for (int i = 0; i < 4; i++)
        {
            printf("pos[%d]: %c\n", i, pos[i]);
        }
    }
    return 0;
}
