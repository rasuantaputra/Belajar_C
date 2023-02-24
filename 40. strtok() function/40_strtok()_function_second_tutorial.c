#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[] = "This is the way.";
    char delimetor[] = " ";

    // "strtok()" function will scan the string and will stop if meet space " " (for this case)
    // it could be comma ets 
    char *portion = strtok(s, delimetor);

    // "s" and "portion" has a same adress
    // how "strtok()" is not store a new string to the heap
    // but inserting null terminator to "s" (modify the original string depend our opinion)
    printf("s address: %p\n", s);
    printf("portion address: %p\n\n", portion);

    // while (portion != NULL)
    // {
    //     printf("%s\n", portion);
    //     portion = strtok(NULL, delimetor);
    // }

  for (int i = 0; i < 23; i++)
    if (s[i] == '\0') printf("\\0\n");
    else printf("%c\n", s[i]);

    
    return 0;
}
