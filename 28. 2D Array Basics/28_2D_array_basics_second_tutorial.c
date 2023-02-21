#include <stdio.h>

#define M 3
#define N 4
#define P 5

void matrix_multipication(int a[M][N], int b[M][P], int c[N][P]);

int main(int argc, char const *argv[])
{

    int x[M][N] = {{1, 2, 3, 4}, {5, 6, 7}, {8, 9, 10}};
    int y[M][P] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}};
    int z[N][P] = {{5, 5, 5, 5, 5}, {5, 5, 5, 5, 5}, {5, 5, 5, 5, 5}, {5, 5, 5, 5, 5}};

    matrix_multipication(x, y, z);

    for (int i = 0; i < M; i++)
        for (int j = 0; j < P; j++)
        {
            printf("z[%d][%d] = %d\n", i, j, z[i][j]);
        }

    return 0;
}

void matrix_multipication(int a[M][N], int b[M][P], int c[N][P])
{
    // make sure that c[][] is 0
    for (int i = 0; i < M; i++)
        for (int j = 0; j < P; j++)
        {
            c[i][j] = 0;
        }

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < P; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
}