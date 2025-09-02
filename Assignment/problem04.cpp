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

    cout << (-10 + 20) - (15 / 3) * (400 / (190 + 10)) << "\n"; // 0

    /*
      Write Code Here
      Do Not Use num = 6 :)
      */
    num += num;

    // Do Not Edit
    cout << num << "\n"; // 6

    cout << ((int)10.5 * 5) + (int)(40.5 + 10.1) << "\n"; // 100
    
}
