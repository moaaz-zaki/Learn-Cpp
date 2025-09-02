//? ================Data Type==============
//*------Integer ==> 5000 ,10,-100
//*------String  ==> "Moaaz Zaki","5A"
//*------Boolean ==> true ,false
//*------float   ==> 18.5 , 1900.5
//*------Array   ==> ["Moaaz","Zaki","Mohamed","Zaki","Zewied"]

//! Why We choose Data?  
//*------Size
//*------Operation

//! What is operand ?
//* ----The Part Of An Instruction Representing The Data Manipulated تتلتعب

//! Ram
//*------[R] random [A] access [M]memory
//*------Computer Memory Has Location

//! Data Size
//*------Bit [Bi] Binary [t]Digit ==> smallest unit in storage store only 0 or 1
//*------Byte ==> A group of 8 ==> Store Single Character 
//*------Kilo Byte ==> 1024 Byte
//*------Mega Byte ==> 1024 Kilobytes
//*------Giga Byte ==> 1024 Megabytes
//*------Tera Byte ==> 1024 Gigabytes

//! Data Type With Size
//*------int ==> 2 Or 4 Bytes 
//*------float ==> 4 Bytes
//*------double ==> 8 Bytes
//*------char ==> 1 Bytes
//*------boolen ==> 1 Bytes

//! The Story Behind Creating A Variables
//*------[1] Declear A Variables
//*------[2] Tell Computer That We Need To Reserve X Bytes of Memory Depend on Data Type
//*------[3] Restrivt Type Of Data To The Type we Choosed

//* See Memory address [&]

//? Primitive (Basic) Data Types
//! int ==> Integer
//*-------Store From  -2147483648 To 2147483647
//*-------Check Limites Header File <limits.h>
//*-------Test Float Value In Integer Variables ==> Trancate

//! float ==> Floating Point Number
//*-------Test integer value in float Variable
//*-------We make Sure Its Float Not Double By Adding Suffix "f" Or "F"
//*-------7 Deciaml precision


//! Double ==> Double The Float
//*-------15 Decimal precision

//! char ==> character
//*-------Added inside Single Qoutes ==> Test With Auto
//*-------ASCII ==> American Standard Code For Information Interchange
//*-------ASCII Value
//*-------A Way Of Representing Characters As Numbers

//! bool ==> Boolean
//*-------Only Two Possible Value [true , false]
//*-------Value Is Case Sensitive
//*-------When We Use Boolean Values
//*----------------Anything Has On/Off , Yes/No , True/False
//*-------Test Boolean in Math [ false ==> 0 , true ==> 1 ]
//*-------Test Data [100 , 0,-100.""] ==> [1,0,1,1]

//! void ==> Valueless
//*-------Without value

//! Modifiers 
//*-------Modifiy The Length of Data 

//*-------Signed [int , char]
//*-------------Store Positive , Negative Integers And 0
//*-------------int is signed By Default

//*-------Unsigned [int , char]
//*--------------Store Positive Only

//*-------Short [int]
//*---------------Can be short Instead of short int

//*-------long [int , double]
//*----------------Store Maximum Value
//*----------------Can Be long Instead Of Long int

//*-------Type Alias 
//*------------using indentifier = data_Type ;
//*------------typedef data_type  indentifier ;

//? Type Conversion
//*--------Convert Data of One Type To Another

//*--------[1] Implicit Conversion
//*----------------Conversion Is Done Automatically By The Compiler

//*--------[2] Explicit Conversion (Type Casting)
//*----------------Conversion Is Done By The Programmer

//! Data Loss
//*--------when Larger Type Is Converted To Smaller Type






#include <iostream>
# include <limits.h>
using namespace std;


int main ()
{
    int num =65;
   string name = "Moaaz Zaki ";
   bool status = true;
   int Last_Number = 10.4 ;
   //! cout << num /name ==> operand
   //!  auto num_1 ;  ===>  initialization

   cout << sizeof (num) << ("\n");
   cout << sizeof (name) << ("\n");
   cout << sizeof (status) << ("\n");
   cout << "Trancate: " << Last_Number;

   cout  << ("\n=================================================\n\n");

    cout << INT_MIN << ("\n");
    cout << INT_MAX << ("\n");

    cout  << ("=================================================\n\n");
    
    cout  << sizeof( int ) << endl;
    cout  << sizeof( char ) << endl;
    cout  << sizeof( double ) << endl;
    cout  << sizeof( float ) << endl;
    cout  << sizeof( bool ) << endl; 

     cout  << ("=================================================\n\n");

     double dob = 10;
     dob = 20.5 ;

     cout << sizeof( dob ) << endl;
     cout << dob <<  endl;

    auto f1 = 10.5 +9.5 ;
    cout << sizeof( f1 ) << endl;
    cout << f1<<  endl;
    
    auto f2 = 10.5f +9.5F ;
    cout << sizeof( f2 ) << endl;
    cout << f2 <<  endl;

    cout  << ("=================================================\n\n");

    char a = 'A';
    auto b = 'B';
    auto c = "C";

    cout << sizeof (a) << endl ;
    cout << sizeof (b) << endl ; //1
    cout << sizeof (c) << endl ;//8

    //! Convert ASCII To Character
    
    cout << int (a) << endl ; //65
    cout << int ('A') << endl ; //65
     //* cout << int ("Z") << endl ; ==> Error 


    //! Convert Character To ASCII

    cout << char ( 65 ) << endl ;
    cout << char ( num ) << endl ;

    cout  << ("=================================================\n\n");

    bool is_open = false;
    cout << is_open +10 << endl;            //10
    cout << true + true + false << endl;    //2
    bool test_One = 10 > 5 ;  
    bool test_Two= 10 > 100 ;  
    cout << test_One << endl ;
    cout << test_Two << endl ;
    int test_Three =1;
    cout << sizeof(test_One) << endl;
    cout << sizeof(test_Three) << endl;

    bool num_One = 100;
    bool num_Two = -100;
    bool num_Three = 0;
    bool num_Four ;

    cout << num_One << endl;
    cout << num_Two << endl;
    cout << num_Three << endl;
    cout << num_Four << endl;

    cout  << ("=================================================\n\n");

    int age =300;
    cout << sizeof ( age ) << "\n" ;

    short int new_age =300;
    cout << sizeof ( new_age ) << "\n" ;
    
    short last_age =300;
    cout << sizeof ( last_age ) << "\n" ;

    cout << sizeof ( short int ) << "\n" ;
    cout << sizeof ( short ) << "\n" ;
    cout << sizeof ( long int ) << "\n" ;
    cout << sizeof ( long ) << "\n" ;
    cout << sizeof ( long long int ) << "\n" ;
    cout << sizeof ( long long  ) << "\n" ;

    int n =100;
    cout << n << endl;

    signed int n_1 =100;
    cout << n_1<< endl;

    signed int n_2 =-100;
    cout << n_2 << endl;

    signed int n_3 =0;
    cout << n_3 << endl;

    unsigned int n_4 =100;
    cout << n_4<< endl;

    unsigned int n_6 =0;
    cout << n_6 << endl;
    
    unsigned int n_5 =-100; //! Problem
    cout << n_5 << endl;
    
    
    //! Type Alias
    //* using bignum = long long int;
    typedef long long int bignum ;

    long long int my_Number =100100100;
    cout << my_Number << "\n" ;

    bignum my_Number1 =100100100;
    cout << my_Number1 << "\n" ;

    cout  << ("=================================================\n\n");
    
    //! implicit
    char ch = 'C';
    int ch_1 =20;
    cout <<int( ch ) << endl ;
    cout << ch +ch_1 << endl ;

    int ch_2 =10;
    double ch_3 =20.5;
    cout << ch_2 +ch_3 << endl ;
    cout << sizeof (ch_2 +ch_3) << endl ;

    //! Explicit
    cout << ch_2 + (int) ch_3 << endl ;
    cout << sizeof (ch_2 +(int)ch_3) << endl ;

    cout << ch_2 + int (ch_3) << endl ;
    cout << sizeof (ch_2 +int (ch_3)) << endl ;

     return 0;
}