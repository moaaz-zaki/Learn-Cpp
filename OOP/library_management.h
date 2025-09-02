#ifndef _LIBRARY_MANAGEMENT_H
#define _LIBRARY_MANAGEMENT_H

#include <iostream>
#include <string>
using namespace std;

class library_management
{
    private:
    string title , author;
    int page;

    public:
    library_management();
    library_management(string name , string writer , int p);
    ~library_management();
    void set_data(string name , string writer , int p);
};

#endif