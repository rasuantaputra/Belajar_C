#include <stdio.h>
#include <stdlib.h>
/**
 * @brief imagine our program working with large amount of data, our program could temporary store some of that data into a temp file and retrieve it later when it needs it
 * @note "tempfie()" will deleted when we close the file and exit the program
 * @note this totorial still error
 */

#define LENGTH 10

int main()
{
    int *data1 = malloc(sizeof(int) * LENGTH);
    for (int i = 0; i < LENGTH; i++) data1[i] = i;

    FILE *berkas = tmpfile();

    if (berkas == NULL)
    {
        printf("Error opening temp file.\n");
        return 1;
    }

    fwrite(data1, sizeof(int), LENGTH, berkas);

    int *data2 = malloc(sizeof(int) * LENGTH);

    // The FILE pointer 'file' will now point to the end of the file as we have 
    // just written to the file.  If we want to read the data from the file we 
    // should have it point to the beginning of the file.  The rewind() function
    // will rewind the file pointer to the beginning of the file.
    rewind(berkas);

    fread(data2, sizeof(int), LENGTH, berkas);
    fclose(berkas);

    for (int i = 0; i < LENGTH; i++) printf("data2[%d]: %d\n", i, data2[i]);

    free(data1);
    free(data2);

    return 0;
}
