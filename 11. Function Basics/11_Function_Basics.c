#include<stdio.h>

// prototype function or function declaration
int add(int a, int b);
int multiplication1(int x, int y);
int multiplication2(int x, int y);
void print_int(int a);


int main(int argc, char const *argv[])
{
    int add_output = add(3, 5);

    printf("add_output: %d\n", add_output);
    printf("multipication1 output: %d\n", multiplication1(3,5));
    printf("multipication1 output: %d\n", multiplication2(3,5));
    print_int(50);

    return 0;
}


int add(int a, int b){
    int result = a + b;    
    return result;
}

int multiplication1(int x, int y){
    int result = 0;
    for (int i = 0; i < x; i++)
    {
        result += y;
    }

    return result;   
}

int multiplication2(int x, int y){
    int result = 0;
    for (int i = 0; i < x; i++)
    {
        // nesting function ?
        result = add(result, y);
    }
    
    return result;
}

// function without return
void print_int(int a){
    printf("int: %d\n", a);
}
