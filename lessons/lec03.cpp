//! Ctrl + shift + p (>view move pannel right)

//?==========Escape Sequance Characters ========
//*-------Special Non Printing Characters
//*-------Control Printing Behaviour
//*-------Start With Back Slash "\"
//*-------Can Be Inserted In Any Position
//! Types:
//* \n ==> New Line
//* \\ ==> cout back slash
//* \" ==> cout double qoute
//* \' ==> cout single qoute
//* \t ==> Tab Equal 8 Space
//* \b ==> back Space
//* \a ==> Alert (Play Beep During Execution)
//* \r ==> Carriage Return (return to start line and over flow the cout)



#include <iostream>

int main ()
{
    std::cout << "Moaaz\rZaki\n " ; 
    std::cout << "Line";
    //! \space ==>escap the space 
    // This Is Line \
    return 0;
}