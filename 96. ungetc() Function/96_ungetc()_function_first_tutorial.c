#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    FILE *berkas = fopen("file1.txt", "r");

    if (berkas == NULL)
    {
        printf("error opening file ....");
        return 1;
    }

    int c;

    while (true)
    {
        c = fgetc(berkas);

        if (feof(berkas) || ferror(berkas))break;

        // "ugetc()" bisa digunakan dalam string, tidak hanya pada file
        if (c == 'e')ungetc('z', berkas);
        else printf("%c", c);
    }
    printf("\n");
    fclose(berkas);

    return 0;
}
