#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int a;
    int corection[4] = {5, 7, 9, 10};

    printf("store number beetwen 6-8 : ");
    scanf("%d", &a);
    
    if(a < corection[0]) printf("Number you stored less than %d\n", corection[0]);
    else if(a < corection[1]) printf("Number you stored less than %d\n", corection[1]);
    else if(a < corection[2]) printf("Number you stored less than %d\n", corection[2]);
    else if(a < corection[3]) printf("Number you stored less than %d\n", corection[2]);
    else printf("else case");

    printf("END of Program\n");
    return 0;
}
