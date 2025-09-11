#include <iostream>
#include <string>
using namespace std;

string get_upper_case(string st);
string get_lower_case(string st);
string get_swap(string st);

int main()
{

    cout << get_upper_case("elzero") << endl;
    cout << get_lower_case("ELZERO") << endl;
    cout << get_swap("mOaAz ZaKi ZeWiEd") << endl;
    return 0;
}

string get_upper_case(string st)
{
    string result;

    for (char i : st)
    {
        if (i >= 'a' && i <= 'z')
        {
            i -= 32;
        }
        result += i;
    }

    return result;
}

string get_lower_case(string st)
{
    string result;

    for (char i : st)
    {
        if (i >= 'A' && i <= 'Z')
        {
            i += 32;
        }
        result += i;
    }

    return result;
}

string get_swap(string st)
{
    string result;

    for (char i : st)
    {
        if (i >= 'a' && i <= 'z')
        {
            i -= 32;
        }else if(i >= 'A' && i <= 'Z'){
            i += 32;
        }else{
            i = i;
        }
        result += i;
    }
    return result;
}
