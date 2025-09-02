//?======== Control Flow =================
//! If Condition
//*-----if (condition)
//*-----{
//*-----  Block of Instruction
//*-----}

//! Else if , Else
//*-----if (condition)
//*-----{
//*-----  Block of Instruction
//*-----} else if (condition2 when condition1 is false ) {
//*-----  Block of Instruction
//*-----}
//*-----} else if (condition3 when condition2 & 1 are false ) {
//*-----  Block of Instruction
//*-----}else "if all condition are false"{
//*-----  Block of Instruction
//*-----}

//! Nested IF
//*-----if (condition)
//*-----{
//*-----  Block of Instruction
//*----------if (condition)
//*----------{
//*----------- Block of Instruction
//*-----------}
//*-----}

//! Ternary Operator
//* (condition ) ? True : False;
//* Can Assign To Variable

//! Nested Ternary Operator
//* (condition ) ? True :((condition ) ? True : False );

//! Switch Case 
//*-----Integer Or Character Only
//*-----switch (Variable_Name){
//*-----case variable_Value:
//*-------------insturction of code;
//*-------------break;
//*-----case anothervariable_Value:
//*-------------insturction of code;
//*-------------break;
//*-----default:
//*-------------insturction of code;
//*-------------break;
//*-----}



# include <iostream>
using namespace std;

int main ()
{
    int age = 18  ,score = 800;


   if ( age >= 18)
        cout << "Your Age Is Ok" << endl ;
   else
        cout << "Your Age Is Not Ok" << endl ;
   

   
   cout << ( age >= 18 ? "Your Age Is Ok" : "Your Age Is Not Ok"  ) << endl ;

   
   
   string msg = age >= 18 ? "Your Age Is Ok" : "Your Age Is Not Ok" ;
        cout << msg << endl;



     if (age >= 18)
     {
          cout << "Your Age Is Ok" << endl ; 
     }else{

          if(score >= 500)
          {
               cout << "Your Score Is Ok" << endl ;

          }else{
               cout << " Not Ok Age Or Score" << endl ;
          }
     }


     cout << ( age >= 18 ? "Your Age Is Ok" : (score >= 500 ? "Your Score Is Ok":" Not Ok Age Or Score" )  ) << endl ;


     int day;

     cout << "Enter A Day From 1 To 25: ";
     cin >> day ;

     switch (day)
     {
          case 1 :
          case 2 :
          case 3 :
          case 4 :
          case 5 :
               cout << "Open From 08.00 To 14.00" << endl ;
               break;
          case 6 :
          case 7 :
          case 8 :
          case 9 :
          case 10 :
               cout << "Open From 10.00 To 16.00" << endl ;
               break;
          case 11 :
          case 12 :
          case 13 :
          case 14 :
          case 15 :
               cout << "Open From 09.00 To 15.00" << endl ;
               break;
          case 16 :
          case 17 :
          case 18 :
          case 19 :
          case 20 :
               cout << "Open From 11.00 To 17.00" << endl ;
               break;
          case 21 :
          case 22 :
          case 23 :
          case 24 :
          case 25 :
               cout << "Open From 12.00 To 18.00" << endl ;
               break;
          default:
               cout << "Closed" << endl ;
               break;
          
     }




     return 0;
}