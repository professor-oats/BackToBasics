/* This part of program will read the newly created file cakenumber.txt and match one or more cakenames to a random number between 1-1000 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <cstdlib>


int main() {

    // Step 1: Read the pairs of cake and numbers from the file
    std::ifstream inputFile("cakenumber.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::map<std::string, int> wordNumberMap;
    std::string line;
    while (std::getline(inputFile, line)) {
        std::istringstream iss(line);
        std::string word;
        int number;

        // Assuming the format is "Word: cake, Random Number: number"
        if (iss >> word >> number) {
            wordNumberMap[word] = number;
        }
    }

    // Step 2: Get a number from user

    std::cout << "Pick a number between 1-1000 to get different cakenames" << std::endl;
    int inputnumber = 1;

    while(true) {
    std::cin >> inputnumber;
      if(inputnumber >=1 && inputnumber <= 1000) {
        break;
      }

    std::cout << "Number must be between 1-1000, try again" << std::endl;

    }

    // Step 3: Find and display all cake names corresponding to the user's random number
    bool found = false;
    for (const auto& pair : wordNumberMap) {
        if (pair.second == inputnumber) {
            std::cout << "Your number " << inputnumber << " corresponds to the cake " << pair.first << std::endl;
            found = true;
        }
    }

    if (!found) {
        std::cout << "Your number " << inputnumber << " is not found in the file." << std::endl;
    }

    return 0;
}