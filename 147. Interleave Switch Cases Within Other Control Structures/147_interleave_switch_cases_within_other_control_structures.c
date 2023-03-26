#include <stdio.h>
/**
 * @note interlace control structure not widly use because it could be complicated to read and nderstand
 * @note but it can be one trick
 */
int main(int argc, char const *argv[])
{
    int option = 1;

    switch (option)
    {
    case 1:
        puts("option 1 choosen");
    // without break ok!
// ===================================
    if (option >= 1)
    {
    // it will be executed because we didnt use "break"
    case 2:
        puts("option 2 selected");
    }
// ===================================
    while (option <= 10)
    {
        printf("option: %d\n", option);
        option++;
    }
    
    
    
    
    default:
        break;
    }
    return 0;
}
