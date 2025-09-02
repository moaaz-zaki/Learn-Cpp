#ifndef _GRADUATE_H
#define _GRADUATE_H
#include "student.h"

class graduate : public student
{
private:
    string reserch;
public:
    graduate(string n, string g, int a, string d , int l , float gp , string re) : student(n ,g ,a,d ,l , gp) , reserch(re)
    {

    }
    void display_info()
    {
        student::display_info();
        cout << "Reserch: " << reserch << endl;
        cout << "=========================\n";
    }
};

#endif