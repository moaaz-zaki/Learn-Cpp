#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    box b;
    box b1(10.5, 5.25, 2.1);
    cout << b1.box_volum();
    cout << "\n";
    box b2(15.9, 1.25, 3.1);
    cout << b2.box_volum();
    cout << "\n=========================================\n";
    box b3 = b.big_box(b1, b2);
    cout << b3.box_volum();
   


    return 0;
}