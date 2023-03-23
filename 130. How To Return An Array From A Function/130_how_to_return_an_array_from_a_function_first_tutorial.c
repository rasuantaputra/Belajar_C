#include <stdio.h>

/*
// this way will be error
// i still dont understand about the explaination
int *set_array(int value)
{
    // this variable has the scope of this function
    // the life time of the variable is going to be limited to each individual function call to this function
    // so, when the function returning value, the variable no longger going to exist
    int array_local[5];

    for (int i = 0; i < 5; i++) array_local[i] = value;
    
    // this will be warning
    return array_local;
}
*/

// this for the solution
// second input of this function direcly manipulate array using pointer
void set_array(int value, int *array)
{
    for (int i = 0; i < 5; i++) array[i] = value;
}

int main(int argc, char const *argv[])
{
    int array[] = {1, 2, 3, 4, 5};

    set_array(4, array);

    for (int i = 0; i < 5; i++) printf("array[%d]: %d\n", i, array[i]);
    
    
    return 0;
}
