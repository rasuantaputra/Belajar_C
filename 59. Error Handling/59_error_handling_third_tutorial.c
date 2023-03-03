#include <stdio.h>
#include <errno.h>
#include <string.h>

/**
 * @brief C punya standar error handling
*/

extern int errno;

int main(int argc, char const *argv[])
{
    FILE *file;

    printf("Errno before: %d\n", errno);
    // ini akan menjadi error karena memang gada file ini
    file = fopen("dne.txt", "r");

    if (file == NULL)
    {   
        // menggunakan standar error di C, pesan error nya bisa di tulis dalam sebuah file atau jadi log
        fprintf(stderr, "Errno after: %d\n", errno);
        fprintf(stderr, "Errno massege: %s\n", strerror(errno));
    }else fclose(file);
    
    return 0;
}
