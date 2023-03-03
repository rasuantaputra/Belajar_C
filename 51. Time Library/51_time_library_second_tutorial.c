#include <stdio.h>
// sleep function is here
#include <time.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    // number of sec since Jan. 1, 1970 midnight
    time_t now =  time(NULL);
    printf("%ld\n", now);

    // make a program more human readable
    char *string_now = ctime(&now);
    printf("%s\n", string_now);
    
    // this struct is not local time, but UTM
    struct tm *gm_time = gmtime(&now);

    printf("tm_sec: %d\n", gm_time->tm_sec);
    printf("tm_min: %d\n", gm_time->tm_min);
    // its not local time, its grandwich (UTM)
    printf("tm_hour: %d\n", gm_time->tm_hour);
    printf("tm_mday: %d\n", gm_time->tm_mday);
    printf("tm_mon: %d\n", gm_time->tm_mon);
    printf("tm_year: %d\n", gm_time->tm_year);
    printf("tm_wday: %d\n", gm_time->tm_wday);
    printf("tm_yday: %d\n", gm_time->tm_yday);
    printf("tm_isdst: %d\n\n", gm_time->tm_isdst);

    // this struct is local time
    struct tm *current_time = localtime(&now);

    printf("tm_sec: %d\n", current_time->tm_sec);
    printf("tm_min: %d\n", current_time->tm_min);
    printf("tm_hour: %d\n", current_time->tm_hour);
    printf("tm_mday: %d\n", current_time->tm_mday);
    printf("tm_mon: %d\n", current_time->tm_mon);
    printf("tm_year: %d\n", current_time->tm_year);
    printf("tm_wday: %d\n", current_time->tm_wday);
    printf("tm_yday: %d\n", gm_time->tm_yday);
    printf("tm_isdst: %d\n\n", current_time->tm_isdst);

    // other functuin going to return a string representation of current time
    char *other_string = asctime(current_time);
    printf("%s\n", other_string);

    // mktime will convert from a struct tm time to a time_t representation
    current_time->tm_min += 1;
    time_t new_time = mktime(current_time);
    printf("now: %ld\n", now);
    printf("new_time: %ld\n", new_time);

    // custom format in time
    char s[100];
    // we use "strftime()" to custom format time as we want
    strftime(s,100,"%B %d %A ",current_time);
    printf("custom time format : %s\n", s);

    // clock to meassure actually current clock to executing the program
    clock_t start, end;
    start = clock();
    for (size_t i = 0; i < 1000000000000; i++){}
    end = clock();

    double total = (double) (end - start)/CLOCKS_PER_SEC;
    printf("clock time : %fs\n",total);


    
    return 0;
}
