#include <stdio.h>
#include <string.h>

/**
 * @brief "memset()" use to whole block of memory to particular value
 */

int main(int argc, char const *argv[])
{

    char buffer[10];

    // memset(buffer, 'Z', sizeof(char) * 10);

    memset(buffer, 'Y', sizeof(char) * 5);
    memset(buffer+5, 'Q', sizeof(char) * 5);

  for (int i = 0; i < 10; i++)
    printf("%c", buffer[i]);
  printf("\n");

    
    return 0;
}
