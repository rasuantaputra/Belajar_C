#include <stdio.h>

int main(int argc, char const *argv[])
{
    int percent = 0;
    
    printf("Enter progres (%): ");
    scanf("%d", &percent);

    // kalau penulisannya "percent == 100" akan rawan salah/bug
    // karena kalau kita menulis "percent = 100" ini tidak akan terjadi error
    // arti dari "percent = 100" adalah kita melakukan assign nilai "100" ke variable "percent"
    // 
    // if (percent == 100) printf("Work Done!.\n");
    // else printf("Work Not Done !\n");

    // lebih baik kita menulis seperti ini
    // karena kalau "=" (samadengan)-nya kurang 1, akan terjadi error
    // "100" bukan assignable (ada tutorial sebelumnya, cuma saya lupa :))
    if (100 == percent) printf("Work Done!.\n");
    else printf("Work Not Done !\n");
    
    return 0;
}
