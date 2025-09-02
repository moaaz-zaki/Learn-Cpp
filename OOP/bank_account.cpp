#include "bank_account.h"

void bank_account::set_data(string user, int money)
{
    name = user;
    balance = money;
}

void bank_account::deposit(int amount)
{
    balance += amount;
}

void bank_account::withdraw(int amount)
{
    if (balance >= amount )
    {
        balance -= amount;
    }
    else
    {
        cout << "Balance Not Enough! \t"; 
    }


}

int bank_account::get_balance()
{
    return balance;
}