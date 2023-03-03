#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char src[10] = "123456789";

    char dest1[50];
    strcpy(dest1, src);
    printf("dest1: %s\n", dest1);

    // harusnya gabisa karena index disini lebih kecil
    char dest2[1];
    strcpy(dest2, src);
    printf("dest2: %s\n", dest2);

    char dest3[10];
    strncpy(dest3, src, 10);
    printf("dest3: %s\n", dest3);

    char dest4[50];
    strncpy(dest4, src, 10);
    printf("dest4: %s\n", dest4);

    // dia akan error, karena index dest4 lbhb kecil
    char dest5[5];
    strncpy(dest5, src, 10);
    printf("dest5: %s\n", dest5);

    char dest6[50];
    // ini tidak akan bermasalah walau index di strncpy nya lbh kecil
    strncpy(dest6, src, 3);
    printf("dest6: %s\n", dest6);

    // agar tidak ada karakter aneh seletah string di copy
    // ingat selalu char sealalu ada \0 walau tak tertulis
    char dest7[50] = "\0";
    strncpy(dest7, src, 3);
    printf("dest7: %s\n", dest7);

    return 0;
}
