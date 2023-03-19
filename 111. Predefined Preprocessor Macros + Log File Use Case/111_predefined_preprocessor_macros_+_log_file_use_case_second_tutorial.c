#include <stdio.h>
#include <stdlib.h>

/**
 * @brief There is predefine provide by C standard
 * @example __FILE__, __DATE__, __TIME__, __LINE__, __STDC__
 * @note this is practical tutorial, the secanio is we made a logger file
 * @note its useful to trace bug, etc
 * 
 */

void logger(char *msg, char *src, int line);


int main()
{

    logger("task 1 done", __FILE__, __LINE__);









    logger("task 1 done", __FILE__, __LINE__);
    return 0;
}

void logger(char *msg, char *src, int line)
{
    FILE *log_file;

    log_file = fopen("log.txt", "a");

    if(log_file == NULL)
    {
        printf("Error opening log file.\n");
        // exit with status one is gonna be signal to the shell/terminal 
        // there is something wrong when executing the program
        exit(1);
    }

    fprintf(log_file, "%s:%d:%s\n", src, line, msg);
    fclose(log_file);
}