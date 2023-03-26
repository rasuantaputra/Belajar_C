#include <stdio.h>
#include <stdbool.h>

// recursive function
int sum(int n)
{
    if(0 == n) return 0;
    else return n + sum(n - 1);
}

// head recursive
int sum_head(int n, int result)
{
    if(n > 0) return sum_head(n - 1, result + n);
    else return result;
}

// tail recursive
int sum_tail(int n, int result)
{
    if(0 == n) return result;
    else return sum_tail(n - 1, result +n);
}

// tail recursive modified for avoiding stack overflow, using loop
// this function is not using recursion
// 
// 
// The function is a modification of the above sumTail() function to 
// remove the tail recursion.  We do so by putting the function code inside a 
// loop that will repeat forever, and instead of calling the function, assigning
// the function arguments to the parameter variables.
size_t sum_tail_modified(size_t n, size_t result)
{
  while (true)
  {
    if (n == 0) return result;
    result = result + n;
    n = n - 1; 
  }
}

int main(int argc, char const *argv[])
{
    printf("sum(5): %d\n", sum(5));
    printf("sum_head(5, 0): %d\n", sum_head(5, 0));
    printf("sum_tail(5, 0): %d\n\n", sum_tail(5, 0));
    printf("sum_tail_modified(9900000, 0): %zu\n", sum_tail_modified(9900000, 0));
    return 0;
}

// command for compiler optimization
// $ gcc -O2 -o <name_file.exe> <name_file.c>

// command for generate assembly file
// gcc -S -o <name_file.exe> <name_file.c>

// command for generate assembly file with optimalization
// gcc -S -O2 -o <name_file.exe> <name_file.c>