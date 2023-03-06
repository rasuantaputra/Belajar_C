#include <stdio.h>
#include <pthread.h>

#include "bank.h"

/**
 * @brief in this tutorial we only use 1 thread, and everything runs ok
 * @note please check second tutorial
 */

void deposit(int amount);

int main(int argc, char const *argv[])
{
    int before = read_balance();
    printf("Before: %d\n", before);


    deposit(300);
    deposit(200);

    int after = read_balance();
    printf("Before: %d\n", after);
    
    return 0;
}

void deposit(int amount)
{
    int account_balance = read_balance();
    account_balance += amount;

    write_balance(account_balance);
}