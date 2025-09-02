#include <iostream>
#include <string>
using namespace std;

class library_management
{
    private:
    string title , author;
    int page;

    public:
    library_management(string name , string writer , int p):title(name) , author(writer) , page(p)
    {
        cout << title << " Is Add To Library\n";
    }

    library_management():title("Elda7e7") , author("Ahmed Saeed") , page( 250)
    {
        cout << title << " Is Add To Library\n";
    }

    ~library_management()
    {
        cout << title << " Is Removed From Library\n";
    }


};

int main ()
{
    library_management book1 ( "El3wlqa" , "moaaz zaki" , 980 );
    return 0;
}