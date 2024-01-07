/* This program will swap two numbers from input */

#include <iostream>

int main() {

  int number1;
  int number2;

std::cin >> number1;
std::cin >> number2;

int temp = number1;
number1 = number2;
number2 = temp;

std::cout << number1 << number2;

return 0;
}