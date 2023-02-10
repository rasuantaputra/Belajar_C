#include <stdio.h>

// typedef keyword we use to make a new name (initial) to an exixtance data type
typedef int kilometer;

int main(int argc, char const *argv[])
{
    // "kilometer" basicly become alias/synonim another name for "int"
    kilometer newyork, sanfransisco, miami;

    newyork = 100;
    sanfransisco = 3000;
    miami = 1600;

    printf("Newyork : %d Km\n", newyork);
    printf("Sanfransisco : %d Km\n", sanfransisco);
    printf("Miami : %d Km\n", miami);
    return 0;
}
