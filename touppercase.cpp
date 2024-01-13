#include <iostream>
#include <string>

int main() {
  std::cout << "Input a string, this program will turn the it to uppercase\n";

  std::string instring;

  std::getline(std::cin, instring);

    // Convert the string to uppercase
    for (char &ch : instring) {
        ch = std::toupper(ch);
    }

    // Display the uppercase string
    std::cout << "Uppercase string: " << instring << std::endl;

    return 0;

}