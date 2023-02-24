#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char s[] = "some,data,in,commas";

    // the function will return a pointer to the last char that matches in "s"
    char *found_first_last_comma = strrchr(s, ',');
    printf("last char that matches: %s\n", found_first_last_comma);

    char *fail = strrchr(s, 'i');
    if(fail == NULL) printf("Could not find !");
    return 0;
}
