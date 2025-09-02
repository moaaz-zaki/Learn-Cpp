# include <iostream>
using namespace std ; 

int main ()
{

    cout<< "==================================================\n" ;
    cout<< "=========== Convert ASCII To Character ===========\n";
    cout<< "==================================================\n\n";

    int num ; 
    cout << "Enter The ASCII Code: ";
    cin >> num;

    cout << "The Character is :  "<< char(num) << endl;


    cout<< "\n==================================================\n\n";

    char ch ; 
    cout << "Enter The character: ";
    cin >> ch;

    cout << "The ACSII is :  "<< int( ch ) << endl;




    return 0;
}