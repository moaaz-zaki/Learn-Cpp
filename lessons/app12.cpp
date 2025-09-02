#include <iostream>
#include <array>
using namespace std;

int main ()
{
    cout << "=================================================" <<endl;
    cout << "======= Count Positive And Even Numbers =========" <<endl;
    cout << "=================================================" <<endl;

    int numbers [] = {10, 20, -20, 13, 30, -30, 40};
    int nums_Size = sizeof(numbers) / sizeof(numbers[0]) ; 
    int result = 0;

    for(int i = 0; i < nums_Size ; i++)
    {
        if(numbers [i] > 0 && numbers[i] %2 == 0) 
        {
            result += numbers[i];
            cout << numbers[i] ;
            
            if ( i < 6)
            {
                cout << " + ";
            }
        }
    }
    cout << " = " << result << endl;

    return 0;

}