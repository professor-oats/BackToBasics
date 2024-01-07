#include <iostream> // Including the input-output stream header file

using namespace std; // Using the standard namespace

int main() // Start of the main function
{
	cout << "\n\n Swap two numbers without using third variable:\n"; // Displaying the purpose of the program
	cout << "---------------------------------------------------\n";

	int num1, num2, temp; // Declaring three integer variables to hold numbers

	cout << " Input 1st number : "; // Prompting the user to input the first number
	cin >> num1; // Taking the first number as input from the user

	cout << " Input 2nd number : "; // Prompting the user to input the second number
	cin >> num2; // Taking the second number as input from the user

	num2 = num2 + num1; // Swapping logic: adding both numbers and storing the result in num2
	num1 = num2 - num1; // Swapping logic: subtracting the original num1 from the updated num2 and storing the result in num1
	num2 = num2 - num1; // Swapping logic: subtracting the updated num1 from the updated num2 and storing the result in num2

	// Displaying the swapped numbers
	cout << " After swapping the 1st number is : " << num1 << "\n";
	cout << " After swapping the 2nd number is : " << num2 << "\n\n";
}