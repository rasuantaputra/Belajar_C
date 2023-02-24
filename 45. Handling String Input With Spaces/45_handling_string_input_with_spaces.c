#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buffer[100];

    printf("Enter string data: ");
    // kalau pake "%s" doang, ketika ada spasi atau "\n" dia gakan ke store ke "buffer"
    // scanf("%s", buffer);
    // printf("Data: %s", buffer);
    
    // ini cara alternatif untuk menyelesaikannya. Menggunakan pattern matching
    // [^\n] =  match any charcter there is no newline character
    // * = match zero or more character
    // scanf("%[^\n]%*c", buffer);
    // printf("Data: %s", buffer);

    // ini solusi lainny
    // stdin = standard input streem
    fgets(buffer, 100, stdin);
    printf("Data: %s\n\n\n", buffer);
    
    return 0;
}
