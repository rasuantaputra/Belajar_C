#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char s1[] = "5627344752GBJKTYUDH";
    char nums[] = "0263547198";

    // akan menghitung index ke berapa dimulainya string yg gada di nums
    int pos = strspn(s1, nums);
    printf("pod : %d\n", pos);

    char *remaining = pos + s1;
    printf("%s\n", remaining);
    return 0;
}
