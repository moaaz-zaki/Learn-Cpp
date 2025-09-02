#include "car.h"
#include "rectangle.h"
#include <iostream>
using namespace std;



int main ()
{
    car c1 ("Honda" , 2019 , "White");
    // c1.set_data("Honda" , 2019 , "White");
    cout << "Car Is: " << c1.get_maker() << " model " << c1.get_model() << " & " << c1.get_color() << endl; 
    
    cout << "===================================" << endl;

    car c2 ("Toyota" , 2020 , "Black");
    // c2.set_data("Toyota" , 2020 , "Black");
    cout << "Car Is: " << c2.get_maker() << " model " << c2.get_model() << " & " << c2.get_color() << endl; 

    cout << "===================================" << endl;

    car c3 ("Fiat" , 2021 , "Yellow");
    // c3.set_data("Fiat" , 2021 , "Yellow");
    cout << "Car Is: " << c3.get_maker() << " model " << c3.get_model() << " & " << c3.get_color() << endl; 

    cout << "===================================" << endl;


    // rectangle r1 ( 40.5 , 30.6);
    // // r1.set_data(40.5 , 30.6);
    // cout << "Area Of Rectangle Are: " << r1.get_area() << endl;

    // cout << "===================================" << endl;



    // rectangle r2 (20, 5);
    // // r2.set_data(20 , 5);
    // cout << "Area Of Rectangle Are: " << r2.get_area() << endl;

    // cout << "===================================" << endl;


    // rectangle r3 ( 5 ,4);
    // // r3.set_data(5 , 4);
    // cout << "Area Of Rectangle Are: " << r3.get_area() << endl;

    // cout << "===================================" << endl;

    // rectangle r4;
    // // r3.set_data(5 , 4);
    // cout << "Area Of Rectangle Are: " << r4.get_area() << endl;

    // cout << "===================================" << endl;


    return 0;
} 