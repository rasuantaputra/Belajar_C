#include <iostream>

int main(void){

    int position = 10;
    int x, y, z;
    x = 0;
    y = 8;
    z = 6;

    float mynum = 98.125678;
    double mydouble = 98.125678;

    char character1 = 'q';
    // tipe data char di dasari oleh ASCI dgn tipe data int
    char character2 = 113;

    printf("position : %d\n", position);
    printf("x : %d, y : %d, z : %d\n", x, y, z);
    printf("mynum : %f\n", mynum);
    printf("mynum : %lf\n", mynum);
    printf("mydouble : %f\n", mydouble);
    printf("mydouble : %lf\n", mydouble);
    printf("character1 : %c\n", character1);
    printf("character2 : %c\n", character2);

    return 0;
}