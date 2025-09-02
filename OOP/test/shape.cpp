#include "shape.h"
#include <iostream>
using namespace std;

shape::shape(string c) : color(c)
{
}
float shape::area()
{
    cout << "Shape Class Area: ";
    return 0;
}

void shape::draw()
{
    cout << "Shape Class Draw: ";
}

void shape::erase()
{
    cout << "Shape Class Erase: ";
}

void shape::display()
{
    cout << "Shape Class Display: " << endl;
}
