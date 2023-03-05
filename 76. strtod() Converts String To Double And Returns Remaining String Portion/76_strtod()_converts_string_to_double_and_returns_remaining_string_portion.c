#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char s[] = "892.36738 Some text after double value!";

    // the double value will stored here
    double result;
    // the string value will store here
    char *ptr;

    // "strtod()" will convert setring to double value
    // the string must store in pointer variable
    result = strtod(s, &ptr);

    printf("result: %f\n", result);
    printf("string: |%s|", ptr);   


    return 0;
}
