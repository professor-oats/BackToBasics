#include <iostream>
#include "string.h"

int main() {
  std::cout << "Hello, this program will take a number input and then make a rectangle out of it" << std::endl;
  std::cout << "Input your favorite number bei" << std::endl;

  char userinput[10] = "";
  int i = 0;
  int holdnumber = 0;

  std::cin >> userinput;

  for (i; i < 10; i++) {
    if(std::isdigit(userinput[i])) {
      holdnumber = userinput[i];
      break;
    }
  }

  if (i == 10) {
    std::cout << "No number were found, please try again" << std::endl;
    return 1;
  }

  for(char row = 0; row < 6; row++) {
    for(char column = 0; column < 4; column++) {
    std::cout << holdnumber;
    }
    std::cout << std::endl;
  }



  return 0;
}