#include <stdio.h>

/**
 * @note in general recursion is not use very often to solve partical problem
 * @note indirect recursion use even less
 * @note it could potensially make our code more difficult to understand
 * @note we do see come up sometimes when working with "tree data structure" 
 *
 */

int sum_integer(int n); // direct recursion functiion

void count_down(int n);
void print_even(int n);
void print_odd(int n);

int main()
{
    int sum = sum_integer(100);
    printf("sum: %d\n", sum);

    count_down(10);

    return 0;
}

// this function called direct recursion
// direct recursion = function call it self
int sum_integer(int n)
{
    if (1 == n) return 1;
    else return n + sum_integer(n - 1);    
}

// =========== All of these function called indirect recuision ===========
void count_down(int n)
{
    if(n % 2 == 0) print_even(n);
    else print_odd(n);
}

void print_even(int n)
{
    if(n >= 1)
    {
        printf("%d - even\n", n);
        print_odd(n - 1);
    }
}

void print_odd(int n)
{
    if(n >= 1)
    {
        printf("%d - odd\n", n);
        print_even(n - 1);
    }
}