#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrix [3][5] =
    {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9},
        {10, 11, 12, 13, 14}
    };

    printf("      matrix[1]: %zu\n", matrix[1]);
    printf("    matrix[1]+1: %zu\n", matrix[1]+1); // it will print first element in 2nd row, wich is the value is "6"
    printf(" *(matrix[1]+1): %zu\n\n", *(matrix[1]+1));


    printf("    &matrix[1]: %zu\n", &matrix[1]);
    printf("  &matrix[1]+1: %zu\n", &matrix[1]+1); // it will print etire element in 3rd row
    printf("*(&matrix[1]+1: %zu)\n\n", *(&matrix[1]+1)); // we try to print the value (10) using dereference but failed

    // for printing the value, we need to use another pointer (se tutorial "21. Introduction to Pointers")
    // int *try_to_print_value = &matrix[1]+1; // we got warning here
    int *try_to_print_value = (int *) (&matrix[1]+1); // using typecast for make awrning gone away

    printf("try_to_print_value: %zu\n", try_to_print_value);
    printf("*try_to_print_value: %zu\n", *try_to_print_value);

    // if we dont use bracket "(int *) &matrix[1]" will execute first, and we will get "6"
    // int *try_to_print_value = (int *) &matrix[1]+1; // using typecast for make awrning gone away
    
    // another way to get "10"
    // this format make pointer super confusing 
    printf("*(*(&matrix[1]+1)):  %zu\n\n", *(*(&matrix[1]+1))); // we try to print the value (10) using dereference but failed
    

    return 0;
}
