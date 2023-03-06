#include <stdio.h>

/**
 * @brief this tutorial is pointer function for function wich return void
 * 
 */

void print_function(int x)
{
    printf("x: %d\n", x);
}

int main(int argc, char const *argv[])
{
    
    // "*function_pointer" is variable pointer to a function that's going to have avoid return value 
    // and accept a single int argument
    // @note star (*) sign here mean to be declare
    void (*function_pointer_first_way)(int);

    function_pointer_first_way = &print_function;

    // @note star (*) sign here mean to be referance "function_pointer"
    (*function_pointer_first_way)(2);


// ================ ============================== ========================
    // 2nd way to assign "print_function"
    void (*function_pointer_second_way)(int) = &print_function;
    (*function_pointer_second_way)(4);

// ================ ============================== ========================
    // 3rd way to assign "print_function" (without '&')
    void (*function_pointer_third_way)(int) = print_function;
    (*function_pointer_third_way)(10);

// ================ ============================== ========================
    // 4th way to assign "print_function" (without '&')
    void (*function_pointer_fourth_way)(int) = print_function;
    // (without '*')
    (function_pointer_fourth_way)(89);

    return 0;
}
