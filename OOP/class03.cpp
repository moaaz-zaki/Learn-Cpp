#include <iostream>
#include <string>
using namespace std;

class car
{
    public:

    string brand;
    int year;

    string get_brand ()
    {
        return brand;
    }

    int get_year ()
    {
        return year;
    } 

};


int main ()
{
    car c1;
    c1.brand = "Honda";
    c1.year = 2018;

   cout << "My Car is " <<  c1.get_brand() << " Model " << c1.get_year() << endl;

    return 0;
}