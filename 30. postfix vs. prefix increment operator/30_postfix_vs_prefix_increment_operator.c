#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    int result;

// ========= postfix and prefix incemenet outside function =========
    // i++;
    // ++i;

    // printf("i: %d", i);

    // printf("i: %d", i);
// =================================================================

// ========= postfix incemenet inside function ====================
    // printf("i: %d\n", i++);
    // printf("i after: %d\n", i);
// ================================================================

// ========= prefix incemenet inside function ====================
    // printf("i: %d\n", ++i);
    // printf("i after: %d\n", i);
// ================================================================

// ========= postfix incemenet e.g ================================
    // result = i++ * 10;
    // printf("result: %d", result);
// ================================================================

// ========= prefix incemenet e.g ================================
    result = ++i * 10;
    printf("result: %d", result);
// ================================================================
    return 0;
}

/**
 * @brief kalau  postfix ditambah setelaj
 * @brief kalo prefix di tambah dulu
 * 
 * 
 */