/*//? ==============Variable==================
//* Data container with unique Name (indentefier)
//* Declear with value + change later

//! Syntax
//* [Data_Type][Variable_Name]=[Value]

//?=== variables Naming Rules & Best Practices ===
//!--Naming Rules
//*---------Must Be Unique
//*---------Case Sensitive 
//*---------Cannont Start with Number
//*---------Nums or Letters Or Underscore
//*---------No White Space Or Special Characters
//*---------Reserved Keywords "Class,Public"


//!--Best Practice
//*---------Writing Style
              //* 1]Camel Case ==> moaazZakiZewied
              //* 2]Pascal Case ==> MoaazZakiZewied
              //* 3]Snake Case ==> moaaz_zaki_zewied
              //* 4]kebab Case ==> moaaz-zaki-zewied
              //* 5]Screaming Snake Case ==> MOAAZ_ZAKI_ZEWIED       

//*---------Related Names

//! Variables Advansed Knowledge
//*-------Declare Variable Without Value + Change Later
//*-------Declare Variable Without Value ==> cout (Garbag value)
//*-------Declare Multiple Variables Without Value + Change Later
//*-------Declare multiple Variables With Same Value

//! Variables Scope
//*-------Global Variable العالمي
//*-------Local Variable المحلي 

//! Constant Variables 
//*-------Read only Value   ==> (const int hour_Day = 8;)
//*-------Cannot declare without value ==> (Const int num;)

//! Preprocessing Declartion
//*-------#define [Constant_Variable_Name][Constant_Variable_Value] ==> Not preferred
*/


# include <iostream>


int a = 50; //! Global Vqariable

int secand ()
{
    int b =100 ; //! Local Vaiable

    std::cout << "a is : " <<a << " Coming from secand function\n " ;
    std::cout << "b is: " << b << " Coming from secand function\n " ;
    return 0;
}

int main ()
{
    
    std::cout << "a is : " <<a << " Coming from Main function\n " ;
    //! std::cout << "b is: " << b << "Coming from secand function\n " ; ==> (Undifind)
    secand();

    int price =200;
    std::cout << "\nPrice is : " /*concatnation ==> */ << price ;
    std::cout << "\nThe price after adding 15 is: " << price + 15;
    std::cout << "\nThe price after adding 50 is: " << price + 50;

    price =150;
    std::cout << "\nThe new price is:  " << price;
    std::cout << "\nThe new price after adding 15 is: " << price + 15;
    std::cout << "\nThe new price after adding 50 is: " << price + 50;

    
    return 0;
}