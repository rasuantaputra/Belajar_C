#include <stdio.h>
#include <string.h>

// struct is a record of information
// student has more than one chunk information
// this is first way to write struct
struct Student
{
    char name[50];
    char id[10];
    int age;
    int grade[5];
};


int main(int argc, char const *argv[])
{
    struct Student jeki;

    strcpy(jeki.name, "Jeki");
    strcpy(jeki.id, "63956");
    jeki.age = 19;
    jeki.grade[0] = 1;
    jeki.grade[1] = 2;
    jeki.grade[2] = 3;
    jeki.grade[3] = 4;
    jeki.grade[4] = 5;

    printf("Name : %s\n", jeki.name);
    printf("ID : %s\n", jeki.id);
    printf("Age : %d\n", jeki.age);
    printf("Grades : ");
    for (int i = 0; i < 5; i++) printf("%d ", jeki.grade[i]);
    printf("\n");

    return 0;
}
