#include <iostream>
using namespace std;

void generateLetter (char start , char end)
{
    if((int)start > (int)end)
    {
        for(int i = start ; i >= end; i--)
        {
            cout << (char) i << "\t" << i << endl;
        }
        
    }else 
    {
        for(int i = start ; i <= end; i++)
        {
            cout << (char) i << "\t" << i << endl;
        }
    }

}

int main ( )
{
    generateLetter ( 'a', 'z');
    return 0;
}