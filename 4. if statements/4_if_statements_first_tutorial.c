#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("store number 0-3 : ");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Number you stored equal to %d !\n", a);
    }
    else if (a == 1)
    {
        printf("Number you stored equal to %d !\n", a);
    }
    else if (a == 2)
    {
        printf("Number you stored equal to %d !\n", a);
    }
    // if only have 1 argument, this way is work!
    else if (a == 3) printf("Number you stored equal to %d !\n", a);
    else printf("No one match !\n");

    printf("END of Program\n");
    
    

    return 0;
}
