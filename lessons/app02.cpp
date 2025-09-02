# include <iostream>

int main ()
{
    int number;

    std :: cout << "===============================================\n";
    std :: cout << "====== Calculatation The Number Of Bytes ======\n";
    std :: cout << "===============================================\n\n";

    std :: cout << "Enter The Number of Kilobytes:  ";
    std :: cin >> number ;

    std:: cout << number << " Kilobytes Equals  " << number *1024 << " Bytes\n";
    std:: cout << number << " Kilobytes Equals  " << number *1024 * 8 << " Bit\n";
    return 0;
}