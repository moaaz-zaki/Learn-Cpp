//? ==================Iterator===============
//! Contaniners
//*----------Array
//*----------Vector
//*----------list

//! What Is Iterators
//*----------Iterators Used To Point To Memory Address Of The Containers

//! Why We Use Iterators
//*-------[1] Simplify The Code ==> No Need To See Full Iteration On Containers
//*-------[2] Support For Many Algorithms Like Sorting And Finding
//*-------[3] Allow The Dealing With One Element Without The Need To Load The Full List
//*-------[4] Work The Same Way With All Containers
//*-------[5] It Reduce The Complexity And Execution Time Of The Application

//! Syntax
//*-------container <dataType> iterator IteratorName = containerName.begin() + i ;
//*-------auto iteratorName =  containerName.begin() + i ;


//! Initialize
//*-------[1] With Vector Syntax
//*-------[2] With Auto KeyWord

//! Print
//*-------[*] Dereference ==> Dont Print The Iterator , print What Its Point To 
//*-----------------*(containerName.begin() + i)
//*----------------- containerName.begin() [i]
//*----------------- Loop With Iterator 
//*----------------- Ranged Loop with For


//! Travesing
//*-------begin()
//*-------end()
//*-------advance()



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    // int numbers [7] = {10, 20, 30, 40, 50, 60, 70};
    int value =20;
    int counter = 0;
    vector <int> numbers = {10, 500, 20, -20, 20 , 100, 20};
    vector <int> nums = {10, 20, 30, 40, 50};
    vector <int> :: iterator itNums = nums.begin();
    auto it = nums.begin() + 1;

    cout << "First Elment Is: " << *itNums << endl;
    cout << "First Elment Is: " << *nums.begin() << endl;
    cout << "last Elment Is: " << *(nums.end() -1 )  << endl;
    cout << "Second Elment Is: " << *it << endl;
    
    //!Loop With Iterator
    for (int i = 0; i < size(nums); i++)
    cout  << "[ "<< i <<  " ] Elment Is: " << nums.begin() [i] << endl;
    for (int i = 0; i < size(nums); i++)
    cout  << "[ "<< i <<  " ] Elment Is: " << nums.begin() [i] << endl;
    for( itNums = nums.begin(); itNums != nums.end(); ++itNums)
        cout << *itNums << endl ;

    //!Ranged Loop With  loop
    for(int value : nums)
        cout << value << endl;
    
    //!Ranged Loop With  loop (Array)
    // for(int value : numbers)
    //     cout << value << endl;

    //!count 
    counter = count(numbers.begin() , numbers.end() , value);
    cout << value << " Found " << counter << " Times \n";
    cout << "===================" << endl;

    //!reverse
    reverse(numbers.begin() , numbers.end());
    for(int &val : numbers)                     //![&] ==> To access The element
        cout << val << endl;
    cout << "===================" << endl;
    
    //!Sort
    sort(numbers.begin() , numbers.end());
    for(int &val : numbers)                     //![&] ==> To access The element
        cout << val << endl;
    cout << "===================" << endl;

    // advance(itNums , 3);
    // cout << "First Elment Is: " << *itNums << endl;
    // advance(itNums , -2);
    // cout << "First Elment Is: " << *itNums << endl;


    return 0;    
}