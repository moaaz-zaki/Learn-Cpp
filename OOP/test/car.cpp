#include "car.h"
#include <iostream>
#include <string>
using namespace std;

int car::counter = 0;

car::car(string name, int mo, string col): maker (name) , model (mo) , color (col)
{
    counter ++;
    cout << "Car " << counter << " Reached" <<endl;
}

void car::set_data(string name, int mo, string col)
{
    maker = name;
    model = mo;
    color = col;
}

string car::get_maker()
{
    return maker;
}

string car::get_color()
{
    return color;
}

int car::get_model()
{
    return model;
}

car::~car()
{
    cout << "Thanks You To Use My Class Car" << endl;
}