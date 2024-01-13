#include <iostream>
#include <algorithm>
#include <list>
#include <string>
#include <sstream>

/* This attempt is invalid. See _correction for solution. */


bool isNumber(const std::string& str) {
    try {
        // Attempt to convert the string to a number
        std::stoi(str);
        return true;
    } catch (const std::invalid_argument&) {
        // Conversion failed, not a number
        return false;
    } catch (const std::out_of_range&) {
        // Conversion failed, out of range for the target type
        return false;
    }
}


int main() {
  std::cout << "Hello, this program takes numbers and put them into a list and then returns this with the highest value first";

  /* Loop for inputting numbers here */
  /* Use a list to store so we can push front and back as needed? */
  /* If no good front and back solution can be found we have to make a sort */
  /* Can this be done skipping an all sort? */


  std::list<int> numbers;
  std::string userinput;

  char moreinput = 'Y';

  std::cout << "Input a number or numbers seperated by space\n"; 

  while(moreinput == 'Y' || moreinput == 'y') {
    

    std::getline(std::cin, userinput);

    if (isNumber(userinput)) {
    // Convert the string to an integer and add it to the list
        numbers.push_back(std::stoi(userinput));
    } 
    else {
    std::cout << "Invalid input. Please enter a valid number." << std::endl;
    }
    // Sorting in descending order using std::greater
    numbers.sort(std::greater<int>());

    // Printing the sorted numbers

    for (int num : numbers) {
      std::cout << num << " ";
    }

    std::cout << "\nDo you wish to input more numbers? 'Y' or 'N' \n";

    /* Clear cin here? */

    std::cin >> moreinput;
  
 
  }



    return 0;
}