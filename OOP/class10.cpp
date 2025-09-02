#include <iostream>
#include "bank_account.h"
using namespace std;

int main ()
{
    bank_account my_account;

    my_account.set_data ("moaaz" , 20000);
    cout << "Welcome To Bank Masr Your Balance Is " << my_account.get_balance() << endl;

    my_account.deposit(2000);
    cout << "Thanks You To Use ATM Bank Masr Your Balance Is " << my_account.get_balance() << endl;

    my_account.withdraw(10000);
    cout << "Thanks You To Use ATM Bank Masr Your Balance Is " << my_account.get_balance() << endl;

    my_account.withdraw(12000);
    cout << "Thanks You To Use ATM Bank Masr Your Balance Is " << my_account.get_balance() << endl;
    
    my_account.withdraw(10000);
    cout << "Thanks You To Use ATM Bank Masr Your Balance Is " << my_account.get_balance() << endl;


    return 0;
}