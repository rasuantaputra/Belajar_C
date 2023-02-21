#include <stdio.h>

#define ROWS 2
#define COLS 3


int main(int argc, char const *argv[])
{
    int array_first_style [ROWS][COLS] = {{1, 2, 3}, 
                                          {4, 5, 6}};

    int array_second_style [ROWS][COLS] = {7, 8, 9, 10, 11};

    int array_input [ROWS][COLS];

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
        {
            printf("array_first_style[%d][%d] = %d\n", i, j, array_first_style[i][j]);
            printf("array_second_style[%d][%d] = %d\n", i, j, array_second_style[i][j]);
        }
    
    printf("\n\n\n");

    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
        {
            printf("Enter array[%d][%d] = ", i, j);
            scanf("%d", &array_input[i][j]);
        }
    printf("==== Print Result : ====\n");
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
        {
            printf("array_input[%d][%d] = %d\n", i, j, array_input[i][j]);
        }
        
    return 0;
}
