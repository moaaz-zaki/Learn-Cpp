#include "book.h"
#include <iostream>
using namespace std;

void book::set_title (string book_name)
{
    title = book_name;
}

void book::set_author (string writer)
{
    author = writer ;
}

string book::get_title ()
{
    return title;
}

string book::get_author ()
{
    return author;
}