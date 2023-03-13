#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

/**
 * @brief masih belumpaham perbedaan dengan "join thread"
 * 
 */

FILE *log_file;
int incidents = 0;

void *logger()
{
    while (true)
    {
        time_t current_time;
        time(&current_time);

        struct tm *t_m = localtime(&current_time);

        char timestamp[256];
        strftime(timestamp, 256, "%x@%H:%M:%S", t_m);

        fprintf(log_file, "%s: %d\n", timestamp, incidents);

        sleep(1);
    }
    return NULL;
}

int main(int argc, char const *argv[])
{

    log_file = fopen("log.txt", "w");
    if (log_file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    pthread_t my_thread;

    int retrun_value = 0;
    retrun_value = pthread_create(&my_thread, NULL, &logger, NULL);   
    if (retrun_value != 0) return 1;

    retrun_value = pthread_detach(my_thread);
    if (retrun_value != 0) return 1;

    int input = 0;
    do
    {
        printf("Enter -1 to quit !\n");
        printf("New insidents: ");
        scanf("%d", &input);

        if (input != -1)incidents += input;
    } while (input != -1);

    fclose(log_file);
    
    return 0;
}






// Visualizations of joinable vs detached threads.
//
//
//          Joinable Thread
//          ---------------
//
//      |
//      |   ...                       pthread
//      |   pthread_create --------    
//      |   ...                    |  ...
//      |   printf("%d", sum);     |  do work
// Time |   ...                    |  ...
//      |   pthread_join   --------↓
//      |   ...       | 
//      |   ...       |   
//      ↓          Execution PAUSES here until
//                 thread is done work
//
//
//
//          Detached Thread
//          ---------------
//
//      |
//      |   ...                       pthread
//      |   pthread_create --------    
//      |   pthread_detach         |  ...
//      |   ...                    |  ...
//      |   do work                |  do work
// Time |   ...                    |  ...
//      |   ...                    |  ...
//      |   ...                    |  ...
//      |   exit                   |-> resources
//      ↓                          ↓   released