#include <iostream>
using namespace std;

int main ()
{
    cout << "===============================================" << endl;
    cout << "===== Guess The Number From Sequance Game =====" << endl;
    cout << "===============================================" << endl;
    
    int points = 0;
    int answers [3] ; 
    int sequances [3][6] = {
        {1, 5, 10, 16, 23, 31},
        {2, 4, 8, 16, 32, 64},
        {1, 1, 2, 3, 5, 8}
    };

    cout << "Type The Missing Number Of Sequance: "<<endl;

    cout << "Sequance 1" << endl;
    cout << "1 | 5 | 10 | 16 | 23 | ?? ";
    cin >> answers[0];

    cout << "Sequance 2" << endl;
    cout << "2 | 4 | 8 | 16 | 32 | ?? ";
    cin >> answers[1];

    cout << "Sequance 3" << endl;
    cout << "1 | 1 | 2 | 3 | 5 | ?? ";
    cin >> answers[2];

    if( answers[0] == sequances [0][5])
        points++;

    if( answers[1] == sequances [1][5])
        points++;

    if( answers[2] == sequances [2][5])
        points++;


    cout << "Your Point Is " << points << " From 3" <<endl;
    return 0;
}