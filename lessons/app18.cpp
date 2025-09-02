#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int numbers [] = {10 , -20 ,10 , 30 ,100 ,10 , -100 , -50 , 20 , 20  , 10 };
    int numSize = size(numbers);
    int checkMin =numbers[0];
    int counter =0;

    for(int i = 0; i < numSize; i++)
    {
        if (numbers[i] == 10)
            counter++;
        if(numbers[i] < checkMin )
            checkMin = numbers[i];
    }

    cout << checkMin << endl;
    cout << "Fount "<< counter << " Times" <<endl;
    cout << count(numbers , numbers+numSize , 10 );



    return 0;
}