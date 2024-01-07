#include <iostream> // Including the input-output stream header file
#include <iomanip>  // Including the header file for input-output manipulators
using namespace std; // Using the standard namespace

int main() // Start of the main function
{
    // Outputting a message indicating the purpose of the program
    cout << "\n\n Formatting the output using type casting:\n";
    cout << "----------------------------------------------\n"; 

    cout << "Print floating-point number in fixed format with 1 decimal place: "; // Outputting a message

    cout << fixed << setprecision(1); // Setting the floating-point number to display with 1 decimal place

    cout << "\nTest explicit type casting :\n"; // Outputting a message for explicit type casting

    int i1 = 4, i2 = 8; // Initializing two integer variables

    cout << i1 / i2 << endl;       // Outputting the result of integer division
    cout << (double)i1 / i2 << endl;  // Explicitly casting i1 to double before division
    cout << i1 / (double)i2 << endl;  // Explicitly casting i2 to double before division
    cout << (double)(i1 / i2) << endl; // Casting the result of the integer division to double

    double d1 = 5.5, d2 = 6.6; // Initializing two double variables

    cout << "\nTest implicit type casting :\n"; // Outputting a message for implicit type casting

    cout << (int)d1 / i2 << endl;    // Implicitly casting d1 to int before division with i2
    cout << (int)(d1 / i2) << endl;  // Casting the result of d1 divided by i2 to int

    cout << "\nint implicitly casts to double: \n";
    d1 = i1; // Implicitly casting integer i1 to double d1
    cout << d1 << endl;  // Outputting the value of d1 after casting (implicit type casting)

    cout << "double truncates to int!: \n";
    i2 = d2; // Implicitly casting double d2 to int i2
    cout << i2 << endl; // Outputting the value of i2 after casting (implicit type casting)

    return 0; // Returning 0 to indicate successful program execution
}