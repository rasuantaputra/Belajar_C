#include <stdio.h>
#include <pthread.h>

#include "bank.h"

void *deposit(void *amount);

pthread_mutex_t ini_mutex;

int main(int argc, char const *argv[])
{

    pthread_t thread1, thread2;
    // initiation mutex
    pthread_mutex_init(&ini_mutex, NULL);

    int deposit1 = 300;
    int deposit2 = 200;

    int before = read_balance();
    printf("Before: %d\n", before);

    pthread_create(thread1, NULL, deposit, (void*) &deposit1);
    pthread_create(thread1, NULL, deposit, (void*) &deposit2);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    int after = read_balance();
    printf("Before: %d\n", after);

    // destroy mutex
    pthread_mutex_destroy(&ini_mutex);

    return 0;
}

void *deposit(void *amount)
{
    // we will lock here for every thread (so only one therad can access this function at the time)
    pthread_mutex_lock(&ini_mutex);

    int account_balance = read_balance();
    account_balance += *((int*) (amount));

    write_balance(account_balance);

    // we will unlock here for every thread
    pthread_mutex_unlock(&ini_mutex);

    return NULL;
}

//  What is a race condition? 
//
//  A race condition occurs when a program depends on the 
//  timing of one or more events to function correctly.
//
//  A race condition typically occurs when multiple threads
//  access a shared variable (or state) at the same time.
//
//
//  What is a mutex?
//
//  A mutex is a synchronization primitive that enforces 
//  limits on access to a shared resource when we have 
//  multiple threads of execution.
//
//  
//
//  Race Condition Visualization
// 
//
//  Thread #1             Thread #2              Bank Balance
//     
//  Read Balance  <----------------------------------- 0
//  balance = 0 
//                        Read Balance  <------------- 0
//                        balance = 0
//
//  Deposit +300
//  balance = 300
//                        Deposit +200 
//                        balance  = 200
//
//  Write Balance  ----------------------------------> 300
//  balance = 300
//                        Write Balance  ------------> 200
//                        balance = 200
//
//
//
//  Mutex Version Execution Visualization
//
//
//
//  Thread #1             Thread #2              Bank Balance
//
//                        **  LOCK  **
//       
//  WAIT @ LOCK           Read Balance  <------------- 0
//       |                balance = 0
//       |
//       |                Deposit +200 
//       |                balance  = 200
//       |
//       |                Write Balance  ------------> 200
//       |                balance = 200
//       |
//   LOCK FREE            ** UNLOCK **
// 
//  **  LOCK  ** 
//
//  Read Balance  <----------------------------------- 200
//  balance = 0 
//
//  Deposit +300
//  balance = 500
//
//  Write Balance  ----------------------------------> 500
//  balance = 500
//
//  ** UNLOCK **
//