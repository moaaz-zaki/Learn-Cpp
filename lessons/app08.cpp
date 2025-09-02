#include <iostream>
using namespace std;

int main ()
{
    cout << "======================================" << endl;
    cout << "====== Award System Application ======" << endl;
    cout << "======================================" << endl;

    int award ;

    cout << "\nEnter Cobon Number:  " ;
    cin >> award;

    switch (award)
    {
        case 100:
        case 110:
        case 120:
            cout << "Congrate For The Iphone  " << endl;
            break;
        case 200:
            cout << "Congrate For The Ipad " << endl;
            break;
        case 300:
            cout << "Congrate For The TV  " << endl;
            break;
        default:
            cout << "No Award To This Number " << endl;
    }
    return 0;
}