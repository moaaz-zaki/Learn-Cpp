#ifndef _BANK_ACCOUNT_H
#define _BANK_ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class bank_account
{
    private:
    string name;
    int balance;

    public:
    void set_data (string user , int money);
    void deposit (int amount);
    void withdraw (int amount);
    int get_balance();

};

#endif