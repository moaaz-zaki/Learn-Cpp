#include "rectangle.h"
#include <iostream>
using namespace std;

rectangle::rectangle(float len, float wid , string c) : shape(c), length(len), width(wid)
{
}

float rectangle::area()
{
    cout << "Reactangle Class Area: " ;
    return length * width;
}

void rectangle::draw()
{
    cout << "Reactangle Class Draw: " << endl;
}

void rectangle::erase()
{
    cout << "Reactangle Class Erase: " << endl;
}
// void rectangle::display ()
// {
//     cout << "Rectangle Class Display: " << endl;
// }
