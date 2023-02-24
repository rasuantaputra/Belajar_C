#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char dest[20] = "This and";
    char src[] = " thatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthatthat";

    // lets cocanitae src to dest
    // it doesnt matter if the index not fit, because is same adress
    strcat(dest, src);
    printf("dest = %s\n\n", dest);

    char *ptr = strcat(dest, src);
    printf("ADRESS \n");
    printf("dest : %p\n", dest); 
    printf(" ptr : %p\n", ptr); 


// =================================================================
    char dest2[20] = "This and";
    char src2[6] = " that";

    // to limit the amount of character to copy
    strncat(dest2, src2,2);
    printf("dest2 = %s\n\n", dest2);
// =================================================================


    return 0;
}
