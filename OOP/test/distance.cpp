#include "Distance.h"
#include <iostream>
using namespace std;

Distance::Distance() : feet(0), inch(0.0)
{
}
Distance::Distance(int ft, float in) : feet(ft), inch(in)
{
}
Distance Distance::add_distance(Distance d1, Distance d2)
{
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;
    return result;
}

void Distance::set_data(int ft, float in)
{
    feet = ft;
    inch = in;
}
void Distance::display_info()
{
    cout << "Feet: " << feet << "\tInch: " << inch << endl;
}