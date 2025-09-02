//? =========== Array =============
//*------Collection Of Element OF The Same Type
//*------Placed in ConTinuous Memory Location
//*------Referenced By Index Started From 0

//*---Creating Array Syntax
//*---Creating Array Size
//*---Creating Array Without Size
//*---Access Array Elements
//*---Check Element Location
//*---Declare Empty Array
//*---Add Element To Array
//*---Update Array Elements
//*---Get Length Of Array With Sizeof

//*---Two Dimension Array
//*---------Good Practice
//*---------Bad  Practice


//*---Array Class
//*---#include <array>
//*--- Template <Type , Size> identifier = initialization ;
//*---Test Method
//*-----------at(index)   ==> value Of Index
//*-----------front()     ==> first index Of Arrau
//*-----------back()      ==> last index Of Array
//*-----------fill(value) ==> make all index of array Equal  Value
//*-----------size()      ==> length Of Array
//*-----------empty()     ==> Check If array empty





#include <iostream>
#include <array>
using namespace std;

int main ()
{
    int nums[4] = {100 , 200 , 300 , 400};
    cout << sizeof( int ) <<endl;           //! 4 Bytes
    cout << sizeof( nums ) <<endl;          //! 4*4 =16 Bytes

    double dos[4] = {100 , 200 , 300 , 400};
    cout << sizeof( double ) <<endl;           //! 8 Bytes
    cout << sizeof( dos ) <<endl;          //! 8*4 =32 Bytes
    
    int  rank []  {100 , 200 , 300 , 400 , 500 , 600  };
    
    //!Get Length
    cout << sizeof(rank) /sizeof(rank[0]) <<endl;

    cout << "First Element " << rank [0] << endl;
    cout << "Last Element "  << rank [2] << endl;

    cout << "Location: " << &rank[0] << endl;
    cout << "Location: " << &rank[1] << endl;
    cout << "Location: " << &rank[2] << endl;

    int grade [4] ;
    
    grade[0] = 10;
    grade[1] = 20;
    grade[2] = 30;
    grade[3] = 40;
    
    cout << "Element 1: " << grade [0] << endl;
    cout << "Element 2: " << grade [1] << endl;
    cout << "Element 3: " << grade [2] << endl;
    cout << "Element 4: " << grade [3] << endl;
    grade[3] = 500;
    cout << "Element 4: " << grade [3] << endl;

    //! Good Practice
    const int rows = 3 , colums = 3 ;  //! const ==>do not change it and destroy memory
    int points [rows] [colums] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << points[1][2] <<endl;
    cout << points[2][0] <<endl;
    cout << points[2][2] <<endl;

    // //!Bad Practice
    // int points [rows] [colums] = {1, 2, 3,4, 5, 6, 7, 8, 9};
    
    // cout << points[1][2] <<endl;
    // cout << points[2][0] <<endl;
    // cout << points[2][2] <<endl;
    
    //! C Style Array
    //* int results [4] = {1, 2, 3, 4}; 
    
    //! Class Array
    array < int , 4 > results = {1, 2, 3, 4}; 
    cout << "Element 4: " << results [0] << endl;
    cout << "Element 4: " << results [1] << endl;
    cout << "Element 4: " << results [2] << endl;
    cout << "Element 4: " << results [3] << endl;

    //! Test Method
    cout << "============================"<<endl;
    cout << results.empty() << endl;        //!false
    cout << "============================"<<endl;

    cout << "Element 1: " << results [0] << endl;
    cout << "Element 1: " << results.front() << endl;

    cout << "Element 2: " << results [1] << endl;
    cout << "Element 2: " << results.at(1) << endl;

    cout << "Element 3: " << results [2] << endl;
    cout << "Element 3: " << results.at(2) << endl;


    cout << "Element 4: " << results [3] << endl;
    cout << "Element 4: " << results.back() << endl;

    cout << "Count: " << results.size() << endl;

    results.fill(10);
    cout << "Element 1: " << results [0] << endl;
    cout << "Element 2: " << results [1] << endl;
    cout << "Element 3: " << results [2] << endl;
    cout << "Element 4: " << results [3] << endl;

    results.fill('A');
    cout << "Element 1: " << results [0] << endl;
    cout << "Element 2: " << results [1] << endl;
    cout << "Element 3: " << results [2] << endl;
    cout << "Element 4: " << results [3] << endl;

    results.fill(true);
    cout << "Element 1: " << results [0] << endl;
    cout << "Element 2: " << results [1] << endl;
    cout << "Element 3: " << results [2] << endl;
    cout << "Element 4: " << results [3] << endl;

    results.fill(false);
    cout << "Element 1: " << results [0] << endl;
    cout << "Element 2: " << results [1] << endl;
    cout << "Element 3: " << results [2] << endl;
    cout << "Element 4: " << results [3] << endl;


    array <int , 5> numbers ;

    cout << "============================"<<endl;
    cout << numbers.empty() << endl;        //!false
    cout << "============================"<<endl;


    return 0;
}