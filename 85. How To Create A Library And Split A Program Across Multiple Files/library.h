// ".h" mean a header file
// this is for interfacing function in "library.c"
// inside this header file, we can include another library
// #include<stdio.h>

int add(int a, int b)
{
    // printf("add\n");
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}