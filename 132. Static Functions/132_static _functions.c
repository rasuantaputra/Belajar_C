#include <stdio.h>
#include "lib.h"

/**
 * @note static function purpose :
 *       1. restrict access function to the file where is it define (information hiding)
 *       2. limit the visibility
 *       3. reuse function ame accros another file
*/

// we can make another print function here because in lib.c is private
void print(double value, int times)
{
    for (int i = 0; i < times; i++) printf("%.4f\n", value);
}

int main(int argc, char const *argv[])
{
    report_value(10.3333);
    print(10.3333, 3);
    
    return 0;
}
