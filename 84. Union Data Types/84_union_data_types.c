#include <stdio.h>
#include <string.h>

/**
 * @brief "union" look a lot like struct
 * 
 * @note "union" use in same memory 
 * @note "union" occupy the same space of memory at the time
 * @note "union" use for save memory ('union' use less memory than 'struct')
 */

// we can write using "typedef" style
union Data
{
    int x;
    double y;
    char z[32];
};

struct Data2
{
    int x;
    double y;
    char z[32];
};

typedef struct
{
    int type;
    union
    {
        char x[1024];
        float y[1024];   
        double z[1024];   
    }Buffer;    
}Info;


int main(int argc, char const *argv[])
{
    union Data data_saya;
    struct Data2 data_saya2;

    printf("===== Jika Union digunakan dalam waktu bersamaan =====\n");
    data_saya.x = 10;
    data_saya.y = 31.6;
    strcpy(data_saya.z, "testing 123");

    printf("data_saya.x = %d\n", data_saya.x);
    printf("data_saya.y = %f\n", data_saya.y);
    printf("data_saya.z = %s\n\n", data_saya.z);

    printf("===== Jika Union digunakan dalam waktu berbeda =====\n");
    data_saya.x = 10;
    printf("data_saya.x = %d\n", data_saya.x);

    data_saya.y = 31.6;
    printf("data_saya.y = %f\n", data_saya.y);

    strcpy(data_saya.z, "testing 123");
    printf("data_saya.z = %s\n\n", data_saya.z);

    printf("===== Perbandingan memory usage struct vs union =====\n");
    // printed 32 because we need 32-bit for char
    printf("data_saya size = %d\n", sizeof(data_saya));
    printf("data_saya2 size = %d\n\n", sizeof(data_saya2));

    printf("===== cara kerja pointer di union sama dengan di struct =====\n");
    union Data *ptr = &data_saya;
    printf("ptr->z = %s\n\n", ptr->z);

    printf("===== Salah satu cara untuk tahu member union mana yang sedang di jalankan =====\n");
    Info info_yang_aktif;
    info_yang_aktif.type = 0;

    memset(info_yang_aktif.Buffer.x, 'Q', 1024);

    if (info_yang_aktif.type == 0)
    {
        for (int i = 0; i < 1024; i++)
        {
            printf("info_yang_aktif.Buffer.x[%d] = %c\n", i, info_yang_aktif.Buffer.x[i]);
        }
        
    }
    

    
    return 0;
}
