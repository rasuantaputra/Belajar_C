#include <stdio.h>
#include <stdbool.h>

/**
 * @brief "clearerr()" will erase error indicator from "ferror()" and "feof()"
 */

int main(int argc, char const *argv[])
{
    FILE *berkas;

    berkas = fopen("file.txt", "r");

    if (berkas == NULL)
    {
        printf("error opening file(s)...\n");
        return 1;
    }

    fputc('d', berkas);

    // if file doesnt exist, this line will not execute
    // execute stop at line 14
    if (ferror(berkas)) printf("Write error dude !\n");
    
    int c;

    // even the error occure "while" condition will execute
    clearerr(berkas);

    while (true)
    {
        c = fgetc(berkas);
        if (feof(berkas) || ferror(berkas)) break;

        printf("%c\n", c);
    }

    // kalau read ('r') gaperlu pakai "fclose" ????
    // fclose(berkas);

    return 0;
}
