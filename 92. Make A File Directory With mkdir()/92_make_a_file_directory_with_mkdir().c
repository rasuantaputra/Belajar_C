#include <stdio.h>
#include <sys/stat.h>

/**
 * @brief  mkdir() error in my computer
 * 
 * @documentation https://www.gnu.org/software/libc/manual/html_node/Creating-Directories.html

 */
int main(int argc, char const *argv[])
{
    mkdir("test1", 0777);
    
    
    return 0;
}
