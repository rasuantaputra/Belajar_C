#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
  // will store the original file_namename and new_file_name file_namename
  char file_name[100], new_file_name[100];

  // ask the user for the file_namename, store it into file_name
  printf("file_name: ");
  scanf("%s", file_name);
  
  // ask the user for the new_file_name file_namename, store it into new_file_name
  printf("new_file_name: ");
  scanf("%s", new_file_name);
  
  // if rename() fails it will return a non-zero value
  if (rename(file_name, new_file_name) != 0)
  {
    fprintf(stderr, "Errno: %d\n", errno);
    perror("Error msg");
  } else printf("%s -> %s\n", file_name, new_file_name);

  return 0;
}