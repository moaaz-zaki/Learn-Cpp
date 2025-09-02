# include <iostream>
using namespace std;

int main ()
{
    cout << "================================="<< endl;
    cout << "======= Simple Calculator ======="<< endl;
    cout << "================================="<< endl;


    int number_One , number_Two , operation;
    
    cout << "Enter The Number One: " ;
    cin >> number_One ;

    cout << "Enter The Number Two: " ;
    cin >> number_Two;
    
    cout << "Choose The Operation Number:  " << endl ;
    cout << "[1] + " << endl ;
    cout << "[2] - " << endl ;
    cout << "[3] * " << endl ;
    cout << "[4] /  " << endl ;
    cin >> operation;

    if ( operation == 1 ) {
        cout << number_One + number_Two << endl;
    }else if ( operation == 2 ) {
        cout << number_One - number_Two << endl;
        
    }else if ( operation == 3 ) {
        cout << number_One * number_Two << endl;
        
    }else if ( operation == 4 ) {
        cout << number_One / number_Two << endl;

    }else {
        cout << "Operation Number Is Not Vaild" << endl;
    }


    return 0;
}

