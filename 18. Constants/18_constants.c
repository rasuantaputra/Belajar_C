#include <stdio.h>

// first way to make constant variable (use prepocesing)
#define LENGTH 10


void printing_function_1(int *array);
void printing_function_2(int *array);
void printing_function_3(int *array, int size_length);


int main(int argc, char const *argv[])
{
    // second way to make constant
    const int size = 11;

    int a[LENGTH] = {1,2,3,4,5,6,7,8,9,10};
    int b[] = {1,2,3,4,5,6,7,8,9,10,11};

    printing_function_1(a);
    printf("\n");
    printing_function_2(a);
    printf("\n");
    printing_function_3(b, size);

    return 0;
}

void printing_function_1(int *array)
{
    for (int i = 0; i < LENGTH; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }    
}

void printing_function_2(int *array){
    const int length = 10;
    // second way to make constant
    for (int i = 0; i < length; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }   
}

void printing_function_3(int *array, int size_length){
    const int length = size_length;
    // third way to make constant (as input)
    for (int i = 0; i < length; i++)
    {
        printf("array[%d] : %d\n", i, array[i]);
    }    
}