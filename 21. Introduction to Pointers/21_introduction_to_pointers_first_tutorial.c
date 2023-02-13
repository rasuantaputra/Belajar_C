#include <stdio.h>

/*
* salah satu tujuan dari pointer adalah, untuk membuat fungsi yg bisa memodifikasi banyak variabel dalam satu kali
*/
int main(int argc, char const *argv[])
{
    // ==========================================
    /*
    * di program ini, kita gabisa ganti nilai b dengan variable a
    */
    int b = 42;
    int a = b;

    printf("b : %d\n", b);
    printf("a : %d\n\n", a);

    a = 50;

    printf("b : %d\n", b);
    printf("a : %d\n\n", a);
    printf("==================\n");
    // ==========================================

    // ==========================================
    /*
    * bagaimana jika kita menggunakan pointer ?
    */

    int z = 87;
    // pointer "x", menyimpan address dari "z". Sehingga pointer variable "x" terhubung dengan "z"
    int *x = &z;

    printf("z : %d\n", z);
    printf("&z : %p\n", &z);
    printf("x : %p\n\n", x);

    *x = 50;

    // di sini nilai "z" akan berubah menjadi 50. Padahal kita tidak pernah mendeklarasi bahwa nilai "z" adalah 50
    // di atas pun yg kita ganti adalah "*x" bukan nilai "z"
    printf("z : %d\n", z);

    printf("&z : %p\n", &z);
    printf("x : %p\n", x);

    return 0;
}
