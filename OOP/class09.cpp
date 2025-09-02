#include <iostream>
#include <string>
using namespace std;

class bank_account
{
    private:
    string user;
    int balance;

    public:
    void set_data (string name , int money)
    {
        user = name;
        balance = money;
    }

    void deposit (int amount)
    {
        balance += amount;
    }

    void withdraw (int amount)
    {
        if(balance > amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "Balance Not Enough!" << endl ;
        }
    }

    string get_user ()
    {
        return user;
    }

    int get_balance () 
    {
        return balance;
    }

};


int main ()
{
    bank_account my_account;
    my_account.set_data( "moaaz" , 20000 );

    cout << my_account.get_user() << "'s Your balance is  " << my_account.get_balance() << endl;

    my_account.deposit(2000);
    cout << my_account.get_user() << "'s Your balance is  " << my_account.get_balance() << endl;

    my_account.withdraw (10000);
    cout << my_account.get_user() << "'s Your balance is  " << my_account.get_balance() << endl;

    my_account.withdraw (20000);
    cout << my_account.get_user() << "'s Your balance is  " << my_account.get_balance() << endl;

    return 0;
}