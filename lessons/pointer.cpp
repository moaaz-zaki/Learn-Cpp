//?========== pointer ==========
//!What Are Pointers ?
//*----- A Variable That Store Memory Address Of Other Variable

//!Why We Need Pointer ?
//*-----To Iterate On Elements In In Data Structures Like Array
//*-----Pass Function To Other Function
//*-----Dynamic Memory Allocation

//!Benefits Of Using Pointers
//*-----Reduce The Code and Increace Preformance

//!Note
//*----- There Is Raw Pointer And Smart Pointer

//!Syntax 
//*-----Declear A Pointer
//*-----Print Variable Memory Address ==> Reference Operator || Address Of [&]
//*-----print Value That Memory Address Point To ==> Derference Operator [*]
//*-----Change Variable Value With Pointer


#include <iostream>
using namespace std;

int main () {

    int num = 100;
    int* ptr = &num; 

    cout << "Value Is  : " << num << endl;
    cout << "Memory Is : " << &num << "\n";
    cout << "Memory From Pointer Is : " << ptr << "\n";
    cout << "Value From Pointer Is  : " << *ptr  << endl;
    
    *ptr = 200;
   
    cout << "=================================\n";
    cout << "Value Is  : " << num << endl;
    cout << "Memory Is : " << &num << "\n";
    cout << "Memory From Pointer Is : " << ptr << "\n";
    cout << "Value From Pointer Is  : " << *ptr  << endl;
    

    int numbers [] {10, 20, 30, 40, 50};
    int* ptr_A = numbers ;                    //* int* ptr = &numbers[0];

    cout << "First Element: \n";
    cout << "Value With Index: " << numbers[0] << endl; 
    cout << "Value With pointer: " << *ptr_A << endl; 
    cout << "Memory With Index: " << &numbers[0] << endl; 
    cout << "Memory With pointer: " << ptr_A << endl;
    cout << "=================================\n";

    cout << "Secand Element: \n";
    cout << "Value With Index: " << numbers[1] << endl; 
    cout << "Value With pointer: " << *(ptr_A + 1 ) << endl; 
    cout << "Memory With Index: " << &numbers[1] << endl; 
    cout << "Memory With pointer: " << ptr_A + 1 << endl; 
    cout << "=================================\n";


    cout << "Third Element: \n";
    cout << "Value With Index: " << numbers[2] << endl; 
    cout << "Value With pointer: " << *(ptr_A + 2 ) << endl; 
    cout << "Memory With Index: " << &numbers[2] << endl; 
    cout << "Memory With pointer: " << ptr_A + 2 << endl; 
    cout << "=================================\n";


    cout << "Fourth Element: \n";
    cout << "Value With Index: " << numbers[3] << endl; 
    cout << "Value With pointer: " << *(ptr_A + 3 ) << endl; 
    cout << "Memory With Index: " << &numbers[3] << endl; 
    cout << "Memory With pointer: " << ptr_A + 3 << endl; 
    cout << "=================================\n";

    for(int i = 0; i < size(numbers) ; i++)
        cout << "Value [ " << i+1 << " ] Is : " << *(ptr_A + i ) << " Has Memory Address IS : " << (ptr_A + i ) << endl; 
    
    cout << "=================================\n";
    cout << "=================================\n";

    for(int i = 0; i < size(numbers) ; i++)
    {
        cout << * ptr_A <<endl;
        ptr_A++;
    }
    cout << "=================================\n";
    cout << "=================================\n";

     cout << * ptr_A <<endl;
     ptr_A--;
     cout << * ptr_A <<endl;
    cout << "=================================\n";




    int *ptr1;              //!Wide Pointer
    int *ptr2 = NULL;
    int *ptr3 = nullptr;

    cout << ptr1 << endl;   //!Garbage Value
    cout << ptr2 << endl;
    cout << ptr3 << endl;

    int a = 100;
    void* ptr4 = &a;

    cout << ptr4 << endl;
    // cout << *ptr4 << endl;   //* Problem

    //! costing
    //* C-Style
    cout << *(int *) ptr4 << endl;

    //*Modern
    cout << *static_cast <int *> (ptr4) << endl;



    return 0;
}


