#include <stdio.h>
/*
    @note break must be include
*/
int main(int argc, char const *argv[])
{
    int num = 0;

    printf("Enter number 1-3 :");
    scanf("%d", &num);

    switch (num - 1)
    {
    case 1:
        printf("Number you entered: 1\n");
        break;
    case 2:
        printf("Number you entered: 2\n");
        break;
    case 3:
        printf("Number you entered: 3\n");
        break;
    default:
        printf("None match\n");
        break;
    }

    printf("END of programm");
    return 0;
}
