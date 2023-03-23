#include <stdio.h>

/**
 * @note we gonna use "%zu" for get integer adress format instead of hex format
 * @note "%zu" used because integer address format is very large, so it will make more clear format
 * @note see second toturial for the consequence of arithmatic pointer
 */


int main(int argc, char const *argv[])
{
    int array [5];
    array [2] = 5;

    // without "&" symbol, we only pointer to first element the "array" 
    printf(" array: %zu\n", array);
    // here, we got exact same memory adrress
    // "&" symbol giv us pointer to entire "array"
    printf("&array: %zu\n\n", &array);

    // the differences above matters when we try to use pointer erithmatic
    printf(" array+1: %zu\n", array+1); // "+1" mean here is s(+1*sizeof(int)) => .... + (1*4)
    printf("&array+1: %zu\n\n", &array+1); // "+1" mean here is (+1*sizeof(int * array_element)) => .... + (5*4)




    return 0;
}
