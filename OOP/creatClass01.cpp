#include <iostream>
using namespace std;


class rectangel 
{
    private:

    float length;
    float width;

    public:
    
    void set_length (float l)
    {
        if( l > 0)
        {
            length = l;
        }else
        {
            cout << "Invaild Number!" << endl;
        }

    }

    float get_length ()
    {
        return length;
    }

    void set_width (float w)
    {
        if( w > 0)
        {
            width = w;
        }else
        {
            cout << "Invaild Number!" << endl;
        }

    }

    float get_width ()
    {
        return width;
    }

    float get_area ()
    {
        return length * width;
    }

};

int main ()
{
    rectangel box;

    //!Error length Inaccessble
    //box.length = 50;  

    box.set_length(40.5);
    box.set_width(30.6);

    cout << box.get_length() << " * " << box.get_width() << " = " << box.get_area() << endl;

    return 0;
}