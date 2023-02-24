#include <stdio.h>
#include <stdlib.h>

/**
 * @brief "exit()" function allows to terminate our program execution whenever we want
 */

void func_with_exit();

int main(int argc, char const *argv[])
{
    // printf("Hallo world\n");
    // exit(0);
    // exit(1);
    // exit(EXIT_FAILURE);
    // exit(EXIT_SUCCESS);
    // printf("Another print text here\n");
    func_with_exit();
    return 0;
}

void func_with_exit()
{
    printf("in the func_with_exit\n");
    exit(1);
    printf("Below the exit in func_with_exit !\n");
}