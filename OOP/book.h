#ifndef _BOOK_H
#define _BOOK_H
#include <string>
using namespace std;

class book
{
    private:
    string title, author;
    
    public:
    void set_title (string book_name);
    void set_author (string writer);
    string get_title ();
    string get_author ();

};

#endif