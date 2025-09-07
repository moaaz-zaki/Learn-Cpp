#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> vals{100, 200, 600, 400, 200};

    if (vals.front() + vals.back() > vals.at(2))
    {
        cout << "\"First Number + Last Number Is Larger Than Middle Number\"" << endl;
        cout << "\"" << vals.front() << " + " << vals.back() << " = " << vals.front() + vals.back() << "\"" << endl;
        cout << "\"" << vals.front() + vals.back() << " > " << vals.at(2) << "\"" << endl;
    }
    else if (vals.at(1) + vals.at(3) > vals.at(2))
    {
        cout << "\"Second Number + Before Last Number Is Larger Than Middle Number\"" << endl;
        cout << "\"" << vals.at(1) << " + " << vals.at(3) << " = " << vals.at(1) + vals.at(3) << "\"" << endl;
        cout << "\"" << vals.at(1) + vals.at(3) << " > " << vals.at(2) << "\"" << endl;
    }
    else
    {
        cout << "\"Middel Number Is Largest\"\n"
             << vals.at(2) << endl;
    }

    int nums[]{100, 300, 600, 200, 100};
    int length = (sizeof(nums) / sizeof(nums[0])) - 1;

    if (nums[0] == nums[length] && nums[1] == nums[length - 1])
    {
        cout << "Array Is Palindrome" << endl;
    }
    else
    {
        cout << "Array Is Not Palindrome" << endl;
    }

    int num[]{10, 20, 30};

    for (int i = 0; i < size(num); i++)
    {
        num[i] *= 10;
        cout << num[i] << "\t";
    }

    string names[][3]{
        {"Ahmed" , "Sayed" , "Mahmoud"},
        {"Sameh" , "Mahdy" , "Gamal"},
        {"Mohamed" , "Adel" , "Majed"}
    };

    cout << "First Collection Of Names:\n";
    cout << names[0][0] << "\n"; // Ahmed
    cout << names[1][1] << "\n"; // Mahdy
    cout << names[2][2] << "\n"; // Majed

    cout << "Second Collection Of Names:\n";
    cout << names[2][1] << "\n"; // Adel
    cout << names[1][2] << "\n"; // Gamal
    cout << names[0][2] << "\n"; // Mahmoud

    cout << "Third Collection Of Names:\n";
    cout << names[0][1] << "\n"; // Sayed
    cout << names[1][0] << "\n"; // Sameh
    cout << names[2][0] << "\n"; // Mohamed

    array<int, 3> numbers;
    numbers.fill(100);
    cout << numbers[0] << "\n"; // 100
    cout << numbers[1] << "\n"; // 100
    cout << numbers[2] << "\n"; // 100

    array <int , 6> numbs = {10, 20, 30, 40, 20, 50};
    //Method 1
    cout << (sizeof(numbs) / sizeof(numbs[0]))<< endl;

    //Method 2
    cout << size(numbs) << endl;

    return 0;
}