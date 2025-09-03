#include <iostream>
using namespace std;

int main()
{

  int num = 3;
  cout << num + num << "\n";                 // 6
  cout << num * num - num << "\n";           // 6
  cout << (num * num / num) + num << "\n";   // 6
  cout << (num + num) + (num - num) << "\n"; // 6
  cout << (num / num) * (num + num) << "\n"; // 6
  cout << (num % num) + (num + num) << "\n"; // 6

  cout << (-10 + 20) - ((15 / 3.F) / float(190 + 10) * 400) << "\n"; // 0

  /*
    Write Code Here
    Do Not Use num = 6 :)
    */
  num += num;

  // Do Not Edit
  cout << num << "\n"; // 6

  cout << ((int)10.5 * 5) + (int)(40.5 + 10.1) << "\n"; // 100

  // // Assign The Values
  // char a = '0';
  // char b = '';
  // char c = '';

  // // Do Not Edit
  // cout << b * c + a << "\n"; // 1000

  /*
  We Need To Use This Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/

int a = 10;
int b = 20;
int c = 15;

cout << (a < b) << "\n";          // True
cout << (c > a) << "\n";          // True
cout << (a + c == b) << "\n";     // True
cout << (c >= a) << "\n";         // True
cout << (c <= b) << "\n";         // True
cout << !(a > b) << "\n";         // True
cout << (b > a || b < c) << "\n"; // True
cout << (a < b && b > c) << "\n"; // True

cout << ((a + b) * (a + b) + (a * a) )* a << "\n";       // 10000
/*
    ( (10 + 20) * (10 + 20) + (10 * 10 ))* 10
*/

cout << --a << " | " << a++ << " | " << ++a << "\n"; // 9 | 9 | 11
cout << a << " | " << ++a << " | " << a << "\n"; // 11 | 12 | 12
cout << --a << " | " << --a << " | " << --a << "\n"; // 11 | 10 | 9
}
