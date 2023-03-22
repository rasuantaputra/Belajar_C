#include <stdio.h>
#include <direct.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
    // make directory in absolute path
    int retval = _mkdir("C:\\Users\\rasua\\Documents\\PUTRA\\Belajar\\Belajar_C\\114. Make A Directory Using _mkdir() On Windows\\test\\test_2");

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
