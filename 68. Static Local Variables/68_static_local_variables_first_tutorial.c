#include <stdio.h>

/**
 * @brief fungsi dari static variabel adalah, untuk memperatahankan nilai variable yang sudah ada sebelumnya saat fungsi di panggil
 * 
 */

void using_static_var();
void common_var();

int main(int argc, char const *argv[])
{
    using_static_var();
    using_static_var();
    using_static_var();
    using_static_var();
    using_static_var();
    using_static_var();

    printf("\n\n");

    common_var();
    common_var();
    common_var();
    common_var();
    common_var();
    common_var();

    
    return 0;
}

void using_static_var()
{
    static int score = 0;
    score++;
    printf("score: %d\n", score);
}

void common_var()
{
    int score = 0;
    score++;
    printf("score: %d\n", score);
}