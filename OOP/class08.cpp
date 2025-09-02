#include <iostream>
#include "rectangle.h"
using namespace std;

int main ()
{
    rectangle area;
    area.set_length(40.5);
    area.set_width (30.6) ;

    if(area.calculate_area() != 0)
    {
        cout <<  area.get_length() << " * " << area.get_width() << " = " << area.calculate_area() << endl;
    }
    else
    {
        cout << "Invaild Number";
    }

    return 0;
}