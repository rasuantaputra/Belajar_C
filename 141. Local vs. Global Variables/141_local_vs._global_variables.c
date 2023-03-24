#include <stdio.h>

/**
 * @note in practical is unusual to use global variable, because it make confuse
 * 
 * We're not required to initialize global variables, but if we do we need to 
 * initialize them to a constant value.  So for example the below statement will
 * cause a compiler error because we are attempting to initialize x using 
 * a variable and not a constant.
 * 
 */



// global variable accessible in etire scope/program
int global = 50;

int x = 5;

void function1()
{
    // this is local variable, only accessible in this scope
    int local = 10;
    printf("local: %d\n", local);
    // we can increment "global" here
    global++;
}

int main(int argc, char const *argv[])
{
    function1();

    // we cant access "local" here
    // local = 20;

    // we can increment "global" here
    global++;
    printf("global: %d\n", global);

    // its ok if we have a same variable name with global
    int x = 100;
    printf("x : %d\n", x); // but, local will be execute rather global variable

    if (1 == x)
    {
        // "block" is local
        int block = 2000;
        printf("block: %d\n", block);        
    }

    // it willbe error
    // block = 1;
    
    return 0;
}