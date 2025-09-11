#include <iostream>
#include <vector>
using namespace std;

int get_sum_numbers(vector<int> numbers, char operation = '+');

int main()
{

    cout << "===============================" << endl;
    cout << "====== Get Sum Of Numbers =====" << endl;
    cout << "===============================" << endl;

    vector<int> numbers;
    int size;
    char operation;
    cout << "Enter The Size Of Vector: ";
    cin >> size;
    cout << "Enter operation: ";
    cin >> operation;

    numbers.resize(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Number[" << i + 1 << "]: ";
        cin >> numbers.at(i);
    }
    cout << "============================" << endl;

    cout << "The Sum Of Numbers Is: " << get_sum_numbers(numbers,operation) << endl;

    return 0;
}

int get_sum_numbers(vector<int> numbers, char operation)
{
    int result = operation == '*' ? 1 : 0;

    for (int num : numbers)
    {
        switch (operation)
        {
        case '+':
            result += num;
            break;
        case '-':
            result -= num;
            break;
        case '*':
            result *= num;
            break;
        default:
            cout << "Invaild Number" << "\t";
        }
    }

    return result;
}
