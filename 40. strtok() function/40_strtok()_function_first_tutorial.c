#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[] = "This is t,he way.";
    char delimetor[] = " ";

    // "strtok()" function will scan the string and will stop if meet space " " (for this case)
    // it could be comma ets 
    char *portion = strtok(s, delimetor);
    printf("%s\n", portion);

    // this happend if wee print again and again with NULL
    // its will loop the string until found some tokken
    char *portion1 = strtok(NULL, delimetor);
    printf("%s\n", portion1);

    char *portion2 = strtok(NULL, delimetor);
    printf("%s\n", portion2);

    char *portion3 = strtok(NULL, delimetor);
    printf("%s\n", portion3);

    char *portion4 = strtok(NULL, delimetor);
    printf("%s\n", portion4);   
    return 0;
}
