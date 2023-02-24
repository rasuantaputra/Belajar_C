#include <stdio.h>
#include <string.h>

/**
 * @brief "memcpy()" is copying a block of data to another address
 * 
 * @note in string there is NULL because there is NULL terminator in string
 * @note char s[] = "abc" => the index is [4]. because the NULL terminator
 */

int main(int argc, char const *argv[])
{
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    char destination_memory[27];

    memcpy(destination_memory, s, sizeof(char) * 27);

    printf("destination_memory = %s\n", destination_memory);


    char e[10];
    memcpy(e, s+8, sizeof(char) * 9);
    printf("e = %s\n", e);
    e[9] = '\0';

    
    return 0;
}
