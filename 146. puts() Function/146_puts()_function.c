#include <stdio.h>

/**
 * @note unlike "printf()", "puts()" can accept only one argument
 * @note another big different between those, "puts()" automatically output "\n" at the last strings
 * @note we can supply "puts()" with a strings as argument in a different way like pointer, array etc
 */

int main(int argc, char const *argv[])
{
    
    puts("Priting string literal");
    puts("Another string");

    // "puts()" can accept a pointer
    char *text = "let's we print this pointer string!";
    puts(text);

    // "puts()" can accept a string array
    char text_array[] = "This variable contain array strings!";
    puts(text_array);

    if (puts(text_array)== EOF)
    {
        return 1;
    }
    

    return 0;
}
