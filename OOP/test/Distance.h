#ifndef _DISTANCE_H
#define _DISTANCE_H

class Distance
{
private:
    int feet;
    float inch;

public:
    Distance(int ft, float in) : feet(ft), inch(in)
    {
    }
    int get_feet()
    {
        return feet;
    }

    float get_inch()
    {
        return inch;
    }

    bool operator== (Distance &d1)
    {
        return (feet == d1.feet && inch ==d1.inch );
    }

};

#endif