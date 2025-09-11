#include <iostream>
using namespace std;
int parse_integer_from_string(string st);

int main (){

    cout << parse_integer_from_string("1236HelloWorld") << endl;

    return 0;
}

int  parse_integer_from_string(string st){
    int  result;

    for(char i: st){
        if(i >= '0' && i <= '9'){
            result =result * 10  + (i - '0');
        }else{
            break;
        }
    }

    return result;
}