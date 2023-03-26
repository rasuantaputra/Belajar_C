#include <stdio.h>

/**
 * @brief in this tutorial we going to modified __FILE__ and __LINE__ using #line prepocessing directive macros
 * @note it can be use for associate error line
 * @note detail explaination from portofoliocourses
 */

int main(int argc, char const *argv[])
{
    printf("error @ %s: %d\n", __FILE__, __LINE__);

    // we can modified using "#line"
    // file name its allow if we not defined
    #line 51 "ini_file.c"
    printf("error @ %s: %d\n", __FILE__, __LINE__);
    


    // here line will be increase
    printf("error @ %s: %d\n", __FILE__, __LINE__);
    return 0;
}

// We typically use __LINE__ and __FILE__ to output error messages, they 
// allow us to associate an error with where it takes place in the source
// code.  But sometimes we write C programs that actually generate other
// C programs, in which case we may want to associate the error message 
// with the original C program and not the generated program.
//
// Maybe origin.c generates file.c, and the error on line 9 of file.c 
// should *really* be associated with line 51 of origin.c  We can use the
// #line directive to make this association.
//
//  origin.c   ->   file.c   
//
//  line 51    ->   line 9 code