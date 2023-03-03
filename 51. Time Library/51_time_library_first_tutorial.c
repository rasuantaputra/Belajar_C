#include <stdio.h>
// sleep function is here
#include <time.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    // number of sec since Jan. 1, 1970 midnight
    time_t now =  time(NULL);
    printf("%ld\n", now);

    // sleep for couple secnd. here sleep for 2 sec
    sleep(2);

    time_t two_sec =  time(NULL);
    printf("%ld\n", two_sec);

    // we compared between 2 times. its a double value
    printf("diff: %f\n" ,difftime(two_sec, now));


    return 0;
}
