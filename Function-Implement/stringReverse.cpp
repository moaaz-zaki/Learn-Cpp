#include <iostream>
using namespace std;


string stringReverse (string name , int nameSize  )
{
    string result;
    for(int i = nameSize -1  ; i >= 0 ; i--)
        result +=  name[i];

    return result;


}







int main ()
{
    string name;
    int nameSize;

    cout << "Enter The String want to reverse: ";
    cin >> name;
    nameSize = name.length();
   
   
   cout <<  stringReverse ( name , nameSize  );


    return 0;
}