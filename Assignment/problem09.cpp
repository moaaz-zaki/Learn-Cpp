#include <iostream>
using namespace std;

int main()
{
    int in = 0;
    int index = 2;

    for (int i = 0; i <= 10; i++)
    {
        cout << i << "\t";

        if (i % 4 == 3)
        {
            cout << "\n";
        }
    }

    cout << "\n============================" << endl;

    while (in <= 10)
    {

        cout << in << "\t";

        if (in % 4 == 3)
        {
            cout << "\n";
        }
        in++;
    }

    cout << "\n============================" << endl;
    in = 0;

    do
    {

        cout << in << "\t";

        if (in % 4 == 3)
        {
            cout << "\n";
        }
        in++;
    } while (in <= 10);
    cout << "\n============================" << endl;

    for (;;) // <= Do Not Edit This Line
    {
        cout << index << "\n"; // From 2 To 10
        index++;
        if (index >= 11)
        {
            break;
        }
    }
    cout << "\n============================" << endl;

    // int num1, num2;
    // cout << "Enter Two Number: ";
    // cin >> num1 >> num2;

    // if (num2 > num1)
    // {
    //     for (int i = num1+1 ; i < num2; i++)
    //     {
    //         if(i%2 == 1){
    //             cout << i << "\t";
    //         }
    //     }
    // }
    // else
    // {
    //     for (int i = num2+1 ; i < num1; i++)
    //     {
    //         if(i%2 == 1){
    //             cout << i << "\t";
    //         }
    //     }
    // }

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    cout << "\n============================" << endl;
    in = 0;
    while (in < 20)
    {
        if (in % 2 == 0)
        {
            cout << in << endl;
        }

        in++;
    }
    cout << "\n============================" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i * 3 << endl;
    }
    cout << "\n============================" << endl;

    cout << "\n============================" << endl;
    in = 0;

    while (in < 10)
    {
        cout << in * 3 << endl;
        in++;
    }
    cout << "\n============================" << endl;

    int res = 10;
    for (int i = 0; i < 4; i++)
    {
        cout << res << endl;
        res *= res;
    }
    cout << "\n============================" << endl;
    in = 0;
    res = 10;
    while (in < 4)
    {
        cout << res << endl;
        res *= res;
        in++;
    }
    cout << "\n============================" << endl;

    for (int i = 2; i < 130; i = i * 2)
    {
        cout << i << endl;
    }
    cout << "\n============================" << endl;
    in = 2;

    while (in < 130)
    {
        cout << in << endl;
        in = in * 2;
    }
    cout << "\n============================" << endl;

    for (int i = 2; i < 130; i = (i * 2) + 2)
    {
        cout << i << endl;
    }
    cout << "\n============================" << endl;

    cout << "\n============================" << endl;
    in = 2;

    while (in < 130)
    {
        cout << in << endl;
        in = (in * 2) + 2;
    }
    cout << "\n============================" << endl;

    string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

    for (int i = 0; i < size(friends); i++)
    {
        if (i == 1 || i == 2)
        {

            cout << friends[i] << " ";
        }
    }

    cout << "\n============================" << endl;
    in = 0;

    while (in < size(friends))
    {
        if (in == 1 || in == 2)
        {
            cout << friends[in] << " ";
        }
        in++;
    }
    cout << "\n============================" << endl;

    string friends2[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

    for (int i = 0; i < size(friends2); i++)
    {
        if (friends2[i].front() == 'A')
        {
            cout << friends2[i] << " " << endl;
        }
    }

    string friends3[] = {"Ahmed", "Osama", "Ameer"};

    for (int i = 0; i < size(friends3); i++)
    {
        cout << "=========\n= " << friends3[i] << " =\n==================\n== ";
        for (int j = 0; j < size(friends3[i]); j++)
        {
            cout << friends3[i].at(j);

            if (j != size(friends3[i]) - 1)
            {
                cout << ", ";
            }
        }
        cout << " =\n==================\n";
    }

    int nums4[] = {10, 20, 14, 28, 40, 80, 15, 30};
    for (int i = 0; i < size(nums4); i++)
    {
        if (nums4[i] * 2 == nums4[i + 1])
        {
            cout << nums4[i] << endl;
        }
    }
    cout << "============================" << endl;

    for (int i = 30; i > 0; i -= 3)
    {
        cout << i << endl;
    }
    cout << "============================" << endl;

    for (int i = 30; i > 0; i -= 3)
    {
        if (i % 2 == 1)
        {

            cout << i << endl;
        }
    }
    cout << "============================" << endl;

    int num5 = 1;
    while (num5 < 520)
    {
        cout << num5 << "\n";
        num5 = (2 * num5) + 2;
    }
    cout << "============================" << endl;

    int help_num = 4;
    int nums6[] = {2, 4, 5, 6, 10};

    for (int i = 0; i < size(nums6); i++)
    {
        cout << nums6[i] + nums6[help_num] << endl;
        help_num--;
    }

    cout << "============================" << endl;

    index = 10;
    int jump = 2;

    for (;;)
    {
        if (index == jump)
        {
            break;
        }
        cout << index << endl;
        index -= jump;
    }

    cout << "============================" << endl;

    for (int i = 0; i <= 100; i++)
    {
        if (i < 10)
        {
            cout << "00" << i << "\t";
        }
        else if (i < 100)
        {
            cout << "0" << i << "\t";
        }
        else
        {
            cout << i << "\t";
        }

        if (i % 5 == 5)
        {
            cout << "\n";
        }
    }

    cout << "============================" << endl;

    for (int i = 0; i <= 1000; i += 100) // Do Not Edit This Line
    {
        // Edit What You Need And Add Your Code
        if (i != 0 && i != 1000)
        {

            cout << i << "\n";
        }
    }
    cout << "============================" << endl;

    for (int i = 100; i <= 1100; i += 100)
    {
        cout << i << endl;

        if (i > 100 && i <= 1000)
        {
            cout << i << endl;
        }
    }
    cout << "============================" << endl;


    string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};

    for (int i = 0; i < size(names); i++)
    {
        if (size(names[i]) == 5)
        {
            cout << names[i] << endl;
        }
    }
    cout << "============================" << endl;

    return 0;
}