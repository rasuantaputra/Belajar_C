/**
 * @file bank.h
 * @brief sementara seperti ini dulu cara membuat library nya. padahal ini ga lazim
 * 
 */

#include <unistd.h>

// int read_balance();
// void write_balance();

int balance = 0;

int read_balance()
{
    usleep(250000);
    return balance;
}

void write_balance(int new_balance)
{
    usleep(250000);
    balance = new_balance;
}