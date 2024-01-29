#include <iostream> // Header file for input/output stream operations
using namespace std;

int main() {
    const int MAX = 1000000; // Constant for the maximum value
    const int sqrtMAX = 1000; // Constant for square root of the maximum value
    int n; // Variable to store the user input for the count of prime numbers
    int b[MAX + 1] = {0}; // Array to mark non-prime numbers
    int i, j; // Loop control variables
    int sum; // Variable to store the sum of prime numbers
    int count; // Variable to count the number of prime numbers found
    b[0] = 1; // Mark 0 as non-prime
    b[1] = 1; // Mark 1 as non-prime

    cin >> n; // Input the number of prime numbers to be found

    // Mark multiples of 2 as non-prime numbers
    for (i = 4; i <= MAX; i += 2)
        b[i] = 1;

    // Sieve of Eratosthenes: Mark multiples of odd numbers as non-prime
    for (i = 3; i <= sqrtMAX; i += 2)
        for (j = i + i; j <= MAX; j += i)
            b[j] = 1;

    // If input is 0, exit the program
    if (n == 0)
        return 0;

    sum = 0; // Initialize sum to 0
    count = 0; // Initialize count of prime numbers found to 0

    // Loop through the array to find and sum the first 'n' prime numbers
    for (i = 2; count < n; i++) {
        if (b[i] == 0) { // If the number is not marked as non-prime
            count++; // Increment the count of prime numbers found
            sum += i; // Add the prime number to the sum
        }
    }

    // Display the sum of the first 'n' prime numbers
    cout << "Sum of the first " << n << " Prime numbers is: " << sum;
    return 0; // Indicating successful completion of the program
}