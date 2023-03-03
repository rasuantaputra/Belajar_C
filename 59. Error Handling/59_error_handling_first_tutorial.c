#include <stdio.h>
#include <errno.h>

/**
 * @brief error handling digunakan untuk mengetahui error apa yg terjadi
*/

extern int errno;

int main(int argc, char const *argv[])
{
    FILE *file;

    printf("Errno before : %d\n", errno);
    // ini akan menjadi error karena memang gada file ini
    file = fopen("dne.txt", "r");

    if (file == NULL)
    {   
        printf("Errno after : %d\n", errno);
    }else fclose(file);
    
    return 0;
}
