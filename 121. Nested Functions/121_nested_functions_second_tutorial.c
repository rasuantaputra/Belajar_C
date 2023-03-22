#include <stdio.h>

/**
 * @note nested fuction is not standard in ASI C 
 * @note in this compiler suport nested function, some compiler does not suport
 */

int max_rectangle_area(int width1, int length1, int width2, int length2)
{
    int rectangle_area(int width, int length)
    {
        return width * length;
    }

    int area1 = rectangle_area(width1,length1);
    int area2 = rectangle_area(width2,length2);

    if (area1 > area2) return area1;
    else return area2;
}

int main(int argc, char const *argv[])
{
    printf("max area: %d\n", max_rectangle_area(4, 5, 9, 8));
    return 0;
}

