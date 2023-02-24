#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char haystack[] = "This is the way !.";
    char needle[] = "the";

    char *find = strstr(haystack, needle);
    printf("First string matched in string chunk: %s\n", find);

    char *fail = strstr(haystack,"dumbledore");
    if(fail == NULL) printf("Could not find !"); 
    return 0;
}
