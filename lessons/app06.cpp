# include <iostream>
using namespace std;

int main ()
{
    cout << "================================="<< endl;
    cout << "======= User Rank Checker ======="<< endl;
    cout << "================================="<< endl;

    signed int rank;

    cout << "Enter Your Rank: ";
    cin >> rank;
    
    if( rank >= 1000 ){
        cout << rank << " You Are Dragon" << endl;
    }else if ( rank >= 500 )
    {
        cout << rank << " Intermediate level" << endl;
    }else {
        cout << rank << " Low Level" << endl;
    }


    return 0;
}

