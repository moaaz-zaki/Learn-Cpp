#include "circule.h"
#include <iostream>
using namespace std;

circule::circule(float r, string c) : shape(c), reduis(r)
{
}
float circule::area()
{
    cout << "Circule Class Area: ";
    return 3.14 * reduis * reduis;
}

void circule::draw()
{
    cout << "Circule Class Draw: " << endl;
}

void circule::erase()
{
    cout << "Circule Class Erase: " << endl;
}
