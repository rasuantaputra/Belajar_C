#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char s[] = "AJKHFCAUKWBU234152742745";
    char num[] = "1234567890";

    // "strpbrk()" function return a pointer. so we need to store to pointer
    // "strpbrk()" for found first match character compared both char variable
    char *match = strpbrk(s, num);

    printf("match character: %s\n", match);
    
    char punct[] = ";:,";

    char *fail = strpbrk(s, punct);
    if(fail == NULL) printf("Could not find !");
    
    return 0;
}
