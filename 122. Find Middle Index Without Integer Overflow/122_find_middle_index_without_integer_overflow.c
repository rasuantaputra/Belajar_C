#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int left_index = 5;
    int right_index = 9;

    // lets seeking midle index with 2 binary algorithm
    int middle_1 = (left_index + right_index)/2; // jika menggunakna cara ini, bisa terjadi integer overflow, karena dia di tambah dulu nanti jadinya melebihi batas integer sehingga menjadi minus
    int middle_2 = left_index + (right_index - left_index)/2; // cara ke-2 lebih aman (most robust approach)

    printf("middle 1: %d\n", middle_1);
    printf("middle 2: %d\n", middle_2);


    printf("\n===== Contoh Integer Overflow ======\n");
    printf("Max Integer number: %d\n", INT_MAX);

    // lets make "left_index" and "right_index" being very large value
    left_index = 1500000000;
    right_index = 1900000000;

    char *massive = malloc(2000000000);
    massive[1700000000] = 'Y';

    // coba hitung lagi
    middle_1 = (left_index + right_index)/2; // jika menggunakna cara ini, bisa terjadi integer overflow, karena dia di tambah dulu nanti jadinya melebihi batas integer sehingga menjadi minus
    middle_2 = left_index + (right_index - left_index)/2;
    // print value
    printf("middle 1: %d\n", middle_1); // this value will be negative, because integer overflow was occur
    printf("middle 2: %d\n", middle_2); // most robust approach
    printf("massive[%d]: %c\n", middle_2, massive[middle_2]);

    free(massive);
    return 0;
}
