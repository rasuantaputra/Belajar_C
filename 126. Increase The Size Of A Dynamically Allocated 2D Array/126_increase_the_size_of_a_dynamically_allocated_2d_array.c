#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int **array;

    int cols = 4;
    int rows = 4;

    array = malloc(sizeof(int *) * rows);

    for (int i = 0; i < rows; i++) array[i] = malloc(sizeof(int) * cols);
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            array[i][j] = (i * 10) + j;

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++) printf("%02d ", array[i][j]);
        printf("\n");
    }
        
    printf("\n");

    // lets realloc
    printf("\n===== Increasing Size/realloc of Coloumns =====\n");
    cols += 3;
    for (int i = 0; i < rows; i++) array[i] = realloc(array[i], sizeof(int) * cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            array[i][j] = (i * 10) + j;

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++) printf("%02d ", array[i][j]);
        printf("\n");
    }

    printf("\n===== Increasing Size/realloc of Rows =====\n");
    int new_rows = 3;
    rows += new_rows;
    array = realloc(array, sizeof(int *) * rows);
    
    // i'm not understand why we should rows - new_rows ???
    for (int i = rows - new_rows; i < rows; i++) array[i] = malloc(sizeof(int *) * cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            array[i][j] = (i * 10) + j;

    for (int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++) printf("%02d ", array[i][j]);
        printf("\n");
    }
    
    for (int i = 0; i < rows; i++) free(array[i]);
    free(array);
    


    return 0;
}
