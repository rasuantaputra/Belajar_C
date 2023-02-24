#include <stdio.h>

/*********************************************************************
 * @note we can treat array as pointer
 * @note but stricly say array is still array and pointer is pointer
 * @note so we can't refer/assign array to array
 * @note pointer and array are completly interchangeable
 * @note pointer notation not often to use because lot of confusing
 * ********************************************************************
 */

void printing_function(int *a);

int main(int argc, char const *argv[])
{
    int array[] = {8, 6, 31};
    int *b;

    // because "array" is pointer, so "b" and "array" have same address
    // and "b" can acess "array" value
    b = array;
    printf("b: %p\narray: %p\n\n", b, array);

// ==========================================================================
    printf("we can pass to function\n\n");
    // we can pass to function
    printing_function(array);
// ==========================================================================

// ================================ Array Notation ==========================
    printf("Array Notation\n");
    // we can acess "array" value like this, because "b" refer to "array"
    // this called array notation
    printf("b[2]: %d\n\n", b[2]);
// ==========================================================================

// ================================= Pointer Notation =========================
    printf("Pointer Notation\n");

    printf("*array = %d\n", *array);

    // this called "Pointer Arithmetic"
    printf("*(b) = %d\n", *(b));
    printf("*(b + 1) = %d\n", *(b + 1));
    printf("*(b + 1) = %d\n", *(b + 2));
    printing_function(array + 2);
// ==========================================================================
    
// ================================= using increment =========================
    printf("\nUsing Increment\n");
    b++;
    printf("*b = %d\n", *b);
    printf("*b = %d\n", *(b + 1));
// ==========================================================================

// ================================= PROHIBITED !!! =========================
    // int c[3] = {1, 2, 3};
    // array = c;
    // array++
    // printf("\n\narray[1] = %d\n", array[1]);
// ==========================================================================





    return 0;
}

void printing_function(int *a)
{
    printf("a[0]: %d\n", a[0]);
}