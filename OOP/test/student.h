#ifndef _STUDENT_H
#define _STUDENT_H
#include "person.h"


class student : public person
{
private:
    string depart;
    int level;
    float GPA;

public:
    student( )
    {

    }
    student(string d , int l , float gp): depart(d), level(l), GPA(gp)
    {

    }

    void set_depart(string d){
        depart = d;
    }

    string get_depart(){
        return depart;
    }

    void set_level(int l){
        level = l;
    }

    int get_level(){
        return level;
    }

    void set_GPA(float a){
        GPA = a;
    }

    float get_GPA(){
        return GPA;
    }
    void display_info () {
        // person::display_info();
        cout << "=Department: " << depart << "\n=Level: " << level << "\n=Total GPA: " << GPA<< endl;

    }
};

#endif