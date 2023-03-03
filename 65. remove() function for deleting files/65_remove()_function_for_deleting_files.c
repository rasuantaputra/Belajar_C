#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(int argc, char const *argv[])
{
    char file_name[100];

    printf("File: ");
    scanf("%s", file_name);

    // if success return -1 if unsuccess return 0
    if (remove(file_name) != 0)
    { 
        
        fprintf(stderr, "Errno: %d\n", errno);
        perror("Ini dia pesan error nya");
    }else printf("%s deleted. \n", file_name);
    



    return 0;
}
