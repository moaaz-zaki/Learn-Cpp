//# ==> preprocessing do text replacement 
//<> ==> compile library path of system
//"" ==> currnt path
#include <iostream>  // Preprocessor Directive 
/*
iostream header file content:
cout ==> Standard input stream  
cin ==>> Standard output stream
cerr ==> Standard output stream for errors
clog ==> Standard output stream for logging

*/ 
/*
This Is My First File
In Learning Programming
Iam Happy <3
Iam Dragon
*/

// main must return integer
int main()
{

  std::cout << "Line One\n";  // \ ==> scape sequance
  std::cout << "Line Two\n";
  std::cout << "Line Three\n";  // cout Function 

  //! can remove std & scope operator with using namespace
  std::cout << "Line One" << std:: endl; 
  std::cout /* Character Output*/ << "Line Two" << std:: endl;
  std::cout << "Line Three" << std::endl;

  std::cout << "Iam learning programming \nwith \nElzero \nWeb \nSchool \n<3" << std::endl;

  std::cout << "|=======================|" << std::endl;
  std::cout << "|== Elzero Web School ==|" << std::endl;
  std::cout << "|========= C++ =========|" << std::endl;
  std::cout << "|=======================|" << std::endl;


  return 0;
} // End Main Function