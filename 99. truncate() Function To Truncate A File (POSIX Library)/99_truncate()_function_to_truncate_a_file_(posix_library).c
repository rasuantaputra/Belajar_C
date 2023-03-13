#include <stdio.h>
#include <unistd.h>
#include <errno.h>

/**
 * @brief "truncate()" berfungsi untuk memotong size file yang kita punyaS
 * 
 * @note "truncate()" provide "errno"
 * @note to check inside file "https://hexed.it/"
 */

int main(int argc, char const *argv[])
{
    // truncate("file.txt", 10);

    // trying if bit size larger than file size
    truncate("file.txt", 50);


    if(truncate("badfile.txt", 10) == -1)
    {
        printf("Error code: %d\n", errno);
        perror("Error");
    }
    return 0;
}
