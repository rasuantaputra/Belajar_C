#include <stdio.h>

/**
 * @note "sizeof()" is operator
 * @note "sizeof()" technically not return "size_t" data type 
 * @note detail explaination from portofoliocourses
 */

extern int bad_array[];

void make_array(int length)
{
    char myarray[length];
    printf("sizeof myarray: %zu\n", sizeof myarray);
}

int main(int argc, char const *argv[])
{

    // it's still work if we use %d instead of %zu
    printf("sizeof(int): %d\n", sizeof(int));
    // but usind %zu more safe instead of %d
    printf("sizeof(int): %zu\n", sizeof(int));

    // "sizeof()" in practice for helping us in memmory allocation
    // int *array = malloc(10 * sizeof(int));
    // free(array);
    
    printf("sizeof(char): %zu\n", sizeof(char));
    printf("sizeof(double): %zu\n", sizeof(double));

    // we could also use "sizeof()" operator with the variable
    double x = 5;
    // its actually works without open/close bracket
    printf("sizeof x: %zu\n", sizeof x); // the result is 8, because it takes 8byte to store the variable

    char string[] = "123456789";
    printf("sizeof string: %zu\n", sizeof string); 

    double array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("sizeof array: %zu\n", sizeof array); // the result is 80, because each index store by 8byte so 8 * 10 = 80
    
    // we can use for get the length of the array
    size_t array_length_1 = sizeof(array)/sizeof(double);
    printf("array_length_1: %zu\n", array_length_1); 

    // it will be get the same value, because "array[0]" is double 
    size_t array_length_2 = sizeof(array)/sizeof(array[0]);
    printf("array_length_2: %zu\n", array_length_2);
    
    printf("double literal: %zu\n", sizeof(1.23));

    // When we call make_array with 20 and 10, the array 'myarray' will be 
    // declared with different sizes, and yet sizeof will still return the correct
    // size in bytes of 'myarray'.  So contrary to what some online sources may 
    // state, sizeof is not strictly a compile-time operator and may sometimes do
    // work at runtime.
    make_array(20);
    make_array(10);

    // it's work at the run time
    // You may think that because the arguments above are literals that somehow 
    // the compiler is determining the size at compile-time.  This is not the 
    // case, as even if we have the user supply the length argument to 
    // make_array() at run-time, sizeof will return the correct size of the array.
    int size = 0;
    printf("Size: ");
    scanf("%d", &size);
    make_array(size);

    // will cause error
    // If we uncomment the below code an error will result, as bad_array is 
    // an incomplete type because it has no dimension, and sizeof cannot find 
    // the size of an incomplete type.
    //
    // printf("sizeof bad_array: %zu\n", sizeof bad_array);

    return 0;
}

// sizeof() returns the storage size of a type or an
// expression in char-sized units
//
// i.e. sizeof(char) will always be 1
//
// Technically speaking the size of a char in bits is
// specified by a constant CHAR_BITS and could be
// something other than a byte.
//
// But practically speaking, size of a char is virtually
// always '1 byte' (8 bits).
//
// So we can effectively say that sizeof() returns the
// number of bytes to store the type or expression.
