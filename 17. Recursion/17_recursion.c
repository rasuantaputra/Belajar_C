#include<stdio.h>

int factorial(int n);

int main(int argc, char const *argv[])
{
    int n = 0;
    printf("Enter factorial : ");
    scanf("%d", &n);

    int iteration_factorial = 1;
    
    // recursive solution
    int recursion_factorial = factorial(n);

    // iterasion solution
    while (n >= 1)
    {
        iteration_factorial = n * iteration_factorial;
        n--;
    }

    printf("iterasion solution result : %d\n", iteration_factorial);
    printf("recursive solution result : %d\n", recursion_factorial);
    
    return 0;
}

int factorial(int n){
    if (n == 1) return 1;
    return n * factorial(n-1);
}