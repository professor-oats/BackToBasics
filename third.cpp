#include <iostream>
#include <algorithm>
#include <string.h>

int main() {
  /* This program will print out the size of different types
     for ze compiler.*/

  std::string mytype;
  std::string lowmytype;

  std::cout << "Hello and welcome to the program to terminate type 'exit'\n";

  while(mytype != "exit") {
    std::cout << "Write a type that you want to find the size for\n";
    std::cin >> mytype;

    if (mytype.size() > 9) {  /* Catching weird unauthorized strings early */
        std::cout << "Invalid type. Try again" << std::endl;
        std::cin.clear();
        continue;
    }

   std::transform(mytype.begin(), mytype.end(), mytype.begin(), ::tolower); 

    if (mytype == "bool" || mytype == "boolean") {
      std::cout  << "The size of bool is " << sizeof(bool) << " bytes" <<  std::endl;
    }

    else if (mytype == "char" || mytype == "character") {
      std::cout  << "The size of char is " << sizeof(char) << " bytes" <<  std::endl;
      std::cout  << "The size of wide char is " << sizeof(wchar_t) << " bytes" <<  std::endl;
    }

    else if(mytype == "short") {
      std::cout  << "The size of short is " << sizeof(short) << " bytes" <<  std::endl;
    }

    else if (mytype == "int" || mytype == "integer") {
      std::cout  << "The size of int is " << sizeof(int) << " bytes" <<  std::endl;
    }

    else if (mytype == "float") {
      std::cout  << "The size of float is " << sizeof(float) << " bytes" <<  std::endl;
    }

    else if (mytype == "double") {
      std::cout  << "The size of double is " << sizeof(double) << " bytes" <<  std::endl;
      std::cout  << "The size of long double is " << sizeof(long double) << " bytes" <<  std::endl;
    }

    else if (mytype == "long") {
      std::cout  << "The size of long is " << sizeof(long) << " bytes" <<  std::endl;
      std::cout  << "The size of long long is " << sizeof(long long) << " bytes" <<  std::endl;
    }

    else {
        std::cout << "Invalid type. Try again" << std::endl;
        std::cin.clear();
    }

    std::cin.clear();


  }

  return 0;

}