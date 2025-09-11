#include <iostream>
using namespace std;
bool is_not_number(string st);

int main (){

    cout << is_not_number("123mf45") << endl;
    cout << is_not_number("12345") << endl;
    return 0;
}

bool is_not_number (string st){
    int cout = 0;
    for(char i: st){
        if( i <'0' || i > '9')
        {
            return true;
        }
    }
    return false;
}