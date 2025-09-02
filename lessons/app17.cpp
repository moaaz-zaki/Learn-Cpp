#include <iostream>
#include <cctype>
using namespace  std;

int main ()
{
    string name = "M  \no\t  A\t A  z\n Z a K \tI";
    int nameSize  = size(name);
    

    cout << name << endl;
    cout << "======================" <<endl;

    for( int i = 0; i < nameSize; i++)
    {
        if(isspace (name[i]))
            continue;
        else if(isupper (name[i] ) )
            cout << (char) tolower(name[i]);
        else
            cout << (char) toupper(name[i]);
        
    }



    return 0;
}