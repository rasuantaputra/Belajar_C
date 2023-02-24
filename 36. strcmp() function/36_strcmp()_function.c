#include <stdio.h>
#include <string.h>

// strcmp return values
//
// < 0	if the 1st non-matching char has
//      a lower ascii value in s1 than s2
//
// 0    if the strings are equal
//
// > 0  if the 1st non-matching char has 
//      a higher ascii value in s1 than s2
//
int main(int argc, char const *argv[])
{
    char s1[] = "strcmp() function uaeful for comparation your strings !";
    char s2[] = "strcmp() function useful for comparation your strings !";

    if (strcmp(s1,s2) == 0)
    {
        printf("Strings are equal");
    }else if (strcmp(s1,s2) < 0)
    {
        printf("s1 <  s2");
    }else if (strcmp(s1,s2) > 0)
    {
        printf("s1 > s2");
    }
    
    
    
    


    return 0;
}
