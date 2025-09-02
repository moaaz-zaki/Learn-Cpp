#include "car.h"
#include <iostream>
using namespace std;

int main ()
{
    car c1;
    c1.brand = "BMW X6";
    c1.year = 2024;

    cout << "My Car Is " << c1.get_brand() << " Model " << c1.get_year() << endl;

    return 0;
}

