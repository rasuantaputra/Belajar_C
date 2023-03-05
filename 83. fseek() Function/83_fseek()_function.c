#include <stdio.h>

/**
 * @brief "fseek()" untuk menyisipkan string dalam sebuah file
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

int main(int argc, char const *argv[])
{
    FILE *file;

    file = fopen("file.txt", "w");

    if(file == NULL)
    {
        printf("Error opening file\n");
        // return 1 for signal there is something wrong to the terminal
        return 1;
    }

    fprintf(file, "0987654321\n");
    fprintf(file, "asdfghjkl'\n");

    fseek(file, 4, SEEK_SET);    
    fprintf(file, "%%%");

    fseek(file, 1, SEEK_CUR);
    fprintf(file, "@");

    fseek(file, -4, SEEK_END);
    fprintf(file, "**");

    if (fseek(file, 10, SEEK_END) == 0)
    {
        printf("Seek faied !\n");
        return 1;
    }
    

    fclose(file);

    return 0;
}
