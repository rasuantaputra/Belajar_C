#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
    char *descriptor;
}Point;

int main(int argc, char const *argv[])
{
    Point p1;

    p1.x = 4;
    p1.y = 5;
    printf("(%d, %d)\n", p1.x, p1.y);

    printf("\n===== P2 using pointer =====\n");
    Point* p2;
    
    p2 = malloc(sizeof(Point));
    // we need to dereferance the pointer before assigning the value => (*p2).x; (*p2).y 
    (*p2).x = 5;
    p2->y = 4;
    printf("(%d, %d)\n", p2->x, p2->y);
    free(p2);

    printf("\n===== Using array pointer and dynamically allocate memory =====\n");
    int length = 3;

    Point *array;
    array = malloc(sizeof(Point) * length);

    // we dont need dereferance for this
    // because in array case its equivalent with pointer arithmetic
    array[0].x = 1;
    array[0].y = 1;
    array[0].descriptor = malloc(10);
    strcpy(array[0].descriptor, "Point 1");

    array[1].x = 2;
    array[1].y = 2;
    array[1].descriptor = malloc(10);
    strcpy(array[1].descriptor, "Point 2");

    array[2].x = 3;
    (*(array + 2)).y = 3;
    array[2].descriptor = malloc(10);
    strcpy(array[2].descriptor, "Point 3");

    printf("Array...\n");
    for (int i = 0; i < length; i++)printf("(%d, %d)\n", array[i].x, array[i].y);
    printf("\n");

    // the advantage of dynamic allocate memory, we can make it larger or smaller further
    printf("\n===== Let's Realloc The Memory =====\n");
    length = 4;
    array = realloc(array, sizeof(Point) * length);

    (*(array + 3)).x = 4;
    (*(array + 3)).y = 4;
    (*(array + 3)).descriptor = malloc(10);
    strcpy((*(array + 3)).descriptor, "Point 4");

    printf("Array...\n");
    for (int i = 0; i < length; i++)
    {
        printf("(%d, %d)", array[i].x, array[i].y);
        printf(" - %s\n", array[i].descriptor);
    }
    printf("\n");

    // we need to free each memory (descriptor and array)
    for (int i = 0; i < length; i++)free(array[i].descriptor);    
    free(array);
    


    
    return 0;
}
