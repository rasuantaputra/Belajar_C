#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char c = 'Y';
    char string[] = "A string with words in it!";

    if (isalpha(c)) printf("%c is an alphabetic character\n", c);
    else printf("%c is not an alphabetic character\n\n", c);

    if (isalpha(string[25])) printf("%c is an alphabetic character\n", string[25]);
    else printf("%c is not an alphabetic character\n", string[25]);
        
    return 0;
}
