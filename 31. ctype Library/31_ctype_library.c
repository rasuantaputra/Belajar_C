/***************************************************************
 * @file 31_ctype_library.c
 * @brief ctype.h for work with character
 * 
 * @copyright Copyright (c) 2023
 * **************************************************************
 */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    // alphabet or numeric
    // isalnum('a') ? printf("true\n") : printf("false\n");
    // isalnum('Z') ? printf("true\n") : printf("false\n");
    // isalnum('8') ? printf("true\n") : printf("false\n");
    // isalnum('$') ? printf("true\n") : printf("false\n");
    
    // alphabet
    // isalpha('q') ? printf("true\n") : printf("false\n");
    // isalpha('G') ? printf("true\n") : printf("false\n");
    // isalpha('7') ? printf("true\n") : printf("false\n");

    // not printable characrter
    // iscntrl('c') ? printf("true\n") : printf("false\n");
    // iscntrl('\n') ? printf("true\n") : printf("false\n");
    // iscntrl('\t') ? printf("true\n") : printf("false\n");

    // digit
    // isdigit('2') ? printf("true\n") : printf("false\n");
    // isdigit('L') ? printf("true\n") : printf("false\n");

    // graphical presentation
    // isgraph('5') ? printf("true\n") : printf("false\n");
    // isgraph('Z') ? printf("true\n") : printf("false\n");
    // isgraph(' ') ? printf("true\n") : printf("false\n");

    // lowercase or not
    // islower('z') ? printf("true\n") : printf("false\n");
    // islower('F') ? printf("true\n") : printf("false\n");

    // uppercase or not
    // isupper('z') ? printf("true\n") : printf("false\n");
    // isupper('F') ? printf("true\n") : printf("false\n");

    // printable or not printable character
    // isprint(' ') ? printf("true\n") : printf("false\n");
    // isprint('\n') ? printf("true\n") : printf("false\n");

    // punctiation character or not
    // ispunct(';') ? printf("true\n") : printf("false\n");
    // ispunct('x') ? printf("true\n") : printf("false\n");

    // whitespce character
    // isspace(' ') ? printf("true\n") : printf("false\n");
    // isspace('\n') ? printf("true\n") : printf("false\n");
    // isspace('\t') ? printf("true\n") : printf("false\n");
    // isspace('@') ? printf("true\n") : printf("false\n");

    // hexadecimal character
    // isxdigit('A') ? printf("true\n") : printf("false\n");
    // isxdigit('c') ? printf("true\n") : printf("false\n");
    // isxdigit('f') ? printf("true\n") : printf("false\n");
    // isxdigit('g') ? printf("true\n") : printf("false\n");

    // convert to lowwercase
    char lower = tolower('A');
    printf("lower: %c\n", lower);

    // convert to upper
    char upper = toupper('s');
    printf("upper: %c\n", upper);
    
    return 0;
}
