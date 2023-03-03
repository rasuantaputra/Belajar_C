#include <stdio.h>

/**
 * @brief bitwise work with binner
 */

int main(int argc, char const *argv[])
{
    unsigned int x = 9;
    unsigned int y = 24;

    /* 9  = 0000 1001 */
    /* 24 = 0001 1000 */

    unsigned int r;

    // left shift
    /* 9    = 0000 1001 */
    /* << 2 = 0010 0100*/
    r = x << 2;
    printf("x << 2 = %d\n", r);
    
    // right shift
    /* 9    = 0000 1001 */
    /* >> 2 = 0000 0010*/
    r = x >> 2;
    printf("x >> 2 = %d\n", r);

    // NOT
    /* 9    = 0000 1001 */
    /* ~    = 1111 0110*/
    r = ~x;
    printf("~x = %d\n", r);

    // AND
    /* 9  = 0000 1001 */
    /* 24 = 0001 1000*/
    /* &  = 0000 1000*/
    r = x & y;
    printf("x & y = %d\n", r);

    // OR
    /* 9  = 0000 1001 */
    /* 24 = 0001 1000*/
    /* |  = 0001 1000*/
    r = x | y;
    printf("x | y = %d\n", r);

    // XOR
    /* 9  = 0000 1001 */
    /* 24 = 0001 1000*/
    /* ^  = 0001 0001*/
    r = x ^ y;
    printf("x ^ y = %d\n", r);



    return 0;
}
