#include <stdio.h>
#include <stdbool.h>

/**
 * 
 * @brief this tutorial about parsing situation
 * 
 */

int main(int argc, char const *argv[])
{
    FILE *berkas = fopen("file2.txt", "r");

    if (berkas == NULL)
    {
        printf("error opening file ....");
        return 1;
    }

    int c;
    char op1[256];
    int i = 0;

    while (true)
    {
        c = fgetc(berkas);

        if (feof(berkas) || ferror(berkas))break;

        if (c == '+')
        {
            ungetc(c, berkas);
            break;
        }
        else
        {
            op1[i] = c;
            i++;
        }       
    }

    op1[i] = '\0';
    printf("op1: %s\n", op1);

    char string_sisa[256];
    
    fgets(string_sisa, 256, berkas);
    printf("string_sisa: %s\n", string_sisa);

    fclose(berkas);
    

    return 0;
}
