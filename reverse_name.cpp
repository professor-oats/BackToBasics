#include "iostream"
#include "string.h"

int main() {
  std::string firstname;
  std::string lastname;

  std::cout << "Hello, input your first name and last name please, we will present in reverse order\n";
  std::cout << "First: "; std::cin >> firstname;
  std::cout << "Last: "; std::cin >> lastname;

  std::cout << "Your full name in reverse is: " << lastname << firstname;

}