#include <iostream>
#include "calculate.h"
using namespace std;

int main ()
{
    calculate c1;
    cout << "Version 1 Equal " << c1.add(2 , 3) << endl;

    calculate c2;
    cout << "Version 1 Equal " << c2.add(2 , 3 , 5) << endl;

    calculate c3;
    cout << "Version 1 Equal " << c3.add((float)2.6 ,(float) 3.4) << endl;

    calculate c4;
    cout << "Version 1 Equal " << c4.add("moaaz", "zaki" ) << endl;
    return 0;
}

