#include <stdio.h>
#include <stdlib.h>

/**
 * @note this second totorial for make more dynamic
 * 
 */

int main(int argc, char const *argv[])
{

    int rows = 5;
    int cols = 5;

    // dynamically allocate 2d array
    int **array = malloc(sizeof(int *) * rows);

    // we can use for instead of settings each index
    for (size_t i = 0; i < rows; i++) array[i] = malloc(sizeof(int) * cols);

    array[1][2] = 5;
    printf("array[1][2] = %d\n", array[1][2]);

    // free for each indext
    for (int i = 0; i < rows; i++) free(array[i]);
    // We can then free the array of pointers to ints
    free(array);
    
    
    
    return 0;
}

// This is how the dynamically allocated 2D array can be visualized and how 
// it is laid out in memory...
//
//
//          array of
//          pointers
//             |
//             |
//             |
// array -> array[0] -> 1,2,3   <--- arrays of ints
//          array[1] -> 4,5,6
//          array[2] -> 7,8,9
//
//
//
//           ----- array -----
//          |        |        |
//          |        |        |
//     array[0]  array[1]   array[2]
//      / | \      / | \     / | \
//     1  2  3    4  5  6   7  8  9
//
//
//
//                 Address     Value
//
//        array    12          24
//          ...    ...         ...
//     array[0]    24          64    <- malloc for int* x 3
//     array[1]    32          80
//     array[2]    40          96    array[1][2]
//          ...    ...         ...
//  array[0][0]    64          1     <- malloc for int x 3
//  array[0][1]    68          2
//  array[0][2]    72          3
//          ...    ...         ...
//  array[1][0]    80          4     <- malloc for int x 3
//  array[1][1]    84          5
//  array[1][2]    88          6
//          ...    ...         ...
//  array[2][0]    96          7     <- malloc for int x 3
//  array[2][1]    100         8
//  array[2][2]    104         9
//          ...    ...         ...
//
//
//
// The 2D array on the stack is laid out differently in memory...
//
//
//  int array[3][3] = {{1, 2, 3},
//                     {4, 5, 6},
//                     {7, 8, 9}};
//
//
//  Gives us a single "block of 9 ints in memory".
//
//
//
//  Memory
//  ------
//
//                  Address     Value
//                  ...
//  array[0][0]     04          1       <- array[0]
//  array[0][1]     08          2
//  array[0][2]     12          3
//  array[1][0]     16          4       <- array[1]
//  array[1][1]     20          5
//  array[1][2]     24          6
//  array[2][0]     28          7       <- array[2]
//  array[2][1]     32          8
//  array[2][2]     36          9
//
//
//                          array[0][2]
//                         /
//   array[0]  ->  {1, 2, 3}
//   array[1]  ->  {4, 5, 6}
//   array[2]  ->  {7, 8, 9}
//                      \
//                       array[2][1]
//
//
// This has a notable difference in terms of the number of bytes required to 
// store the array...
//
//
//  2D array on the stack:
//
//     9 ints stored in memory = 9 x 4 bytes = 36 bytes
//
//
//  2D array with dynamic memory allocation:
//
//     1 pointer to pointer to int = 8 bytes
//
//     3 pointers to ints = 3 x 8 bytes = 24 bytes
//
//     3 x 3 int blocks = 3 x 3 x 4 bytes = 36 bytes
//
//     8 bytes + 24 bytes + 36 bytes = 68 bytes total!