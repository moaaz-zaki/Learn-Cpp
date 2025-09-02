//?========== Function ==========
//*---DRY ==> Dont Not Repeat Your Self
//*---Two Type:
//*------------{Bulit In} Or {User Defined}
//*---Syntax
//*---------- returnDataType functionName (pram 1, pram 2, pram 3 ) ==> معامل التجربة
//*----------{
//*----------      code Of Block
//*----------}
//! prameter ==> معامل التجربة 
//! Argument ==> قيمة معامل التجربة عند الاستدعاء
//! Parameter defult value  ==> القيمة الافتراضية لمعامل التجربة
    //*لو هتعمل defult to just one prameter لازم يكون الثاني 

//! return  == break

//* ---Forword Decleartion ==> Funcation Prototype 

//!Built In Function
//*---Math function(math.h , cmath)
//*----------pow(double x , double y)
//*----------fmod(double x , double y) ==> [%] Just For Integer
//*----------ceil(double x)
//*----------floor(double x)
//*----------round(double x)
//*----------trunc(double x)

//*---function(cctype)
//*----------tolower(int x)
//*----------toupper(int x)
//*----------islower(int x)
//*----------isupper(int x)
//*----------isspace(int x) ==> {' ', '\n' , ' \t'}

//*---function(algorithm)
//*----------max
//*----------min
//*----------count

//*---Overload function
//*--------Number And/Or Type Of Prameter Is Different

//*---function Recursion




#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int  calcReturn ( int n1 , int n2 );
void calcNoReturn (int n1 , int n2);
int factor ( int num);

void sayHello (string msg = "Welcome", string name = "Zewied", int age = 90)
{
    cout << msg << " " << name << "." << endl;
    cout << name << "\'s Your Age Is: "<< age << endl;
}

void print (int a , int b)
{
    cout << "Number One Is: " << a << endl;
    cout << "Number Two Is: " << b << endl;
}

void print (int a , int b , int c)
{
    cout << "Number One Is: "  << a << endl;
    cout << "Number Two Is: "  << b << endl;
    cout << "Number Three Is: "<< c << endl;
}
void print (string a , string b)
{
    cout << "Text One Is: " << a << endl;
    cout << "Text Two Is: " << b << endl;
}


int main ()
{
    sayHello("Hello","Moaaz", 20 );
    sayHello("HI","Zaki", 60 );
    sayHello ();
    
    calcNoReturn (10 , 20);
    //int result = calcNoReturn (10 , 20);  //! Problem
    
    int result = calcReturn ( 10 , 20 );
    cout << result * 5  << endl;


    cout << pow(2 , 4) << endl;
    cout << 2 * 2 * 2 * 2 << endl;
    cout << 11 % 2 << endl;
   // cout << 11.5 % 2 << endl; //*Error
    cout << fmod( 11.5 , 2) << endl;
    cout << ceil( 3.1 ) << endl;
    cout << floor ( 3.9) << endl;
    cout << round ( 3.5) << endl;
    cout << round ( 3.49) << endl;
    cout << round ( 3.4) << endl;
    cout << trunc ( 3.9) << endl;
    cout << trunc ( 3.1) << endl;

    cout << "============" << endl;
    cout << max( 10 , 20 ) << endl;
    cout << max( {10 , 20 , 30 , 40 , 50} ) << endl;
    cout << max( 'a' , 'c' ) << endl;
    cout << max( 'a' , 'C' ) << endl;
    cout << "============" << endl;
    cout << min( 10 , 20 ) << endl;
    cout << min( {10 , 20 , 30 , 40 , -50} ) << endl;
    cout << min( 'a' , 'c' ) << endl;
    cout << min( 'a' , 'C' ) << endl;
    cout << "============" << endl;

    print( 20 , 30);
    print( 100 , 400 , 500);
    print( "Moaaz" , "Zaki");


    cout << factor(5) ; 




    
    return 0;
}

int factor ( int num)
{
    if(num == 1)
        return num;
    cout << num << endl;
    cout << "=========="<< endl;
    return num * factor(num -1);
}



void calcNoReturn (int n1 , int n2)
{
    cout << "From Void ";
    cout << n1 + n2 << endl;
    return;   //! break
    cout << "will Not Show " << endl;   //! not show 

}

int  calcReturn ( int n1 , int n2 )
{
    cout << "Operation Is Done ";
    return n1 + n2;
}

