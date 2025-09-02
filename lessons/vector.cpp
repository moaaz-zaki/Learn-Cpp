//? Vector
//*-----What Is Vector ?
//*------------- Vector Is A Container For Similar Data like Array
//*------------- Vectors Are Dynamic Arrays ==> Array That Can Change In Size
//*------------------------------vectorName.at(index) = value ; 
//*------------------------------vectorName.push_back(value); 
//*------------- Vector Is A Class Template
//*-----Vector Syntax:
//*-------------vector <Type> VariableName

//? Vector versus Array
//!-----Vector
//*-----------It Need A Standered Header To Work
//*-----------Can Be Resized After Insertion Or Deletion Of Element
//*-----------Not Index Based And Elements Accessed By Iterators
//*-----------Vectors Are Slower Than Arrays
//*-----------Vectors Occupy More Memory
//*-----------Vector Available in C++ Only

//!-----Array
//*-----------C-Array Is Language Construct
//*-----------Cannot Be Resized After Its Defined
//*-----------Elements Accesssed By Indexes
//*-----------Arrays Are Faster Than vectors 
//*-----------Arrays Occupy less Memory
//*-----------Vector Available in C++ & C

//! Note 
//*----When You Want To Access index in vector
//*-----------VarialbleName.at(index) ==> true
//*-----------VarialbleName[index]    ==> false == Garbage Value

//? Vector Object
//*-----Access
//*-----------at()
//*-----------Square Brackets [] < Do Not Use

//*-----Add
//*-----------push_back()

//*-----Remove
//*-----------pop_back() ==> Remove From End

//*-----Update
//*-----------at()

//? Vector Function
//*-----size()      ==> Current Nummber Of Elements
//*-----max_size()  ==> Maximum Number Of Elements
//*-----capacity()  ==> Storge Capacity
//*-----Front ()    ==> First Element
//*-----back()      ==> Last Element
//*-----clear()     ==> Clear ALl Elemnts From Vector
//*-----empty()     ==> Check If It Empty Or Not



#include <iostream>
#include <vector>
#include <array>
using namespace std;

int calc (int numsArray[] , int numSize)
{
    int result  = 0;

    for (int i = 0; i < numSize; i++)
        result += numsArray[i];
    
    cout << "Result From Array: ";
    return result;
}

int calc (array <int , 5> numsArray , int numSize)
{
    int result  = 0;

    for (int i = 0; i < numSize; i++)
        result += numsArray[i];
    
    cout << "Result From DynamicArray: ";
    return result ;
}

int calc (vector <int> numsVector)
{
    int result = 0;

    for ( int  i = 0; i < numsVector.size(); i++ )
        result += numsVector.at(i);
    cout << "Result From Vector: "  ;
    return result ;
}

int main ()
{
    vector <int > numsOne(6);
    numsOne = {10, 20, 30, 40, 50, 60}; 
    vector <int > numsTwo  {700, 800, 900, 1000, 500, 600}; 
    vector <int > numsThree (4 , 50); 

    for ( int i = 0; i < numsOne.size(); i++)
        cout << numsOne.at(i) << " " ;
    cout << "\n==================\n";

    for ( int i = 0; i < numsTwo.size(); i++)
        cout << numsTwo.at(i) << " " ;
    cout << "\n========================\n";

    for ( int i = 0; i < numsThree.size(); i++)
        cout << numsThree.at(i) << " " ;
    cout << "\n========================\n";
    
    cout << "After Editing: " << endl;

    numsThree.at(0) = 250 ;
    numsThree.push_back(250);

    for ( int i = 0; i < numsThree.size(); i++)
        cout << numsThree.at(i) << " " ;
    cout << "\n========================\n";

    int numsArray [] = {10, 20, 30, 40, 50};
    int numSize = size(numsArray);
    cout << calc (numsArray , numSize) << endl;

    cout << "===========================" << endl;
    
    array <int , 5> numsOneArray = {10, 20, 30, 40, 50};
    int numOneSize = size(numsOneArray);
    cout << "Before Resized: " << endl;
    cout << calc (numsOneArray , numOneSize) << endl;
    
    // //!Resized
    // numsOneArray [5] = 500;
    // cout << "After Resized: " << endl;
    // cout << calc (numsOneArray , numOneSize) << endl;

    cout << "===========================" << endl;

    vector <int> numsVector {10, 20, 30, 40, 50};
    
    cout << "Before Resized: " << endl;
    cout << calc (numsVector) << endl;
    
    //!Resize

    numsVector.push_back(500);
    cout << "After Resized: " << endl;
    cout << calc (numsVector) << endl;

    return 0;
}

