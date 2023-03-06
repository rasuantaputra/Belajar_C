#include <stdio.h>
#include <pthread.h>

void *computation(void *add);


int main(int argc, char const *argv[])
{
    pthread_t thread1;
    pthread_t thread2;

    long value_1 = 170;
    long value_2 = 639;

    pthread_create(&thread1, NULL, computation, (void *) &value_1);
    pthread_create(&thread2, NULL, computation, (void *) &value_2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    return 0;
}

void *computation(void *add)
{
    long *add_num = (long *)(add);
    printf("add_num: %ld\n", *add_num);
    return NULL;
}