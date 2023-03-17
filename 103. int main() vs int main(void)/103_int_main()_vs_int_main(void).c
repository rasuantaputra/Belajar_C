#include <stdio.h>

/**
 * @brief we usually use "int main(int argc, char const *argv[]){}"
 * @brief but if we didnt work with command line argument, we can just have this "int main()" or "int main(void)"
 * 
 * @note we better use "int main(void)" if we didnt work with argument
 */

void func1()
{
    printf("func1\n");
}

void func2(void)
{
    printf("func2\n");
}


int main(void)
{

    func1();
    func2();

    // if we call "func1()" with argument, warning will appear
    // the programm still work
    func1(5);

    // but if we call "func2()" with argument, we gonna have error
    // func2("abc");

    // we can call "main()" function
    // main(3.3);


    return 0;
}
