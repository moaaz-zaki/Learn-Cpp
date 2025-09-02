#ifndef _RECTANGLE_H
#define _RECTANGLE_H

class rectangle 
{
    private:
    float length , width;
    
    public: 
    void set_length(float l);
    void set_width(float w);
    float get_length ();
    float get_width ();
    float calculate_area ();
};

#endif