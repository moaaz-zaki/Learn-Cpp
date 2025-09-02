#include <iostream>
using namespace std;

int main ()
{
    cout << "=================================================" <<endl;
    cout << "=============== Guess The Numbers ===============" <<endl;
    cout << "=================================================" <<endl;


    int guessNumber = 7, triesGuess = 0 , res;
    
    while( true )
    {
        cout << "Enter a Number From 1 to 10:  ";
        cin >> res;
        if( res == guessNumber)
        {
            cout << "Great , Correct Number\n";
            break;
        }else 
        {
            cout << "Unorrect Number\n";
            triesGuess++;
        }
        if ( triesGuess == 3 )
        {
            cout << "########################\n";
            cout << "# Game Over, Try Again #\n";
            cout << "########################\n";
            break;
        }
    }  

    return 0;

}