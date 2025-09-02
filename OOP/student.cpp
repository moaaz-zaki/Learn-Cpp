#include "Student.h"

box::box()
{

}
box::box(float len, float wid, float dip)
{
    length = len;
    width = wid;
    dipth = dip;
}
float box::box_volum()
{
    return length * width * dipth;
}
box box::big_box(box b1, box b2)
{
    return b1.box_volum() > b2.box_volum() ? b1 : b2 ;
}