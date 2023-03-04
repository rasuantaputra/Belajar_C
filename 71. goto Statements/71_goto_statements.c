#include <stdio.h>

/**
 * @brief biasanya "goto" digunakan tahun 1960
 * @brief tapi kalo sekarang jarang digunakan. kalo di bahasa lain namanya "exceptio handling"
 * @brief dulu sih di pakenya buat keluar dari "nested loop"
 * @note sebaiknya sih ga digunain, karena bikin bingung
 */

int main(int argc, char const *argv[])
{
    printf("Statement 1\n");

    goto selesai;
    printf("Statement 2\n");
    selesai:

    printf("Statement 3\n");
    return 0;
}
