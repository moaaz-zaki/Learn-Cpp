#include "rectangle.h"

void rectangle::set_length(float l)
{
    length = l ;
}

void rectangle::set_width(float w)
{
    width = w ;
}

float rectangle::get_length ()
{
    return length;
}

float rectangle::get_width ()
{
    return width;
}

float rectangle::calculate_area ()
{
    if (length > 0 && width > 0)
    {
        return length * width;
    }
    else
    {
        return 0;
    }
}