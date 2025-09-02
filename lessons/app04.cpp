# include <iostream>
using namespace std;

int main ()
{
    cout << "================================="<< endl;
    cout << "====== Even Or Odd Checker ======"<< endl;
    cout << "================================="<< endl;
    
    int number;

    cout << "Enter The Number You Want To Test: ";
    cin >> number ; 
    
    //! if condition
    if( number % 2 )
    cout << number << " Odd Number" << endl;
    else 
    cout << number << " Even Number" << endl;
    
    //!Ternary Condition
    cout << (number % 2 ?  "Odd Nummber" : "Even Number") << endl;



    return 0;
}

