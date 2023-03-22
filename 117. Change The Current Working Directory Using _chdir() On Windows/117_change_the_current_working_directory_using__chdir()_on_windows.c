#include <stdio.h>
#include <direct.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
    char buffer[1024];

    if (_getcwd(buffer, 1024) == NULL)
    {
        printf("Get current working directory  failde.\n");
        return 1;
    }
    printf("Current working directory: \n%s\n\n", buffer);

    // char* newdir = "C:\\Users\\rasua\\Documents\\PUTRA\\Belajar\\Belajar_C\\117. Change The Current Working Directory Using _chdir() On Windows\\test";
    char* newdir = "C:\\test";
    _chdir(newdir);

    // to test that we are in "C:\\test"
    _getcwd(buffer, 1024);

    if (_chdir(newdir) == -1)
    {
        printf("Get current working directory  failed.\n");
        if (errno == ENOENT) printf("Path not found. \n");
        
        return 1;
    }

    printf("Current working directory: \n%s\n\n", buffer);

    return 0;
}
