#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *file;

    file = fopen("data.txt", "r");

    // if error to open program, fopen gonna retirn NULL
    if (file == NULL)
    {
        printf("Error opening the program\n");
        // signal for the prommt something wrong
        return 1;
    }

    char c;
    // EOF (End Of File)
    while ( (c = fgetc(file)) != EOF) printf("%c", c);
    printf("\n");

    // bandingkan "while" disini dengan setelah "rewind()"
    // while ( (c = fgetc(file)) != EOF) printf("%c", c);
    // printf("\n");

    // rewind the file pointer back to the beginning of the file!
    rewind(file);

    // bandingkan "while" setekah "rewind()" dengan sebelum
    while ( (c = fgetc(file)) != EOF) printf("%c", c);    
    printf("\n");



    fclose(file);
    return 0;
}
