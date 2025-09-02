#ifndef _STUDENT_H
#define _STUDENT_H

class box
{
private:
    float length, width, dipth;

public:
    box();
    box(float len, float wid, float dip);
    float box_volum();
    box big_box(box b1, box b2);
};

#endif