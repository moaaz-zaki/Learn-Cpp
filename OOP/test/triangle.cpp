#include "Triangle.h"
#include "shape.h"
Triangle::Triangle(){

}
Triangle::Triangle(float len, float wid): shape(len , wid)
{

}

float Triangle::get_area()
{
    return shape::get_length() * shape::get_width() * 0.5;
}