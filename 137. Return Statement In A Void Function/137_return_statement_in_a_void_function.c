#include <stdio.h>

// return make the function stop executing.
// we can use that benefit in void function
// "return" in void function not for returning value, but stop the execution

int increment(int x)
{
    return x + 1;
    // this will never executing because return stop the function
    printf("print this !\n");
}

void length_error()
{
    printf("Invalid array length!\n");
}

void print_array(int array[], int length)
{
    // "return" keyword here not for return a value. but stop the execution
    // if (length < 0)return;

    // this way is allow too
    if (length < 0)return length_error();
    
    for (int i = 0; i < length; i++) printf("%d ", array[i]);
    printf("\n");
    
}


int main(int argc, char const *argv[])
{
    printf("%d\n", increment(5));

    int array[] = {1, 2, 3, 4, 5};

    print_array(array, -1);
    printf("Done!\n");

    return 0;
}
