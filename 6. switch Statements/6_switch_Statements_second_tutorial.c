#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100]= " ";

    printf("++++ Vowel Counter +++++\n");
    printf("Enter random string/character : ");
    scanf("%s", str);
    printf("Your string/char entered : %s\n", str);
    
    int string_length = strlen(str);

    int uppercase_vowel = 0;
    int a = 0;
    int i = 0;
    int u = 0;
    int e = 0;
    int o = 0;

    for (int j = 0; j <= string_length; j++)
    {
        // toupper() function converts a lowercase alphabet to an uppercase alphabet
        switch (toupper(str[j]))
        {
        case 'A':
            a++;
            uppercase_vowel++;
            break;
        case 'I':
            i++;
            uppercase_vowel++;
            break;
        case 'U':
            u++;
            uppercase_vowel++;
            break;
        case 'E':
            e++;
            uppercase_vowel++;
            break;
        case 'O':
            o++;
            uppercase_vowel++;
            break;
        }
    }

    printf("A : %d\n", a);
    printf("I : %d\n", i);
    printf("U : %d\n", u);
    printf("E : %d\n", e);
    printf("O : %d\n", o);
    printf("Vowel : %d\n", uppercase_vowel);
    
    printf("\n++++ END Program +++++");

    return 0;
}
