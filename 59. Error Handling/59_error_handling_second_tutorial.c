#include <stdio.h>
#include <string.h>

/**
 * @brief error handling menggungakan string.h
*/



int main(int argc, char const *argv[])
{
    FILE *file;

    // ini akan menjadi error karena memang gada file ini
    file = fopen("dne.txt", "r");

    if (file == NULL)
    {   
        perror("Ini dia error nya");
    }else fclose(file);

    return 0;
}
