#include <stdio.h>

void function()
{
    printf("Function !\n");
}

int main(int argc, char const *argv[])
{

    void (*fnc_ptr1)() = function;

    (*fnc_ptr1)();
    fnc_ptr1();

    printf("\n");

    void (*fnc_ptr2)() = &function;

    (*fnc_ptr2)();
    fnc_ptr2();

    /**
     * @note compiler treat "void (*fnc_ptr1)() = function" and "void (*fnc_ptr2)() = &function" is same !
     * @note using "&" or not is same !
     * 
     */
    return 0;
}
