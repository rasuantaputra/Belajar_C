#include <stdio.h>
#include <string.h>

/**
 * @brief sprintf() can convert number to the string
 */
int main(int argc, char const *argv[])
{
    char pi[1000];
    double double_pi = 3.141592;

    sprintf(pi, "%lf", double_pi);
    printf("%s\n", pi);

    return 0;
}
