#include <stdio.h>

/**
 * @brief "tmpnam()" is make a temporaray file in RAM/buffer when app is running (?)
 * 
 * @note in this second tutorial we will try to open and write temporary file
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

    FILE *open_and_write_temp_file = fopen(file_name, "w");

    if (open_and_write_temp_file == NULL)
    {
        printf("Error opening temporary file !\n");
    }else
    {
        fprintf(open_and_write_temp_file, "ini ditulis dalam temporary file !");
    }
    
    fclose(open_and_write_temp_file);

    return 0;
}
