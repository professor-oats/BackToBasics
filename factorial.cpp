#include <iostream> // Including input-output stream header file
using namespace std; // Using the standard namespace

// Function to calculate factorial recursively
long long factorial(int num) {
    if (num == 0) { // If the number is 0
        return 1; // Return 1 because 0! is 1 by definition
    }
    else {
        // Recursive call to calculate factorial
        // Multiplies the number with the factorial of (number - 1)
        return num * factorial(num - 1);
    }
}

int main() {
    int num; // Declare variable to store the input number

    cin >> num; // Take input from the user

    // Displaying the factorial of the input number using the factorial function
    cout << factorial(num) << endl;

    return 0; // Indicating successful completion of the program
}