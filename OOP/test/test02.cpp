#include <iostream>
#include <string>
#include "rectangle.h"
using namespace std;

class car
{
    private:
    string maker;
    int model;

    public:
    car(string name, int year) : maker(name), model(year)
    {
        cout << "Car Data Are Inizalization" << endl;
    }
    ~car()
    {
        cout << "Thanks You To Use My Class Car" << endl;
    }

    string get_maker ()
    {
        return maker;
    }

    int get_model ()
    {
        return model;
    }
};

class rectangle
{
    private:
    float length;
    float width;

    public:
        rectangle(float len, float wid)
            rectangle::rectangle()
        {
        }
{
        length = len;
        width = wid;
        cout << "Rectangle Data Are Inizalization" << endl;
    }
    ~rectangle()
    {
        cout << "Thanks You To Use My Class Rectangle" << endl;
    }
    float get_area()
    {
        return length * width;
    }
};

int main()
{
    car c1( "BMW X6" , 2023 );
    cout << "My Car Is " << c1.get_maker() << " Model " << c1.get_model() << endl;
    cout << "=================================" << endl;

    rectangle r1 ( 40.5 , 30.6);
    cout << "Area Of Rectangle Are: " << r1.get_area() << endl;

    cout << "===================================" << endl;

    return 0;
}