#include <iostream>
using namespace std;

// void swap(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// cout << "Call By Value: " << endl;
// }

void swap(int &x, int &y)
{

    int temp = x;
    x = y;
    y = temp;
cout << "Call By Referance: " << endl;

}

void swap(int *ptr1 , int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
cout << "Call By Pointer: " << endl;

}

int main()
{
    int x = 50;
    int *ptr = &x;
    cout << "Address " << ptr << " Contain Value: " << *ptr << endl;
    cout << "Address " << &x << " Contain Value: " << x << endl;
    *ptr += 5;
    cout << "Address " << ptr << " Contain Value: " << *ptr << endl;

    char msg[] = "Hello";
    char *msg_ptr = msg;

    for (int i = 0; i < sizeof(msg) - 1; i++)
    {
        cout << (msg + i);
        cout << "\t " << *(msg_ptr + i) << endl;
    }

    int num[5] = {20, 26, 30, 16, 10};
    int *num_ptr = num;
    // for (int i = 0; i < 5; i++ )
    // {
    //     cout << (num + i);
    //     cout << "\t" << *(num + i) << endl;
    // }
    //  for (int i = 0; i < 5; i++ )
    // {
    //     cout << &num[i];
    //     cout << "\t" << num[i] << endl;
    // }
    for (int i = 0; i < 5; i++)
    {
        cout << (num_ptr + i);
        cout << "\t" << *(num_ptr + i) << endl;
    }
    cout << "\n---------------------------------------------------------\n";
    int z = 5 , y = 9;
    int *ptr_z = &z, *ptr_y = &y;
    swap(z, y);
    cout << "Z: " << z << "\tY: " << y << endl;
    cout << "\n---------------------------------------------------------\n";
    swap(ptr_z, ptr_y);
    cout << "Z: " << z << "\tY: " << y << endl;
    cout << "\n---------------------------------------------------------\n";
    swap(&z, &y);
    cout << "Z: " << z << "\tY: " << y << endl;




    return 0;
}