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

    int result = 0;
    int num1, num2, num3, num4;
    cout << "Please Type 5 Numbers In A Row\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 < 20 && num1 % 2 == 0)
    {
        result += num1;
    }
    if (num2 < 20 && num2 % 2 == 0)
    {
        result += num2;
    }
    if (num3 < 20 && num3 % 2 == 0)
    {
        result += num3;
    }
    if (num4 < 20 && num4 % 2 == 0)
    {
        result += num4;
    }

    cout << "================\n#===== " << result << " =====#\n" << "================\n";

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

    num1 = 10;
    num2 = 6;
    num3 = 10;
    num4 = 35;

    // Do Not Edit Any Condition

    // Condition 1
    if (num1 > num2)
        cout << "Condition 1 Is True\n";
    else
        cout << "Condition 1 Is False\n";

    // Condition 2
    if (num1 > num2 && num1 < num4)
        cout << "Condition 2 Is True\n";
    else
        cout << "Condition 2 Is False\n";

    // Condition 3
    if (num1 > num2 && num1 == num3)
        cout << "Condition 3 Is True\n";
    else
        cout << "Condition 3 Is False\n";

    // Condition 4
    if (num1 + num2 < num4)
        cout << "Condition 4 Is True\n";
    else
        cout << "Condition 4 Is False\n";

    // Condition 5
    if (num1 + num3 < num4)
        cout << "Condition 5 Is True\n";
    else
        cout << "Condition 5 Is False\n";

    // Condition 6
    if (num1 + num2 + num3 < num4)
        cout << "Condition 6 Is True\n";
    else
        cout << "Condition 6 Is False\n";

    // Condition 7
    if (num4 - (num1 + num3) + num2 == 21)
        cout << "Condition 7 Is True\n";
    else
        cout << "Condition 7 Is False\n";

    int by = 82;
    int s = 500;

    string msg = by > 80 ? (s < 600 ? "Ok\n" : "High\n") : "Not Ok\n";
    cout << msg;

    age = 40;
    points = 30;

    if (sizeof(age) == 4)
    {
        cout << "Age Data Is 4 Bytes\n";
    }

    if (age > 18)
    {
        cout << "Age Is Ok\n";
        if (points > 50)
        {
            cout << "Points Is Ok\n";
        }
    }

    // // Output Needed
    // "Age Data Is 4 Bytes"
    // "Age Is Ok"
    // "Points Is Ok"
    return 0;
}