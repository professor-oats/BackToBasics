#include <bits/stdc++.h> // Includes most commonly used headers
using namespace std;

int main() {
    string str1; // Declare a string variable to store input

    int sum_num = 0, num; // Initialize variables to store the sum of numbers and individual numbers

    // Continuously read input lines until EOF
    while (getline(cin, str1)) {
        // Loop through each character in the string
        for (int i = 0; i < (int)str1.size(); i++) {
            if (isdigit(str1[i])) continue; // If the character is a digit, continue to the next character
            else {
                str1[i] = ' '; // Replace non-digit characters with space
            }
        }

        stringstream abc(str1); // Create a stringstream object 'abc' from the modified string

        // Extract integers from the stringstream and add them to sum_num
        while (abc >> num) {
            sum_num += num; // Add each extracted integer to the sum
        }
    }

    // Output the total sum of positive integers
    cout << "Sum of all positive integers: " << sum_num << endl;
    return 0;
}