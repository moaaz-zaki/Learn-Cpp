//? ================ String =====================
//*---String Type
//*-------- C Style String Using
//*-------- String Class Using Standerd Library

//*---Test Type Size
//*---Null Terminated String (\0 ==> Null)

//!---Remember
//*--------String IS Array Of CHaracters

//! Method 
//*---Concatenating String
//*--------[1] Normal Way
//*--------[2] stract ==> Include string.h
//*--------[3] with +
//*--------[4]append




#include <iostream>
#include <cstring> //? string.h  
using namespace std;

int main ()
{
    cout << "Iam dragon\n";
    cout << "Iam\0 dragon";
    cout << "\n";

    char name_a [] = "Moaaz Zaki";
    cout << name_a <<endl;
    cout << sizeof(name_a) <<endl;
    cout << name_a[0] <<endl;
    cout << name_a[9] <<endl;
    
    //! Null Terminated String
    cout << name_a[10] <<endl;
    cout << (int) name_a[10] <<endl;

    char name_b [] = {'M', 'o', 'a', 'a', 'z', ' ', 'Z', 'a', 'k', 'i', '\0'};
    cout << name_b <<endl;
    cout << sizeof(name_b) <<endl;
    cout << name_b[0] <<endl;
    cout << name_b[9] <<endl;

    string name_c  = "Moaaz Zaki";
    cout << name_c <<endl;
    cout << sizeof(name_c) <<endl;
    cout << name_c[0] <<endl;
    cout << name_c[9] <<endl;

    cout << "================================================" << endl;
    char fname [] ="Moaaz ";
    char lname [] = "Zaki";

    cout << fname << lname <<endl;
    cout << strcat (fname , lname ) << endl;

    string fristname  ="Moaaz ";
    string lastname = "Zaki";


    cout << fristname + lastname <<endl;
    cout << fristname.append(lastname) << endl;


    return 0;
}