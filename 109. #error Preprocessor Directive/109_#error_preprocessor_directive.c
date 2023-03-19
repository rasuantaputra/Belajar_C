#include <stdio.h>
#include <limits.h>

// this way causes error
// #error ERROR MESSEGE GOES HERE!

#if INT_MAX < 2147483648
    #error INT_MAX is not large enough!
#endif


int main(int argc, char const *argv[])
{
    
    return 0;
}