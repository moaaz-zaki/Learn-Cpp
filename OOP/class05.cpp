#include <iostream>
#include <string>
using namespace std;

class book
{
    private:
    string titel , author;
    
    public:

    void set_titel (string book_name)
    {
        titel = book_name ;
    }

    void set_author(string writer)
    {
        author = writer;
    }

    string get_titel ()
    {
        return titel;
    }

    string get_author ()
    {
        return author;
    }


};

int main ()
{
    book my_book;

    my_book.set_titel("Elda7e7");
    my_book.set_author("Ahmed Elgandor");

    cout << "My Favourate Book Is " << my_book.get_titel() <<" Writen By " << my_book.get_author() << endl; 

    return 0;
}