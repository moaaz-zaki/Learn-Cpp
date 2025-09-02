/*
Example
false // bool => Boolean
'a' // char ==> character
'9' //char == > cahacter
9 // int ==> integer
true // bool => boolean
100 // int ==> integer
-10 // int => integer
0 // int => integer
false // bool => boolean
10.9 // double
10.9F // float => flaoting point number
*/
#include <iostream>
#include <limits.h>
#include <string>
using namespace std;

int main()
{
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';

    // Output Needed
    cout << "ASCII Value of " << a << " Is " << int(a) << endl;
    cout << "ASCII Value of " << b << " Is " << int(b) << endl;
    cout << "ASCII Value of " << c << " Is " << int(c) << endl;
    cout << "ASCII Value of " << d << " Is " << int(d) << endl;

    int e = 12;
    int f = 108;
    int j = 122;
    int h = 101;
    int k = 114;
    int l = 111;

    // Output Needed
    cout << "Character Of This ASCII Value " << e << " Is " << char(e) << endl;
    cout << "Character Of This ASCII Value " << f << " Is " << char(f) << endl;
    cout << "Character Of This ASCII Value " << j << " Is " << char(j) << endl;
    cout << "Character Of This ASCII Value " << h << " Is " << char(h) << endl;
    cout << "Character Of This ASCII Value " << k << " Is " << char(k) << endl;
    cout << "Character Of This ASCII Value " << l << " Is " << char(l) << endl;
    cout << char(e) << char(f) << char(j) << char(h) << char(k) << char(l) << endl;

    int m = 1;
    int n = 13;
    int o = 17;
    int p = 70;
    cout << char(p - m) << char(p + o) << char(p + n) << endl;

    // Edit Anything Except Values
    short num1 = 100;
    long long num2 = 15001500;
    long double num3 = 100.54565746;

    // Do Not Edit
    cout << sizeof(num1) << " Bytes\n"; // 2 Bytes
    cout << sizeof(num2) << " Bytes\n"; // 8 Bytes
    cout << sizeof(num3) << " Bytes\n"; // 16 Bytes

    // Edit Anything Except Values
    unsigned int num4 = 100;
    int num5 = -100;
    short num6 = 100;
    double num7 = 500.55;

    // Do Not Edit
    cout << num4 << "\n"; // 100
    cout << num5 << "\n"; // -100
    cout << num6 << "\n"; // 100
    cout << num7 << "\n"; // 500.55

    // Do Not Edit Here
    short int num8 = 100;
    float num9 = 98.5f;
    double num10 = 1.7;

    // Edit This Line And Use Type Casting To Get The Output
    cout << num8 + int(num9 + num10) << "\n"; // 200

    double salary = 5000.98;
    cout << sizeof(salary) << " Bytes\n";    // 8 Bytes
    cout << sizeof(salary) * 8 << " Bits\n"; // 64 Bits
    cout << "Maximum Integer Number Is: " << INT_MAX << endl;
    cout << "Minimum Integer Number Is: " << INT_MIN << endl;
    cout << "Maximum Short Integer Number Is: " << SHRT_MAX << endl;
    cout << "Minimum Short Integer Number Is: " << SHRT_MIN << endl;
    // Edit Line To Make 8 Become 4
    cout << sizeof(10.5F + 5 + 20.5F + 10) << "\n"; // 8

    // Do Not Edit Here
    short num11 = 1000;
    int num12 = 10000;
    long double num13 = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    cout <<  num11 << endl;
    // cout << ? ? ? -? ? ? << "\n"; // 12
    // cout << ? ? ? +? ? ? << "\n"; // 20
    // cout << ? ? ? *? ? ? << "\n"; // 32
    // cout << ? ? ? *? ? ? << "\n"; // 5000
    // cout << char(??? * ???) << "\n"; // P

return 0;
}