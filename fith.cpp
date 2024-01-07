#include <iostream>
#include <climits>

/* Direct copy of a solution more or less since it was the first and most appropriate source to find 
   how to check the limits of the primitives */

int main() {
    std::cout << "\n\n Check the upper and lower limits of integer :\n";
	std::cout << "--------------------------------------------------\n";
	std::cout << " The maximum limit of int data type :                  " << INT_MAX << std::endl;
	std::cout << " The minimum limit of int data type :                  " << INT_MIN << std::endl;
	std::cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << std::endl;
	std::cout << " The maximum limit of long long data type :            " << LLONG_MAX << std::endl;
	std::cout << " The minimum limit of long long data type :             " << LLONG_MIN << std::endl;
	std::cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << std::endl;
	std::cout << " The Bits contain in char data type :                  " << CHAR_BIT << std::endl;
	std::cout << " The maximum limit of char data type :                 " << CHAR_MAX << std::endl;
	std::cout << " The minimum limit of char data type :                 " << CHAR_MIN << std::endl;
	std::cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << std::endl;
	std::cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << std::endl;
	std::cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << std::endl;
	std::cout << " The minimum limit of short data type :                " << SHRT_MIN << std::endl;
    std::cout << " The maximum limit of short data type :                " << SHRT_MAX << std::endl;
    std::cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << std::endl;
    std::cout << std::endl;
   return 0;
}