
#include <iostream>

int main() {
  int userinput;
  int highestvalue = 0;
  int lowestvalue = 1000000;
  int valuediff;

  std::cout << "Enter space-separated integers (enter a non-integer to finish): ";

  /* Read integers until a non-integer is entered */
  while (std::cin >> userinput && (!std::cin.fail())) {

    if (std::cin.fail()) {
      std::cerr << "Error: Invalid input. Please enter valid integers." << std::endl;
      return 1;
    }

    if(userinput > 1000000 || userinput < 0) {
      std::cerr << "Range exceeded. Rerun program with correct numbers in" << std::endl;
    return 1;
  }
      
    if(userinput > highestvalue) {
      highestvalue = userinput;
    }

    if(userinput < lowestvalue) {
      lowestvalue = userinput;
    }

      /* Skip the space */
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), ' ');

     valuediff = highestvalue - lowestvalue;

     std::cout << "The difference = " << valuediff << std::endl;

  }

  if (!std::cin.eof()) {
    std::cerr << "Non-integer in string - Exiting" << std::endl;
    return 1;
  }

  return 0;

}
