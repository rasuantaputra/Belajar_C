#include <stdio.h>
#include <stdlib.h>

//  m = number of rows
//  n = number of coloumns
int **create_matrix(int m, int n, int fill_value)
{
    int **matrix;

    matrix = malloc(sizeof(int *) * m);

    for (int i = 0; i < m; i++) matrix[i] = malloc(sizeof(int) * n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            matrix[i][j] = fill_value;
            
    return matrix;
}

int main(int argc, char const *argv[])
{
    int **matrix;
    int m = 5;
    int n = 4;

    matrix = create_matrix(m, n, 2);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }

    for (int i = 0; i < m; i++)free(matrix[i]);    
    free(matrix);
    
    
    return 0;
}
