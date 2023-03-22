#include <stdio.h>
#include <direct.h>
#include <errno.h>

int main(int argc, char const *argv[])
{   
    // it will make directory with "test" name
    _mkdir("test");

    // error will occure if the directory already exsist
    // the "_mkdir()" fuction will return -1
    // to detecting an error we can use "errno.h" lib
    int retval = _mkdir("test");

    if (retval == -1)
    {
        printf("Make directory failed.\n");

        // detecting error using errno
        if (errno == EEXIST) printf("Directory already exist.\n");
        // if the path not found its cause error too
        else if (errno == ENOENT) printf("Path not found.\n");
        
        return 1;
    }
    else printf("Make directory succeeded.\n");
    
    return 0;
}
