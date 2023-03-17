#include <stdio.h>

/**
 * @brief "fputs()" allow us to write string in the output stream
 * @note this tutorial will use "fputs()" to write strings to file
 * 
 */

int main(int argc, char const *argv[])
{
    FILE *file = fopen("file.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fputs("abc\n", file);

    fputs("123", file);
    fputs("456\n", file);

    // "fputs()" not writen null operator (\0)
    char string[] = "test string\n";
    fputs(string, file);
    fputs(string, stdout);

    if (fputs("writing to stdin", stdin) == EOF)
    {
        printf("fputs() error\n");
        perror("ERROR");
        return 1;
    }
    



    fclose(file);
    
    return 0;
}
