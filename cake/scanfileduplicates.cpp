/* This program will scan a textfile for duplicate words and put all non-duplicates into a new file */

#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <random>
#include <set>

int generateRandomNumber() {
    // Generate a random number between 1 and 1000
    return std::rand() % 1000 + 1;
}

int main() {
    // Step 1: Read the list of words from a file
    std::ifstream inputFile("cakes.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    std::vector<std::string> words;
    std::set<std::string> uniqueWords;  // Use a set to automatically handle duplicates
    std::string word;
    while (inputFile >> word) {
        uniqueWords.insert(word);  // Inserting into set automatically removes duplicates
    }

    words.assign(uniqueWords.begin(), uniqueWords.end());  // Transfer unique words to the vector

    // Step 2: Sort the words alphabetically
    std::sort(words.begin(), words.end());

    // Step 3-5: Map each word to a random number and store in a list
    std::map<std::string, int> wordNumberMap;
    for (const auto& w : words) {
        int randomNumber = generateRandomNumber();
        wordNumberMap[w] = randomNumber;
    }

    // Step 6: Write the mappings to a new file (cakenumber.txt)
    std::ofstream outputFile("cakenumber.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Error creating output file!" << std::endl;
        return 1;
    }

    // Write mappings to the file
    for (const auto& pair : wordNumberMap) {
        outputFile << pair.first << " " << pair.second << std::endl;
    }

    // Close the output file
    outputFile.close();

    std::cout << "Mappings written to cakenumber.txt" << std::endl;

    return 0;
}