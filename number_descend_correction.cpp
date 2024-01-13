#include <iostream>
#include <list>
#include <sstream>

int main() {
    std::list<int> numbers;
    std::string userinput;

    std::cout << "Hello, this program takes numbers and put them into a list and then returns this with the highest value first\n";
    // Prompt the user for input
    std::cout << "Enter numbers separated by space: ";
    std::getline(std::cin, userinput);

    // Tokenize the input string
    std::istringstream iss(userinput);
    int numbertoken;

    // Read numbers from the stringstream and add them to the list
    while (iss >> numbertoken) {
        numbers.push_back(numbertoken);
    }

    numbers.sort(std::greater<int>());

    // Display the numbers in the list
    std::cout << "Numbers in the list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}