#include <iostream>
using namespace std;

int main ()
{
    cout << "=================================================" <<endl;
    cout << "========= Reversed Elements From User ===========" <<endl;
    cout << "=================================================" <<endl;

    int values [5];

    for ( int i = 4; i >= 0; i--)
    {
        cout << "Enter The Number: ";
        cin >> values[i] ;
    }

    for ( int j = 0; j < 5; j++ )
    {
        cout << values[j]  << endl;
    }

    return 0;

}