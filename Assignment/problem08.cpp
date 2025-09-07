#include <iostream>
#include <array>
#include <string.h>
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
        {"Ahmed", "Sayed", "Mahmoud"},
        {"Sameh", "Mahdy", "Gamal"},
        {"Mohamed", "Adel", "Majed"}};

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

    int numbs[] = {10, 20, 30, 40, 20, 50};
    // Method 1
    cout << (sizeof(numbs) / sizeof(numbs[0])) << endl;

    // Method 2
    cout << size(numbs) << endl;

    // Method 3
    cout << end(numbs) - begin(numbs) << endl;

    array<int, 6> nums1 = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << "First: " << nums1[0] << endl;
    cout << "Last: " << nums1[5] << endl;

    // Method 2
    cout << "First: " << nums1.at(0) << endl;
    cout << "Last: " << nums1.at(5) << endl;

    // Method 3
    cout << "First: " << nums1.front() << endl;
    cout << "Last: " << nums1.back() << endl;

    int index = 2;
    array<int, 3> oldNums = {10, 20, 30};
    array<int, 3> newNums;

    // Write Your Code Here
    for (int i = 0; i < 3; i++)
    {
        newNums[index] = oldNums[i];
        index--;
    }

    // Do Not Edit The Next 3 Lines
    cout << newNums[0] << "\n"; // 30
    cout << newNums[1] << "\n"; // 20
    cout << newNums[2] << "\n"; // 10

    int nums2[]{1, 2, 3, 5};
    int vals1[]{10, 20, 40, 30, 10, 60};

    int i1 = nums2[3];
    int i2 = nums2[0];
    int i3 = nums2[1];
    int i4 = nums2[2];

    cout << vals1[i1] + vals1[i2] + vals1[i3] + vals1[i4] << endl;

    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    cout << fName + mName + lName << endl;
    cout << fName.append(mName.append(lName)) << endl;


    return 0;
}