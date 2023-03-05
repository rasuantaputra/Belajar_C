#include <stdio.h>
#include <string.h>

/**
 * @brief this secenario, using finding email address domin using "memchr()"
 **
 */

int main(int argc, char const *argv[])
{
    char email_data[] = "darcy.lithua@collagenbeauty.com";

    char *domain = memchr(email_data, '@', strlen(email_data));

    // we can add like this for chop the '@'
    domain++;

    printf("domain: %s\n", domain);

    return 0;
}
