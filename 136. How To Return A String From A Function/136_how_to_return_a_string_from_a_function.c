#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/**
 * @note Tutorial berbagai cara membuat fungsi dengan retun string
 * @note detail explaination from portofoliocourses
 * 
 */

char *method1();

char *method2();

void *method3(char *s);

char *method4();


int main(int argc, char const *argv[])
{
    printf("===== 1st way =====\n");
    // can not modified
    char *str1 = method1();
    printf("str1: %s\n", str1);

    // // try to modified but its will not work
    // str1[0] = 'a';
    // printf("str1: %s\n", str1);

    printf("\n===== 2nd way =====\n");
    char *str2 = method2();
    printf("str2: %s\n", str2); // it will be null/garbage output number

    printf("\n===== 3rd way =====\n");
    // we need to ensure the index has enough length
    char ret[256];
    method3(ret);
    printf("ret: %s\n", ret);
    

    printf("\n===== 4th way =====\n");
    char *dynamic = method4();
    printf("dynamic: %s\n", dynamic); 
    free(dynamic);

    return 0;
}

char *method1()
{
    // this is not in C standard
    // even this way work, it can not modified, this is the rule in c 
    return "string";
}

char *method2()
{
    char try[] = "try";
    // we will get warning
    // because the "try[]" try to still exist as soon as function return (like in previous tutorial)
    return try;
}

void *method3(char *s)
{
    strcpy(s, "method 3 string");
}

char *method4()
{
    char *string = malloc(8);
    strcpy(string, "dynamic");

    return string;
}

/*******************************************************************************
*
* Methods which are NOT recommended:
*
* 1) Using a global variable to "return" a string by storing the string into the
*    global char array which can then be accessed by the calling function.
*
*   - Using global state via global variables often results in code that is more
*     difficult to understand, trace and debug, i.e. spahgetti code.
*
*   - The memory will be put aside for the global char array whether we are
*     using it or not, taking up space.
*
* 2) Using a static local char array in the function, then storing the string
*    to be returned into this char array, and then returning a pointer to
*    this char array (which will continue to exist even after the function
*    returns because it is static).
*
*   - Like a global variable, the memory will be put aside for the char array
*     whether we are using it or not, taking up space!
*
*******************************************************************************/