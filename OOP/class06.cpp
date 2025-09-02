#include <iostream>
#include "book.h"
using namespace std;

int main ()
{
    book my_book;
    my_book.set_title("Elda7e7");
    my_book.set_author("Ahmed saed");


    cout << "My Favourite Book Is " << my_book.get_title() <<  " Writen By " << my_book.get_author() << endl;
    return 0;
}