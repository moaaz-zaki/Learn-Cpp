#ifndef _TRIANGLE_H
#define _TRIANGLE_H
#include "shape.h"

class Triangle : public shape
{
public:
    Triangle();
    Triangle(float len , float wid);
    float get_area();

};
#endif