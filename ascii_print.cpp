#include "iostream"

int main() {
  char inchar1;

  std::cout << "Input a char on your American European Keyboard\n";
  std::cin >> inchar1;

  std::cout << "The ASCII value is: " << static_cast<int>(inchar1) << "\n";
  std::cout << "The character is: " << static_cast<char>(static_cast<int>(inchar1));

  // lazydog

  return 0;

}