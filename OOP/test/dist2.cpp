#include "Distance.h"
#include <iostream>
using namespace std;

int main()
{
    // Distance d1;
    Distance d2(5, 6.5);
    cout << "Object One: ";
    d2.display_info();

    Distance d3(3 , 1.5);
    cout << "Object Two: ";
    d3.display_info();


    Distance d4 = Distance::add_distance( d2 , d3);
    cout << "Result:  ";
    d4.display_info(); 


    return 0;
}