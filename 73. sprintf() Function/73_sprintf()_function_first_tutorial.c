#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char string[100];

    printf("Hello %d %f", 2, 10.5);
    printf("\n");

    // same like "printf" but storing to the "char string" variable;
    sprintf(string, "Hello %d %f", 2, 10.5);

    // to proof that string has stored to "char string" variable
    printf("%s\n\n", string);

    // to proof every index that string has stored to "char string" variable
    int length_of_string = strlen(string);
    for (int i = 0; i < length_of_string; i++)
    {
        printf("string[%d] = %c\n", i, string[i]);
    }

    return 0;
}
