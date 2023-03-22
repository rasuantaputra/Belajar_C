#include <stdio.h>
#include <string.h>
#include <stdint.h>

/**
 * @note size_t in unsigned !!!
 * 
 */

int main(int argc, char const *argv[])
{
    char *string = "abcdef";

    // actually, "strlen()" is not return int value but size_t
    int length = strlen(string);
    for (int i = 0; i < length; i++) printf("string[%d]: %c\n", i, string[i]);

    // "size_t" is more larger size than integer data type
    int _int_1 = 214748364;
    int _int_2 = 2147483648;
    printf("_int_1: %d\n", _int_1);
    // its gonna be negative because it exceed the sizeof int and back to negative
    printf("_int_2: %d\n", _int_2);


    printf("\n=== Using size_t ===\n");
    size_t _size_1 = 2147483648;
    printf("_size_1: %zu\n", _size_1);

    printf("\n=== SIZE_MAX Prepocessor MAcro Constant Size ===\n");
    printf("SIZE_MAX: %zu\n", SIZE_MAX);

       
    return 0;
}

// =================== DETAIL EXPLANATION ===================
// size_t is defined in multiple header files such as
// string.h, stdio.h, etc.
//
// size_t must be large enough to represent the size of
// any 'object' in C, i.e. things in memory like strings
//
// size_t is defined as of C99 to be an unsigned int
// stored using at least 4 bytes of memory
//
// unsigned int means size_t values CANNOT be negative
//
// size_t MINIMUM range is therefore...
//
//         0 to 4,294,967,295
//
// int range minimum is...
//
//         −32,767 to 32,767
//
// BUT on most modern systems the int range will be...
//
//          -2,147,483,648 to 2,147,483,647