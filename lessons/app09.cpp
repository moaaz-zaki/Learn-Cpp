#include <iostream>
using namespace std;

int main ( )
{
    cout << "==================================" << endl;
    cout << "====== Discount Application ======" << endl;
    cout << "==================================" << endl;


    int price = 100, discount = 10, year ; 

    cout << "Type The Number Of Year In Company: ";
    cin >> year ;
    
    switch (year)
    {
        case 1:
            discount = 20;
            break;
        case 2:
            discount = 40;
            break;
        case 3:
            discount = 80;
            break;
    }

    cout << "The Price Of Product " << price - discount <<" $\n";

    return 0;
}