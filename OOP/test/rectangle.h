#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include "shape.h"

class rectangle : public shape
{
private:
    float length, width;
public:
    rectangle(float len, float wid , string c);
    float area();
    void draw();
    void erase();
    // void display();
};

#endif