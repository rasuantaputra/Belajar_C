#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a = 'a';
    char b = 'b';

    char *const constant_pointer = &a;

    // its not allow, we cant change the value because the pointer is constant
    // constant_pointer = 'X';

    // its allow, because we was dereference the pointer
    *constant_pointer = 'X';
    printf("a: %c\n", a);

    // its not allow, we can't change the pointing to because its constant
    // constant_pointer = &b;

    // its allow, because we was dereference the pointer but "warning" will be occur
    // *constant_pointer = &b;

    char const *pointer_to_constant = &a;

    // second way to write, we can flip around
    // const char *pointer_to_constant = &a;

    printf("*pointer_to_constant: %c\n", pointer_to_constant);

    pointer_to_constant = &b;
    printf("*pointer_to_constant: %c\n", pointer_to_constant);

    // we can't change the value, because the value is not assignable (constant)
    // *pointer_to_constant = 'z';

    // we can make constant pointer to constant
    // const char *const constant_pointer_to_constant = &a;
    
    // we can flip around for second, it has the same mean as above
    char const *const constant_pointer_to_constant = &a;

    // its will be error to, cs its constant pointer
    // *constant_pointer_to_constant = 'z';

    // its will be error to, cs its constant pointer
    // *constant_pointer_to_constant = &b;





    return 0;
}







//  A summary of the different types of pointers we can create and what
// is mutable/immutable (i.e. changable vs. unchangable).
//
//
//                         Pointer      Value
//
//  Non-Const Pointer      Mutable      Mutable
//  To Non-Const
//
//  Non-Const Pointer      Mutable      Immutable
//  To Const
//
//  Const Pointer          Immutable    Mutable
//  To Non-Const
//
//  Const Pointer          Immutable    Immutable
//  To Const