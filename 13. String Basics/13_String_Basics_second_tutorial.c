#include <stdio.h>
// string lib
#include <string.h>

int main(int argc, char const *argv[])
{
    int count_string = 0;
    char my_string[] = "my long string";
    printf("length of string : %d\n", strlen(my_string));



    for (int i = 0; i < strlen(my_string); i++)
    {
        printf("my_string[%d]: '%c'\n", i, my_string[i]);
        count_string++;
    }

    printf("count my_string: %d\n", count_string);

    // function for copying string from string lib
    char s1[] = "hallo this is string dude";
    char s2[300];

    strcpy(s2, s1);

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    


    return 0;
}
