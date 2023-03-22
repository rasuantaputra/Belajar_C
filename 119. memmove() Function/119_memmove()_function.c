#include <stdio.h>
#include <string.h>

/**
 * @note detail explaination from portofoliocourses underneath this tutorial code
 */

int main(int argc, char const *argv[])
{
    int source[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int destination[10];

    // "memmove()" is copying "source[]" array to the desination
    // "memmove()" is not erasing data from "source[]"
    // "memmove()" is slightly similar as "memcpy()" with a few different
    memmove(destination, source, sizeof(int) * 10);

    for (int i = 0; i < 10; i++) printf("destination[%d]: %d\n", i, destination[i]);
    printf("\n");
    for (int i = 0; i < 10; i++) printf("source[%d]: %d\n", i, source[i]);    
    return 0;
}

// Note that memcpy() will ALSO copy a block of memory from source to 
// destination.  We could comment out the above function call, and uncomment 
// this function call, and we'll get the same result!
// memcpy(destination, source, sizeof(int) * 10);

// The behaviour of memcpy() is undefined when the source and destination 
// blocks of memory overlap, which means it may or may not work.  This is 
// why we would use memmove() instead of memcpy(), as memmove() will 
// safely perform the copy even if the blocks of memory overlap.  If we're 
// not sure if the blocks of memory will overlap or not, we should use 
// memmove() as it will be safe.  If we're sure they will not overlap we 
// should use memcpy() as its performance may be higher.  In the below 
// function call we attempt to copy 8 ints from source (i.e. the 
// beginning of the array) to 'source+2', i.e. the source array from 
// index 2 (the 3rd element) onwards. 
//
// memmove(source+2, source, sizeof(int) * 8);