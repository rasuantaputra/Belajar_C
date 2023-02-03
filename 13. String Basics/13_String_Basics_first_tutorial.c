#include <stdio.h>

int main(int argc, char const *argv[])
{
    char string[5] = "test";
    char long_sting[] = "this is the long long stirng";
    printf("string: %s\n", string);

    for (int i = 0; i < 5; i++)
    {
        printf("string[%d]: '%c'\n", i, string[i]);
    }

    printf("long string: %s\n", long_sting);
    return 0;
}
