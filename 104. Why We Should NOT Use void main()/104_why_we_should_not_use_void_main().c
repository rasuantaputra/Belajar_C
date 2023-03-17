#include <stdio.h>
#include <stdlib.h>
/**
 * @brief kalau kita menggunakan void, kita gabisa tau nilai yg di return apa. sehingga tidak tahu error yg terjadi apa
 * 
 */

int main(int argc, char const *argv[])
{
    if (argc != 2) return 2;
    else
    {
        int num = atoi(argv[1]);
        if(num % 2 == 0) return 0;
        else return 1;
    }
    
    return 0;
}
