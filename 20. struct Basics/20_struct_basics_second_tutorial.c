#include <stdio.h>
#include <string.h>

// struct with typedef conjuction
typedef struct 
{
    char name[50];
    char id[10];
    int age;
    int grade[5];
}Student;

typedef struct
{
    int x;
    int y;
}Point;

void print_student(Student student_info);
void print_points(Point points[], int size);


int main(int argc, char const *argv[])
{
    Student jeki;

    strcpy(jeki.name, "Jeki");
    strcpy(jeki.id, "63956");
    jeki.age = 19;
    jeki.grade[0] = 1;
    jeki.grade[1] = 2;
    jeki.grade[2] = 3;
    jeki.grade[3] = 4;
    jeki.grade[4] = 5;

    // its posible to write like this
    // p1.x = 5;p1.y = 10
    Point p1 = {5, 10};

    // its fine too !
    // Point p2 = {.x = 2, .y = 6};
    // we can change the order !
    Point p2 = 
    {
        .y = 6, 
        .x = 2
    };

    Point points [10];
    for (int i = 0; i < 10; i++)
    {
        points[i].x = i;
        points[i].y = 10 - i;
    }
    

    print_student(jeki);
    printf("\n");
    printf("p1.x: %d \t p1.y: %d\n", p1.x, p1.y);
    printf("p1.x: %d \t p2.y: %d\n", p1.x, p2.y);

    // struct assignment
    p1 = p2;
    printf("p1.x: %d \t p1.y: %d\n", p1.x, p1.y);

    printf("\n");
    print_points(points, 10);

    return 0;
}

void print_points(Point points[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("p%d = (%d, %d)\n", i, points[i].x, points[i].y);
    }
    
}

void print_student(Student student_info)
{
    printf("Name : %s\n", student_info.name);
    printf("ID : %s\n", student_info.id);
    printf("Age : %d\n", student_info.age);
    printf("Grades : ");
    for (int i = 0; i < 5; i++) printf("%d ", student_info.grade[i]);
    printf("\n");
}