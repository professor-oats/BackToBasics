#include <iostream>
#include <sstream>
#include <vector>

/* This program will read in an input string of spaceseparated numbers between 0 - 1000,000 and print the difference between the highest and the lowest number in string */
/* Making a tokenize and a compare function is essential */
/* Perhaps pushing directly into highest and lowest are good to also check where the range is exceeded. */

int main() {

  std::cout << "Hello. This program takes a series of spaceseparated numbers between 0 - 1000,000 and print the difference between the highest and the lowest value" << std::endl;

  std::vector<int> valuelist;
  std::string userinput;

  std::getline(std::cin, userinput);

    // Tokenize the input string
    std::istringstream iss(userinput);
    int valuetoken;
    int highestvalue = 0;
    int lowestvalue = 1000000;

    // Read numbers from the stringstream and add them to the list
    while (iss >> valuetoken) {
      if(valuetoken > 1000000 || valuetoken < 0) {
        std::cout << "Range exceeded. Rerun program with correct numbers in" << std::endl;
        return 1;
      }
      
      if(valuetoken > highestvalue) {
        highestvalue = valuetoken;
      }

      if(valuetoken < lowestvalue) {
        lowestvalue = valuetoken;
      }
    }

    int valuediff;

    valuediff = highestvalue - lowestvalue;

    std::cout << "The difference = " << valuediff << std::endl;

    return 0;

  }
