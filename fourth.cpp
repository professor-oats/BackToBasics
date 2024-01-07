#include <iostream>

int main() {

  std::cout << "Hello and welcome to the program we take two numbers and print the sum of them\n" << std::endl;
  std::cout << "Type the first number\n" << std::endl;

  float input1;
  float input2;

  std::cin >>  input1;
  std::cout << "Type the second number\n" << std::endl;
  std::cin >> input2;

  std::cout << "The sum of the two numbers are: " << input1 + input2 << std::endl;

  return 0;
}