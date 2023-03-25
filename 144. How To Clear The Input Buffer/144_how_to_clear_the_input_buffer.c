#include <stdio.h>

/**
 * @note detail explaiantion from portofoliocourses
 */

int main()
{
    int age;
    char name[1024];

    printf("Enter Age: ");
    scanf("%d", &age);

    // first way to erase buffer input
    // getchar();

    // second way to erase buffer input
    // fflush() is not part of standard C
    // fflush(stdin);

    // another effective way using whlie loop
    // int c;
    // while ((c = getchar()) != '\n' && c != EOF){}

    printf("Enter Name: ");
    // jika kita tak menghapus input buffer, setelah memasukan umur dan menekan "ENTER" ('\n'), maka "fgets()" akan dilewatkan oleh compiler
    // hal tersebut dikarenakan seolah2 karakter "\n" itu adalah input yg kita masukan untuk "fgets()", sehingga akan dimasukan kedalam variable "char name"
    // sehingga isi dari "char name" adalah "\n"
    fgets(name, 1024, stdin);

    printf("Age: %d\n", age);
    printf("Name: %s\n", name);
    return 0;
}

// Prompt the user to enter the age value.  If the user enters in something
// like 65 and hits enter the standard input buffer will contain:
//
// 65\n
//
// scanf() will then take off the characters 65 (the integer) as it reads in
// an integer using %d.  Then a newline character \n will remain on the
// standard input buffer.  The issue is that the call to fgets() below will
// not pause and allow the user to enter input, as it stops when it encounters
// the first \n, and there is *already* one on the standard input buffer.  It
// will seem as if fgets is "skipped over", but in reality it will store the
// string \n into name and simply not pause to allow the user to enter input!
//
// The user could also put space characters after the integer, for example:
//
// 65   \n
//
// So we need to clear (or flush) the standard input buffer completely.
//