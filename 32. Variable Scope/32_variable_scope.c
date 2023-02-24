#include <stdio.h>

void print();
void func_with_param(int a);
// this is global variable
int y = 9;



int main(int argc, char const *argv[])
{
    // this is local in main() function only
    int x = 4;
    print("x: %d\n", x);

    print();

    // block scope variable
    {
        // z only accessible in this scope
        int z = 900;
        print("z: %d\n", z);
    }

    // variable i called block scope variable
    for (int i = 0; i < 10; i++)
    {
        print("\t\t\t\t\t\t\n");
    }
    


    return 0;
}

void print()
{
    // this is local in print() function only
    int x = 1000;
    print("x: %d\n", x);
    print("y: %d\n", y);
}

// a literally is local variable, not block scope variable
void func_with_param(int a)
{
    ++a;
    print("++a: %d\n", a);
}