#include <iostream>
using namespace std;



int main (){
    int year;
    cout << "Enter Event's Year: " ;
    cin >> year;

    switch (year){
        case 1982:
            cout << "My Birth Day" << endl;
            break;
        case 1989:
            cout << "My First Work" << endl;
            break;
        case 1995:
            cout << "Windows 95" << endl;
            break;
        case 2000:
            cout << "Created My vBvlletin forum" << endl;
            break;
        case 2002:
            cout << "Windows Millennium" << endl;
            break;
        default:
            cout << "No Event in This Year" << endl;
    }

    int day;
    cout << "Enter The day: ";
    cin >> day;

    if(day < 5){
        cout << day << " Shop Is Open" << endl;
    }else{
        cout << "Day Is Not Vaild" << endl;
    }

    switch (day) {
        case 10:
            cout << "Case 1" << endl;
            break;
        case 20:
            cout << "Case 2" << endl;
            break;
        case 30:
        case 31:
        case 32:
            cout << "Case 3" << endl;
            break;
        default:
            cout << "Invaild Number" << endl;
    }


    return 0;
}
