#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
  std::cout << "Hello, this program will take a set of space seperated integers and return the mode value\n";

  std::vector<int> intholder;
  std::vector<int> modestore;
  std::string userinput;

  std::getline(std::cin, userinput);

      // Tokenize the input string
  std::istringstream iss(userinput);
  int token;

  while (iss >> token) {
    intholder.push_back(token);
  }
  
  std::sort(intholder.begin(), intholder.end());

/*
  for (int value : intholder) {
    std::cout << value << " ";
  }
*/

  for(int i = 0; i < intholder.size(); i++) {
    static int currentmode;
    static int modecounter = 0;
    static int highestmode = 1;  /* Need to have this as 1 so we won't push non-modes (modecounter 0) */
  /*
    std::cout << intholder.at(i) << ' ';
  */

    if(currentmode == intholder.at(i)) {
      modecounter++;
    }

    else {

      if (modecounter == highestmode) {
        modestore.push_back(intholder.at(i-1));
      }

      if(modecounter > highestmode) {
        highestmode = modecounter;
        modestore.clear();
        modestore.push_back(intholder.at(i-1));
      }

      modecounter = 0;
    }

    if (intholder.at(i) == intholder.at(intholder.size() - 1)) {  /* When at last element */

        if (modecounter == highestmode) {
            modestore.push_back(intholder.at(i));
        }

        if (modecounter > highestmode) {
            highestmode = modecounter;
            modestore.clear();
            modestore.push_back(intholder.at(i));
        }
    }


   currentmode = intholder.at(i);
  }

  for (int modes : modestore) {
    std::cout << modes << " ";
  }


  /* We have to store the multiple modes in a vector and when currentmode is equal to highestmode we push to vector */
  /* When currentmode is greater than highestmode we have to pop the modes from the vector and add the new highest to it */

  std::cout << std::endl;

  return 0;

}