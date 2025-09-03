#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please Type A Number Between 0 And 150\n";
    cin >> num;

    // If Number Smaller Than 10 "Example 5" Output Will Be => 005
    // If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
    // If Number Larger Than 100 "Example 115" Output Will Be => 115F
    if (num < 10)
    {
        cout << "00" << num << endl;
    }
    else if (num > 10 && num < 100)
    {
        cout << "0" << num << endl;
    }
    else if (num > 100 && num < 150)
    {
        cout << num << endl;
    }
    else
    {
        cout << "Invaild Number!" << endl;
    }

    int age = 18;
    int points = 800;
    float rate = 8.5f;

    // Your Condition Here
    if (age >= 18 && points > 500 && rate > 5)
    {
        // Output Needed If All Conditions Is True
        cout << "Yes Age > 18 & Points > 500 & Rate > 5" << endl;
    }
    else
    {
        // Output Needed If All Conditions Is False
        cout << "Not Accept !!" << endl;
    }
    // Test Case 1
    age = 18;
    points = 450;

    if (age > 18)
    {
        cout << "Yes Age Is Ok";
    }
    else
    {
        cout << "No Age Is Not Ok";
    }

    if (points > 500)
    {
        cout << "\tYes Points Is Ok" << endl;
    }
    else
    {
        cout << "\tNo Points Is Not Ok" << endl;
    }

    // Test Case 2
    age = 20;
    points = 450;

    if (age > 18)
    {
        cout << "Yes Age Is Ok";
    }
    else
    {
        cout << "No Age Is Not Ok";
    }

    if (points > 500)
    {
        cout << "\tYes Points Is Ok" << endl;
    }
    else
    {
        cout << "\tNo Points Is Not Ok" << endl;
    }

    // Test Case 3
    age = 20;
    points = 650;

    if (age > 18)
    {
        cout << "Yes Age Is Ok";
    }
    else
    {
        cout << "No Age Is Not Ok";
    }

    if (points > 500)
    {
        cout << "\tYes Points Is Ok" << endl;
    }
    else
    {
        cout << "\tNo Points Is Not Ok" << endl;
    }

    return 0;
}