#include <stdio.h>

void log_message(char *message);

int main()
{
  
  // notice how the log messages have a unique, incrementing log message number
  log_message("read data");
  log_message("update data");
  log_message("data error");

  return 0;
}

// appends a log message to a file log.txt on a newline with a unique log number
void log_message(char *message)
{

  static int total = 0;
  total++;
  
  // open up log.txt and append a line with the log message, using total for 
  // the log message number
  FILE *logfile = fopen("log.txt", "a");
  if (logfile != NULL)
  {
    fprintf(logfile, "log %d: %s\n", total, message);
    fclose(logfile);
  }
}