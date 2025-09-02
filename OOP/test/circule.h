#ifndef _CIRCULE_H
#define _CIRCULE_H
#include "shape.h"

class circule : public shape{
private:
    float reduis;
public:
    circule(float r, string c);
    float area();
    void draw();
    void erase();
};

#endif