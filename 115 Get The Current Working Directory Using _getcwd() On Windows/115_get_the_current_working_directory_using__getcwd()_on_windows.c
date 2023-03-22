#include <stdio.h>
#include <stdlib.h>
#include <direct.h>
#include <errno.h>

/**
 * @brief in this tutorial we are going to learn how to get the current directory
 * @note this tutorial only working in WINDOES MACHINE 
 */

int main(int argc, char const *argv[])
{

    // first way to get the current directory
    char buffer[1024];

    // second way to get the current directory (using pointer) or dinamically allocate the space
    // "10" mean minimum threshold, its ok if the path need more. it will automatically allocateed
    // actually "_getcwd()" is using "malloc()" to allocate the space, so we can writed like beneath
    char *rerptr = _getcwd(NULL, 10);



    // its cause error because not enough space
    char buffer_error[10];

    _getcwd(buffer, 1024);

    printf("======= First way =====\n");
    printf("Current directory: \n%s\n\n", buffer);

    printf("======= Second way =====\n");
    printf("Current directory: \n%s\n\n", rerptr);


    printf("======= Error example =====\n");
    if (_getcwd(buffer_error, 20) == NULL)
    {
        printf("Get current working directory failed.\n");

        // using errno to detecting an error
        if (errno == ERANGE)
        {
            printf("Path exceeds max buffer length.\n");

        }        

        return 1;
    }

    free(rerptr);
    
    
    return 0;
}
