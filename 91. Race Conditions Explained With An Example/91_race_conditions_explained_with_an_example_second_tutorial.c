#include <stdio.h>
#include <pthread.h>

#include "bank.h"

void *deposit(void *amount);

int main(int argc, char const *argv[])
{

    pthread_t thread1, thread2;

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
    
    return 0;
}

void *deposit(void *amount)
{
    int account_balance = read_balance();
    account_balance += *((int*) (amount));

    write_balance(account_balance);

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

//  Visualization of the above program's execution.  When the two deposit 
//  functions run at the same time, the execution of statements over time
//  may interleave (and our simulated "network delay" further assures this),
//  causing a race condition to occur when they access the same shared state.
//  See how both threads access the balance, update the balance, and write 
//  the balance in such a way as to result in an incorrect balance!  
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