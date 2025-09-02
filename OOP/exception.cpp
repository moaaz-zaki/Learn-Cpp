#include <iostream>
using namespace std;

int main ()
{
    int x, y;
    cout << "Enter Data: " ;
    cin >> x;
    cin >> y;
    try 
    {
        cout << x / y;      
    }

    catch (...)
    {
        cout << "Contact To service system" << endl;
    }
    // catch (int my_number)
    // {
       
    //     cout << "Y Mustnot equal 0 " << endl;
    // }
    // catch (const char *msg)
    // {
    //     cout << msg << endl;
    // }
    cout << "The Program Is Continuo" << endl;

    return 0;
}