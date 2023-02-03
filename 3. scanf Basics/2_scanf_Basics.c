#include <stdio.h>

/*
    @note scanf() isnt a best way to use
    @note in real world of c programming, scanf() isnt use
*/
int main(int argc, char const *argv[])
{
    // we put a default number
    int a = 0;
    float b = 0;
    double c = 0;
    
    int n1, n2, n3;
    n1 = n2 = n3 = 0;

    char str[100];

    printf("Enter an integer number : ");
    // scanf must be in pointer
    scanf("%d", &a);
    printf("The number you entered is : %d\n", a);

    printf("======================\n");

    printf("Enter a float number : ");
    // scanf must be in pointer
    scanf("%f", &b);
    printf("The number you entered is : %f\n", b);

    printf("======================\n");
    
    printf("Enter n1 n2 n3 : ");
    // scanf must be in pointer
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("n1: %d n2: %d n3: %d\n", n1, n2, n3);
    printf("n1+n2+n3 = %d\n", n1+n2+n3);

    printf("======================\n");

    printf("Enter a string : ");
    // scanf dont need "&" operator (pointer), because string already memory adress
    scanf("%s", str);
    printf("string entered: %s\n", str);
    
    return 0;
}
