#ifndef _CAT_H
#define _CAT_H
#include <string>
#include <iostream>
using namespace std;

class cat{
    private:
        string name;
    public:
    cat(string n ):name(n) 
    {

    }
    cat operator+ (cat n1)
    {
        string n = name + " " + n1.name;
        return cat(n);
    }
    void display_info ()
    {
        cout << name << endl;
    }
};

#endif


