#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char tweet[] = "This is my @mention";
    char *mention = strchr(tweet, '@');

    printf("mention : %s\n\n", mention);

    // "twee[]" and "mention" in the same address
    // if we change the character from it, it will be change
    printf("ADDRESS\n");
    printf("%p\n", tweet + 11);
    printf("%p\n\n", mention);

    // lets try to change "@" from "mention" variabel to something
    mention[0] = '&';
    printf("tweet[] : %s\n", tweet);

    return 0;
}
