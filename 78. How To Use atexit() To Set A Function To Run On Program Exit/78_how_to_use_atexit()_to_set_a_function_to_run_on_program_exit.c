#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @note balum paham dalam praktik real nya
 * 
 */


time_t start, end;

void clean_up();

int main(int argc, char const *argv[])
{   
    time(&start);
    // digunakan untuk menjalankan program setelah program exit
    atexit(clean_up);

    int value = 0;

    printf("Enter value: ");
    scanf("%d", &value);
    printf("Value: %d\n", value);
    
    return 0;
}

void clean_up()
{
    time(&end);
    double different_time = difftime(end, start);
    printf("different_time: %f.\n", different_time);
}