#include <stdio.h>

/**
 * @note "padding" dilakuka secara otomatis oleh compiler dengan tujuan agar pembacaan data tidak terpecah dan terjadi 2x
 * @note detail explaination from portofoliocourses
 */


// We would expect that this struct may take up 5 bytes in memory given that 
// it takes 1 byte to store a char and 4 bytes to store an int (at least on 
// the system/compiler this program was written with).  But instead it takes 
// up 8 bytes.  This is due to structure padding.
//
struct data_1
{
    char x;
    int y;
};
//   Address  Data
//
//      0x00  x
//      0x01  padding
//      0x02  padding
//      0x03  padding
//      0x04  y
//      0x05  y
//      0x06  y
//      0x07  y
// 
// The struct ends up being stored like in the illustration above.  The reason
// for this is that it improves performance, as the CPU only needs to perform 
// one read to access 'y'.  This is because the CPU will read one "word" at at 
// time, not one byte at a time, where a word can vary from one system to the 
// next but may be something like 4 bytes (e.g. a 32 bit CPU could read 4 
// bytes at once as 32 bits is 4 bytes).
// 
// If the struct were instead stored like this...
// 
//   Address  Data
//
//      0x00  x
//      0x01  y
//      0x02  y
//      0x03  y
//      0x04  y
//      0x05  
//      0x06  
//      0x07  
// 
// The CPU would take "two reads" to read all of y, as it could read the first
// 3 bytes of y with one read of 0x00 - 0x03 (that would include x), and then 
// the last byte of y with a second rad of 0x04 - 0x07.
// 
// It's up to the compiler how structs are stored, but compilers will optimize
// performance over storage and use padding to achieve this.


struct data_2
{
    char x;
    int y;
    char z;
};
// 
// If we create a struct like they above it will take up 12 bytes instead of 9
// bytes, because the compiler will also align the struct data to a multiple of 
// a word if one of the members is the size of a word or higher.  In this case 
// we've included an int member which is 4 bytes and the struct data will be 
// aligned to 4 bytes, which means the struct will be stored like this:
//
//   Address  Data
//
//      0x00  y
//      0x01  padding
//      0x02  padding
//      0x03  padding
//      0x04  x
//      0x05  x
//      0x06  x
//      0x07  x
//      0x08  z
//      0x09  padding
//      0x0A  padding
//      0x0B  padding
//
// As a best practice we should list the members of our struct from largest to 
// smallest to optimize the memory taken to store our struct.  If we listed the 
// members like this:

struct data_3
{
    int y;
    char x;
    char z;
};
// 
//   Address  Data
//
//      0x00  y
//      0x01  y
//      0x02  y
//      0x03  y
//      0x04  x
//      0x05  z
//      0x06  padding
//      0x07  padding
// 
// ...then our struct would only require 8 bytes of storage!
// 
// Notably many compilers support the preprocessor directive at the top of the
// file or the attribute below in this struct to effectively "turn off" 
// structure padding, and instead pack the struct with 1 byte alignment.  This
// will reduce the amount of memory used, at the cost of performance.  We would
// rarely want to make this trade-off in practice, perhaps in some embedded 
// programming or networking programming situations.

// Many compilers support this preprocessor directive that will pack the struct
// with 1 byte alignment such that no padding will be used.  
//
// #pragma pack(1) 

// Notably many compilers support the preprocessor directive at the top of the
// file or the attribute below in this struct to effectively "turn off" 
// structure padding, and instead pack the struct with 1 byte alignment.  This
// will reduce the amount of memory used, at the cost of performance.  We would
// rarely want to make this trade-off in practice, perhaps in some embedded 
// programming or networking programming situations.

struct data_4
{
    int y;
    char x;
    char z;
}__attribute__((packed));

int main(int argc, char const *argv[])
{
    printf("sizeof(): %zu\n", sizeof(char));
    printf("sizeof(int): %zu\n", sizeof(int));

    // we may think the sizeof "struct data_1" is 5
    printf("sizeof(data_1): %zu\n", sizeof(struct data_1));
    printf("sizeof(data_2): %zu\n", sizeof(struct data_2));
    // untuk efisiensi memory, urutkan tipe data member "struct" dari yg terbesar
    // secara member "data_2" dan "data_3" sama, tapi memory yg digunakan berbeda
    printf("sizeof(data_3): %zu\n", sizeof(struct data_3));
    // another way
    printf("sizeof(data_4): %zu\n", sizeof(struct data_4));
    return 0;
}
