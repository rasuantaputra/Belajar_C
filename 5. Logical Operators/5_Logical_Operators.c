#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int year = 2023;
    int price = 35000;

    printf("===== AND =====\n");
    if (year <= 2023 && price <=35000)
        printf("TRUE\n");
    else
        printf("FALSE");
    printf("===== OR =====\n");
    // in C "or" writen as EXOR in another programming lang
    if (year <= 2023 || price <=5000)
        printf("TRUE\n");
    else
        printf("FALSE");
    printf("===== NOT =====\n");
    if (!(year <=2023)) printf("TRUE\n");
    else printf("FALSE\n");
    return 0;
}
