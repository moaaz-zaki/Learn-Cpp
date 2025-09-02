#include <iostream>
using namespace std;




string stringRepeat (string name , int times  = 2 , char sperator = '.' ,bool endShow = false )
{
    string result;
    for(int i = 0; i < times; i++)
    {
        result += name ;

        if(i < times -1 )
        result += sperator;
    }
    if (endShow)
    {
        result += sperator;
    }
    return result;
}




int main ()
{
    string name;
    int times;
    char sperator;
    bool endShow;

    cout << "Enter Massage Want To Repeat: " ;
    getline(cin , name );

    cout << "Enter Number Of Repeat: " ;
    cin >> times;
    
    cout << "Enter The Sperator: " ;
    cin >> sperator;

    cout << "Do You Want Seperator At End [true{1}/ false{0}]: " ;
    cin >> endShow;

    cout << stringRepeat(name, times , sperator , endShow ) ;


    return 0;
}