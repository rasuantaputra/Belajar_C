#include <stdio.h>

/**
 * @brief "return" value in main function for indicate an error
 * @brief if there any error, "return" value will send a signal about the error
 */

int main(int argc, char const *argv[])
{
    int input;

    printf("Enter number : ");
    scanf("%d", &input);

    if (input > 5)
    {
        return 0;
    } else
    {
        return 1;
    }
}
