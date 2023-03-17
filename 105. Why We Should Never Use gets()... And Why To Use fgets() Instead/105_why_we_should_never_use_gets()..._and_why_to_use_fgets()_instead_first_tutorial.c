#include <stdio.h>
/**
 * @brief "gets()" is unsafe
 * 
 * @return int 
 */
int main()
{
    char buffer[5];

    printf("Enter: ");
    // even we enter more than 5 character, all of those will store
    // but store in memory where they really should'nt be (another index too)
    // its gonna be corrupted if we modifing the memory and a security issue too
    gets(buffer);

    printf("String: %s\n", buffer);
    
    return 0;
}
