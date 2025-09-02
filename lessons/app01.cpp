//*==================================================
//?========= Calculate Your Age Application =========
//*==================================================

#include <iostream>

int main ()
{
    std::cout << "==================================================\n" ;
    std::cout << "========= Calculate Your Age Application =========\n" ;
    std::cout << "==================================================\n" ;

    int age ;

    std::cout << "Enter Your Age: ";
    std::cin  >> age;  //! cin ==> Character Input

    int age_In_Days = age * 365 ;
    int age_In_Hours = age_In_Days * 24 ;
    int age_In_Minutes = age_In_Hours * 60 ; 
    int age_In_Seconds = age_In_Minutes * 60 ; 

    std::cout << "Your Age In Days are:  " << age_In_Days << " Days\n" ;
    std::cout << "Your Age In Hours are:  " << age_In_Hours << " Hours\n" ;
    std::cout << "Your Age In Minutes are:  " << age_In_Minutes << " Minutes\n" ;
    std::cout << "Your Age In Seconds are:  " << age_In_Seconds << " Seconds2\n" ;


    return 0;
}