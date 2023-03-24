#include <stdio.h>

// this function is global
void func_1()
{
    printf("Hello\n");
}

// this function static, mean only accesible to this file
static void func_2()
{
    printf("Hello\n");
}

static void print(double value, int times)
{
    for (int i = 0; i < times; i++) printf("%.3f\n", value);
}

void report_value(double value)
{
    if(value >= 1000) printf("value out of range !\n");
    else print(value, 3);

}