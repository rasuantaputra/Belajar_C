#include <stdio.h>

/**
 * @brief "tmpnam()" is make a temporaray file in RAM/buffer when app is running (?)
 * 
 * @note harus coba di linux sepertinya, karena disini masih error
 * @note usually use for store a data if the program crash
 */

int main(int argc, char const *argv[])
{

    char file_name[L_tmpnam];

    tmpnam(file_name);
    printf("%s\n", file_name);
    
    char *file_name2 = tmpnam(NULL);
    printf("%s\n", file_name2);

    return 0;
}
