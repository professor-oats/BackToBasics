#include "string.h"
#include "iostream"

int main() {
  std::string string1 = "* * * * * * ==================================\n";
  std::string string2 = " * * * * *  ==================================\n";
  std::string string3 = "==============================================\n";


  for (int i  = 0; i<9; i++) {
    if (!(i % 2)) {
      std::cout << string1;
      continue;
    }
    std::cout << string2;
  }

  for(int i = 0; i < 6; i++) {
    std::cout << string3;
  }

  return 0;

}