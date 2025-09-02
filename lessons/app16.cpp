#include <iostream>
using namespace std;

void calc (int nums [] , int size)
{
    int result = 0;

    for( int i = 0; i < size; i++)
    {
        result += nums[i];
    }

    cout << "Result IS: " << result << endl;

}





int main ()
{
    int numSize;
    cout << "Enter The Size Of Array: ";
    cin >> numSize ;

    int nums [numSize];
    
    for( int i = 0; i < numSize; i++)
    {
        cout << "Enter number [ " << i + 1 << " ]: " ;
        cin >> nums[i] ;
    }

    calc ( nums , numSize);
    
    return 0;
}