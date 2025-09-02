#include <iostream>
using namespace std;

class rectangle
{
    private:
    float length , width;
    
    public:
    void set_length (float l)
    {
        length = l;
    }

    void set_width (float w)
    {
        width = w;
    }
    
    float get_length ()
    {
        return length;
    }

    float get_width ()
    {
        return width;
    }

    float claculate_area ()
    {
        if (length > 0 && width > 0)
        {
            return length * width ;
        }
        else
        {
            return 0;
        }
    }

};


int main ()
{
    rectangle area1;

    area1.set_length(40.5);
    area1.set_width(30.6);

    if ( area1.claculate_area() != 0)
    {
        cout << area1.get_length() << " * " << area1.get_width() << " = " << area1.claculate_area() << endl;
    }
    else
    {
        cout << "Invaild Number!";
    }

    return 0;
}