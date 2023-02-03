#include <stdio.h>

/*
    printf() format :
    %[flag][width][.precision]specifier
*/


int main(int argc, char const *argv[])
{
    printf("Hallo world! \n");
    printf("\tAnother line of text using \\t (tab) \n");
    printf("doule quote \" \n");
    printf("\\ \n");
    
    printf("============================\n");

    int x = 5;
    printf("x: %d\n", x);
    printf("x: %d, x+1: %d, x+2: %d \n", x, x+1, x+2);

    char c = 'P';
    printf("c : %c\n", c);

    double y = 4.56;
    // biasanya pake %lf kalo double, biar ngebedain. walau float juga bisa %lf
    printf("y: %f\n", y);

    float z = 2.5;
    printf("z: %f", z);

    char myString [] = "This is my string as an output \n";
    printf("str : %s \n", myString);

    /*
        [flag] = - (min)
        [width] = 10
        [.precision] = gada
        specifier = d
    */
   printf("|||%-10d|||\n", 5);

    /*
        [flag] = + (positif)
        [width] = 8
        [.precision] = .3
        specifier = f
    */
   printf("|||%8.3f|||\n", y);


    return 0;
}

/*
 @ note : https://en.wikipedia.org/w/index.php?title=Printf_format_string&oldid=1025963695#Format_placeholder_specification
*/
