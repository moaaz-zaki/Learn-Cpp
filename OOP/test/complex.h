#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>
using namespace std;

class Complex{
private:
    float real, imag;

public:
    Complex(float r, float i) : real(r), imag(i){
    }
   Complex operator+ (Complex n1){
        return Complex(real + n1.real, imag + n1.imag);
    }

    Complex operator- (Complex n1){
        float r = real - n1.real;
        float i = imag - n1.imag;
        return Complex(r, i);
    }

   Complex operator* (Complex n1){
        float r = real * n1.real;
        float i = imag * n1.imag;
        return Complex(r, i);
    }
    void display_info ()
    {
        cout << "Result: " << real << " +i" << imag  << endl;
    }

};

#endif