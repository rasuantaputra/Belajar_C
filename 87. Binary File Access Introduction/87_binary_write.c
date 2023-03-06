#include <stdio.h>

/**
 * @brief This tutorial cant be cmpile. i will search another way next time 
 * 
 */

int main(int argc, char const *argv[])
{
    int data[1000000];
    for (int i = 0; i < 1000000; i++) data[i] = 1000000 + i;

    FILE *bin_file;
    bin_file = fopen("binary_file.bin", "wb");

    if (bin_file == NULL)
    {
        printf("Error opening file");
        return 1;
    }

    fwrite(data, sizeof(data), 1, bin_file);

    fclose(bin_file);

    
    return 0;
}
