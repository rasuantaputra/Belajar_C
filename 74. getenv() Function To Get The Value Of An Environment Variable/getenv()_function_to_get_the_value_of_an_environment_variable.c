#include <stdio.h>
#include <stdlib.h>

/**
 * @brief technically, i dunno what for is this :)
 */

int main(int argc, char const *argv[])
{
    // "getenv()" to return environment variable
    // getenv()" return the pointer of string
    char *log_dir = getenv("LOG_DIR");

    printf("LOG_DIR: \n%s\n", log_dir);
    return 0;
}
