#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s[] = "AJLFELIA5614235712321754365R";
    char num[] = "1234567890";

    // fungsi "strcspn()" untuk menemukan string yang tidak ada pada sebuah string
    // sebagai catatan hanya yg pertama
    int init = strcspn(s, num);
    printf("character yg tidak ada di s berdasarkan num adalah ==> %d\n", init);

    // ini untuk melakukan print string selain yg tidak ada
    char *numcode = s + init;
    printf("%s\n", numcode); 
    return 0;
}
