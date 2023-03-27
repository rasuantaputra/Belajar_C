#include <stdio.h>
#include <ctype.h>
#include <string.h>

// the function only affect in uppercae char

int main(int argc, char const *argv[])
{
    char before1 = 'A';
    char before2 = 'z';
    char before3 = '$';


    char after1 = tolower(before1);
    char after2 = tolower(before2);
    char after3 = tolower(before3);

    printf("before1: %c\n", before1);
    printf("before2: %c\n", before2);
    printf("before3: %c\n\n", before3);

    printf(" after1: %c\n", after1);
    printf(" after2: %c\n", after2);
    printf(" after3: %c\n\n", after3);

    char string[] = "STRING OF CHARACTERS";
    printf("string before: %s\n\n", string);
    string[2] = tolower(string[2]);
    printf(" string after 1: %s\n", string);

    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        string[i] = tolower(string[i]);
    }
    printf(" string after 2: %s\n", string);
    

    return 0;
}
