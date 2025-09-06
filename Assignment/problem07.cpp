#include <iostream>
using namespace std;

int main()
{
    int num[]{100, 300, 600, 900};
    string awards[]{"iphone", "ipad", "PC", "Car"};

    int length1 = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < length1; i++)
    {
        cout << "\"Number " << num[i] << " Award Is: " << awards[i] << "\"" << endl;
    }

    int check = 25;
    int nums[] = {40, 20, 30, 70, 100};
    int length = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < 2; i++)
    {
        if (nums[i] > check)
        {
            cout << "{" << nums[i] << "} + { " << nums[length - 1] << "} = " << nums[i] + nums[length - 1] << endl;
            break;
        }
    }

    int filling = 10;
    int vals[]{100, 200, 300, 400};

    for (int i = 0; i < size(vals); i++){
        vals[i] = filling;
        cout << vals[i] << "\t";
    }

        return 0;
}