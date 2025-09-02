#include <iostream>
using namespace std;


string zFill (string num , int width , char fill  = '0')
{
    int length;
    
    length = 6 - width;

    for(int i = 0; i < length; i++)
        num = fill + num;
    
    return num;
   

}
int main()
{

    string number;
    int width;
    char fill;

        cout << "Enter The Number: ";
        cin >> number;
    
        cout << "Enter Char To Fill: ";
        cin >> fill;
    
        width = size(number) -1;
    
        cout << zFill(number , width , fill ) << endl; 


    return 0;
}