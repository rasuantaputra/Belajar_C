#include <stdio.h>
#include <pthread.h>

void *computation(void *add);


int main(int argc, char const *argv[])
{
    pthread_t thread1;
    pthread_t thread2;

    long value_1 = 173;
    long value_2 = 689;

    pthread_create(&thread1, NULL, computation, (void *) &value_1);
    pthread_create(&thread2, NULL, computation, (void *) &value_2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

// ===============================================================================
    /**
     * @note coba bandingkan waktu eksekusi dengan yg tidak menggunakan pthread
     * 
     */
// =============================================================================== 

// ===============================================================================
    /**
     * @note coba bandingkan waktu eksekusi penulisan diatas dengan di bagian ini
     * 
     */
    // pthread_create(&thread1, NULL, computation, (void *) &value_1);
    // pthread_join(thread1, NULL);
    // pthread_create(&thread2, NULL, computation, (void *) &value_2);
    // pthread_join(thread2, NULL);
// ===============================================================================    
    return 0;
}

void *computation(void *add)
{
    long sum = 0;
    long *add_num = (long *)(add);

    for (long i = 0; i < 1000000000; i++) sum += *add_num;

    printf("sum = %ld\n", sum);
    return NULL;
}