#include <stdio.h>

int main(int argc, char const *argv[])
{
    // nilai nya 2 karena a di hitung 1 command_line
    printf("Nilai argc : %d\n", argc);
    for (int i = 0; i < argc; i++) printf("Nilai argv[%d] : %s\n", i, argv[i]);
    
    return 0;
}
