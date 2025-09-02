#ifndef _CAR_H
#define _CAR_H
#include <string>
using namespace std;

class car 
{
    private:

    string maker , color;
    int model;
    static int counter;

    public:

    void set_data(string name, int mo, string col);
    string get_maker();
    string get_color();
    int  get_model();
    car(string name, int mo, string col);
    ~car();

};


#endif