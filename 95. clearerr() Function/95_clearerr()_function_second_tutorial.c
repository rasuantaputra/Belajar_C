#include <stdio.h>
#include <stdbool.h>

/**
 * @brief "clearerr()" will erase error indicator from "ferror()" and "feof()"
 */

void dump_file(FILE *file);

int main(int argc, char const *argv[])
{
    FILE *berkas_baca, *berkas_tulis;

    berkas_baca = fopen("file.txt", "r");
    berkas_tulis = fopen("file.txt", "w");

    if (berkas_baca == NULL || berkas_tulis == NULL)
    {
        printf("error opening file(s)...\n");
        return 1;
    }

    fputc('w', berkas_tulis);
    fputc('x', berkas_tulis);
    fclose(berkas_tulis);

    dump_file(berkas_baca);
    dump_file(berkas_baca);

    FILE *append_berkas = fopen("file.txt", "a");

    if (append_berkas == NULL)
    {
        printf("error opening file\n");
        return 1;
    }

    fputc('y', append_berkas);
    fputc('z', append_berkas);
    fclose(append_berkas);

    // IF we call clearerr with the file_read pointer, we will clear the end of
    // file indicator, and subsequent calls to dump_file will then be able to
    // read the additional content that has now been appended to the file
    clearerr(berkas_baca);

    dump_file(berkas_baca);
    fclose(berkas_baca);

    return 0;
}

void dump_file(FILE *file)
{
    int c;

    while (true)
    {
        c = fgetc(file);
        if (ferror(file) || feof(file))
            break;
        printf("%c\n", c);
    }

    printf("Dump File Complete!.\n");
}