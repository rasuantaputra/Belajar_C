#include <stdio.h>
#include <stdlib.h>

/**
 * @note becareful to use "abort()" it may make some corupt state !
 * @note abort is extreem way to stop the programm
 * 
 */

void cleanup();

int main(int argc, char const *argv[])
{   
    // because we use "abort()", "cleanup()" will not excecute after program exit !
    atexit(cleanup);

    printf("Hallo ini adalah tutorial abort() function !");
    // "abort()" function make the programm hard exit
    abort();

    return 0;
}

void cleanup()
{
    printf("doing clean up\n");
}
