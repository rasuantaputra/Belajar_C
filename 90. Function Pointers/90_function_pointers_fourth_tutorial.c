#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multipication(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

// this how to read:
// function called "select_operation" and going to return a pointer to function that accept two int arguments
// and returns int value
int (*select_operation())(int, int)
{
    int option = 0;

    printf("Select An Operation\n");
    printf("1) Sum\n");
    printf("2) Subtract\n");
    printf("3) Multipication\n");
    printf("4) divide\n");

    printf("Enter: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        return sum;
        break;
    case 2:
        return subtract;
        break;
    case 3:
        return multipication;
        break;
    case 4:
        return divide;
        break;
    default:
        return NULL;
        break;
    }
}

int main(int argc, char const *argv[])
{
    int (*operation) (int, int) = select_operation();

    printf("answer: %d\n", operation(20, 5));

    return 0;
}
