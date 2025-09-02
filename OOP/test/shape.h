#ifndef _SHAPE_H
#define _SHAPE_H
#include <string>
using namespace std;


class shape{
private:
    string color;
public:
    shape(string c);
    virtual float area() ;
    virtual void draw() ;
    virtual void erase() ;
    virtual void display() final;
};

#endif