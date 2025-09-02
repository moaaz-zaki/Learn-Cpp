#include <iostream>
using namespace std;

int main ()
{
    cout << "==========================================" << endl;
    cout << "===== Simple Calculater Application ======" << endl;
    cout << "==========================================" << endl;

    int number_One , number_Two , result ;
    char operation;

    cout << "Enter The First Number: ";
    cin >> number_One;

    cout << "Enter The Secand Number: ";
    cin >> number_Two;

    cout << "Enter The Operation: " << endl;
    cout << " \'+\' " << endl;
    cout << " \'-\' " << endl;
    cout << " \'*\' " << endl;
    cout << " \'/\' " << endl;
    cin >> operation;

    switch (operation)
    {
        case '+':
        result = number_One + number_Two;
        break;
    case '-':
        result = number_One - number_Two;
        break;
    case '*':
        result = number_One * number_Two;
        break;
    case '/':
        result = number_One / number_Two;
        break;
    default:
        cout << "Invalid Operation" <<endl;
    }

    cout << "The Result Of "<< number_One << " "<<operation << " " << number_Two <<" Equal " << result << endl;

    return 0;
}