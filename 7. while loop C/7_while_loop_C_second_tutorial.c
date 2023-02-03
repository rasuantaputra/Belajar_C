#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;

    // another way to quit the loop whitout increamenting a variable
    while (i != 5)
    {
        printf("Enter 5 to quit : ");
        scanf("%d", &i);
    }
    printf("YOU QUIT THE LOOP !");
    
    return 0;
}
