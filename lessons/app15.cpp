#include <iostream>
using namespace std;


void iceBox (string item)
{
    if ( item == "Coca cola" )
    {
        cout << item << " Well Be More Cold " << endl;
        
    }else if ( item == "juice" || item == "Apple")
    {
        cout << item << " Well Be More Frech " << endl;
        
    }else
    {
        cout << item << " In Vaild " << endl;

    }

}

void calc (int numOne , int numTwo , char op)
{
    cout << numOne << " " << op << " " << numTwo  << " = ";
    if ( op == '+')
        cout << numOne + numTwo << endl;
    else if ( op == '-')
        cout << numOne - numTwo << endl;
    else if ( op == '*')
        cout << numOne * numTwo << endl;
    else if ( op == '/')
        cout << numOne / numTwo << endl;
    else 
        cout << "Invaild Operation sign "<< endl;



}

int main ()
{
    iceBox ( "Coca cola" );
    iceBox ( "juice" );
    iceBox ( "Apple" );
    iceBox ( "TV Remote" );

    calc ( 20 , 30 , '+');
    calc ( 20 , 30 , '-');
    calc ( 1 , 30 , '*');
    calc ( 2 , 2 , '/');
    
    return 0;
}