//? Operators & Operands
//*----Symbols To Operate On Data

//! what is Operand ?
//*-----The Part Of An Instruction Representing The Data Manipulated By the operator

//! Arithmatic Operators
//*-----For Mathematical Operations
//*-------[1] + Addition
//*-------[2] - Subtraction
//*-------[3] * Multiplication
//*-------[4] / Division
//*-------[5] % Modulo ==> Remainder After Division (just integer)

//! Assigment Operators
//*-------[1] = Assign
//*-------[2] +=  Addition
//*-------[3] -=  Subtraction
//*-------[4] *=  Multiplication
//*-------[5] /= Division
//*-------[6] %=  Modulo ==> Remainder After Division (just integer)

//! Increment & Decrement Operators
//*-------"For incrementing And Decrementing values"
//*-------------Pre/Post Increment
//*-------------Pre/Post Decrement 

//! Comparison "Relation" Operators 
//*-------"For Comparing values"
//*-------Result [1==>True] [0==>False]
//*----------[1] == Equal
//*----------[2] !=  Not Equal
//*----------[3] >  Greater Than
//*----------[4] <  Less Than
//*----------[5] >= Greater Than Or Equal 
//*----------[6] <=  Less Than Or Equal

//! Logical Operators 
//*-------"For logic between values"
//*---------- && ==> And
//*---------- || ==> Or
//*---------- !  ==> Not

//! Bitwise Operators
//! Spaceship Operator




# include <iostream>
using namespace std;

int main ()
{
    // int likes = 0;
    // cout << likes-- << endl ;
    // cout << likes << endl ;

    // int views = 0;
    // cout << --views << endl ;
    // cout << views << endl ;

    int age = 20 , score = 800;
    cout << (age >= 18 && score >= 500) << endl;
    cout << (age >= 18 && score >= 1000) << endl;
    
    cout << (age >= 18 || score >= 1000) << endl;
    cout << (age >= 25 || score >= 1000) << endl;
    cout << (age >= 18 || score >= 500) << endl;

    cout << !(10 == 10) << endl;
    cout << !(age >= 18 && score >= 1000) << endl;





    return 0;
}