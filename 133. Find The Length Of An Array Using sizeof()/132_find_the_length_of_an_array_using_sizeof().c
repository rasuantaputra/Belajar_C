#include <stdio.h>
#include <stdlib.h>

#define LENGTH(a) sizeof(a)/sizeof(a[0])

static void print_size(int *array)
{
    int length_4 = sizeof(array)/sizeof(array[0]);
    printf("length_4: %d\n", length_4);
}

int main(int argc, char const *argv[])
{
    int array[9] = {1,2,3,4,5,6,7,8,9};

    printf("\n==== 1st way ====\n");
    // first way
    // sizeof(array) = (dataType_length * array_element) => 4byte * 9
    // sizeof(int) = (dataType_length) => 4byte
    int length_1 = sizeof(array)/sizeof(int); // => (4 * 9)/(4)
    printf("length_1: %d\n", length_1);

    printf("\n==== 2nd way ====\n");
    // second way (more robust), its because if the data type change we can still get the length of array
    // sizeof(array) = (dataType_length * array_element) => 4byte * 9
    // sizeof(array[0]) = (dataType_length * array_element) => 4byte * 1
    int length_2 = sizeof(array)/sizeof(array[0]);
    printf("length_2: %d\n", length_2);

    printf("\n==== 3rd way ====\n");
    // third way using prepocessor macros
    int length_3 = LENGTH(array);
    printf("length_3: %d\n", length_3);

    // length 3 can be use for "for loop" (not recomended because it takes a long runtime because to many computation)
    // better using "const variable" or "prepocessor macros variable"
    for (int i = 0; i < length_3; i++)printf("array[%d]: %d\n", i, array[i]);
    
    printf("\n==== 4rd way ====\n");
    // fail
    print_size(array);



    printf("\n==== Dynamic Array (will not work) ====\n");
    /**
     * @note "sizeof()" doesnt work for finding the length of an array with dynamic allocation
     * 
     */
    int *dynamic_array = malloc(sizeof(int) * 100);
    printf("dynamic_array: %d\n", sizeof(dynamic_array));
    printf("dynamic_array: %d\n", LENGTH(dynamic_array));

    free(dynamic_array);





    return 0;
}
