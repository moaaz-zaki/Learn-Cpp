#include "library_management.h"

library_management::library_management() : title("Elda7e7"), author("Ahmed Saeed"), page(260)
{
    cout << title << " Is Add To Library \n";
}

library_management::library_management(string name, string writer, int p) : title(name), author("writer"), page(p)
{
    cout << title << " Is Add To Library \n";
}

library_management::~library_management()
{
    cout << title << " Is Remove From Library\n";
}

void library_management::set_data(string name, string writer, int p)
{
    title = name;
    author = writer;
    page = p;
    cout << title << " Is Add To Library \n";
}

