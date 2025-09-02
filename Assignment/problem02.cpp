#include <iostream>
using namespace std;

int main()
{
    int num1 , num2;
    cout << "Enter Number 1: " ;
    cin >> num1;
    cout << "Enter Number 2: " ;
    cin >> num2;
    cout << num1 * num2 << endl;
    // Write Your Code Here
    int age = 20;
    int period = 10;
    int duration = 10;

    // Do Not Edit The Next 2 Lines
    cout << "My Age Is: " << age << "\n";
    cout << period << " Years Ago My Age Was: " << age - period << "\n";

    // Add The Third Line Below
    cout << "After " << duration << " My Age will be " << duration + age << endl;

    // // Write Your One Line Code Here
    // int a, b, c;

    // // Do Not Edit Below
    // a = 10, b = 20, c = 70;
    // cout << "Sum Of All Number Is: " << a + b + c;

    /*
      name        [ Valid | Good Practice ]
      NAME        [ Valid | Bad Practice ]
      1name       [ Notvalid] ==> can not start with number
      __name      [ Vaild | Bad Practice]
      name@name   [ NotVaild ] ==> Have Special character
      name10name  [ Vaild | Bad Practice ]
      name!name   [ NotVaild ] == >! Have Special character
      first_NAME  [ Vaild | Bad Practice ]
      first_name  [ Vaild | Good practice] ==> snackCase
      firstName   [ Vaild | Good practice] ==> CamelCase
      first name  [ NotVaild] ==> has wight space
      fn          [ Vaild | Bad Practice] ==> Must be Unique
      public      [ NotVaild ] ==> Reversed keyword
      Public      [ Vaild | Bad Practice]  ==> cpp casesensitive
    */

    // Write my_text Variable Content Here
    string my_text = "\n============\n== Elzero == \n============\n";

    // Do Not Edit Below
    cout << my_text;

    int a = 210, b = -50, c = -40;

    // Add Your Code Here

    // Do Not Edit Below
    cout << a - b - c; // 300

    // Edit Here To Fix The Error
   int current_year;
   int birth_year;

  // Do Not Edit Here
  current_year = 2022;
  birth_year = 1982;
  int age_in_years = current_year - birth_year;
  cout << endl << age_in_years << endl;

   cout << "\"Hello Elzeroo";
  cout << " Web Schoo";
  cout << " I Love Programming";
  cout << " Too Much";
  cout << " Specially C++\"";

  return 0;
}