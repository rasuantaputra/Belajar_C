#include <stdio.h>

// ## use for concatinate
#define print(x) printf("%s\n", Big##x);

int main()
{
    char BigApple[] = "This is an apple";
    char Big_Banana[] = "This is a banana";

    print(Apple);
    print(_Banana);

    return 0;
}
