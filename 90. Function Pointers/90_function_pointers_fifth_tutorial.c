#include <stdio.h>
#include <stdbool.h>

/**
 * @note functions pointer not allocate space like regular pointer (malloc, calloc, free)
 * @note functions pointer are pointer to instruction not data
 * @note functions pointer cant use "pointer arithmatic"
 */

int celcius_temp(int a)
{
    if (a <= 0) return true;
    else return false;    
}

int fahrenheit_temp(int a)
{
    if (a <= 32) return true;
    else return false;    
}


void is_freezing(bool (*freez_check) (int))
{
    int temperature = 0;
    printf("Enter temperature: ");
    scanf("%d", &temperature);

    if (freez_check(temperature)) printf("It's freezing!\n");
    else printf("It's NOT freezing!\n");

}


int main(int argc, char const *argv[])
{
    printf("Celcius...\n\n");
    is_freezing(celcius_temp);
    is_freezing(celcius_temp);

    printf("\nFahrenheit...\n\n");
    is_freezing(fahrenheit_temp);
    is_freezing(fahrenheit_temp);
    
    return 0;
}
