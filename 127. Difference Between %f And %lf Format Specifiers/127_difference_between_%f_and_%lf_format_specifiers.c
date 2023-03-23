#include <stdio.h>

/**
 * @note float actually automatically convert to double, its ok to use %f or %lf
 * @note  in old standard (C89) %lf has undifined behaviour
 * 
 * @note becareful if we using scanf(), double must be %lf and float %f
 *  
 */

int main(int argc, char const *argv[])
{
    
    double double_number = 20.4;
    // double double_number = 45.12;
    float float_number = 20.4;
    // float float_number = 45.12;

    printf("double_number: %lf\n", double_number);
    printf("float_number: %lf\n", float_number);

    printf("\n");
    printf("double_number: ");
    scanf("%lf", &double_number);
    printf("float_number: ");
    scanf("%f", &float_number);

    printf("double_number: %lf\n", double_number);
    printf("float_number: %lf\n", float_number);

    
    return 0;
}
