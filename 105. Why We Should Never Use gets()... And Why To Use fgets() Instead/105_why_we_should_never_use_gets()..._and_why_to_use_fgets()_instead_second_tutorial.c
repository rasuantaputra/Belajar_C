#include <stdio.h>
#include <stdlib.h>
/**
 * @brief "gets()" is unsafe
 * 
 * @return int 
 */
int main()
{
    char *buffer = malloc(sizeof(char) * 5);
    char *next = malloc(sizeof(char) * 5);

    printf("Enter: ");
    // even we enter more than 5 character, all of those will store
    // but store in memory where they really should'nt be (another index too)
    // its gonna be corrupted if we modifing the memory and a security issue too
    // gets(buffer);

    // "fgets()" not allow more than 5 characters
    fgets(buffer, 5, stdin);    
    printf("String: %s\n", buffer);

    // if we use "fgets()" in "next" an buffer has inputed more than 5 characters, remained character will store in next
    fgets(next, 5, stdin); 
    printf("Next: %s\n", next);

    free(buffer);
    free(next);
    
    return 0;
}
