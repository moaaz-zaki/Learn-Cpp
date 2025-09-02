#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inch;

public:
    Distance() : feet(0), inch(0.0)
    {
    }
    Distance(int ft, float in) : feet(ft), inch(in)
    {
    }
    static Distance add_distance (Distance d1 ,Distance d2)
    {
        Distance result ;
        result.feet = d2.feet + d1.feet;
        result.inch = d2.inch + d1.inch;
        return result;
    }
    void set_data(int ft, float in)
    {
        feet = ft;
        inch = in;
    }
    void display_info()
    {
        cout << "Feet: " << feet << "\tInch: " << inch << endl;
    }
};

int main()
{
    // Distance d;
    Distance d2(5, 6.5);
    cout << "Object 1: ";
    d2.display_info();

    Distance d3(3, 1.5);
    cout << "Object 1: " ;
    d3.display_info();

    Distance d6 = Distance::add_distance(d2 , d3);
    d6.display_info();

    return 0;
}