#include <stdio.h>

typedef struct {
    int x;
    int y;
}Point;

int main(int argc, char const *argv[])
{
    Point p1, *p2, *p3;

    p1.x = 4;
    p1.y = 2;
    printf("p1(%d, %d)\n\n", p1.x, p1.y);

    p2 = &p1;
    p2->x = 1;
    p2->y = 9;
    printf("p1(%d, %d)\n", p1.x, p1.y);
    printf("p2(%d, %d)\n\n", p2->x, p2->y);
    
    // second way to write
    (*p3).x = 7;
    (*p3).y = 3;
    printf("p1(%d, %d)\n", p1.x, p1.y);
    printf("p2(%d, %d)\n", p2->x, p2->y);
    printf("p3(%d, %d)\n", (*p3).x, (*p3).y);

    return 0;
}

