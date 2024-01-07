#include <iostream> // Including input-output stream header file
#include <string>   // Including string header file for string manipulation
using namespace std; // Using the standard namespace

int main() { // Start of the main function

    cout << "\n\n Show the manipulation of a string:\n"; // Displaying the purpose of the program
    cout << " -------------------------------------\n"; 

    // Declaring a string variable 'txt' and initializing it with "welcome, w3resource"
    string txt = "welcome, w3resource"; 
    cout << " The string:: " << txt << endl; // Displaying the content of the string 'txt'

    cout << " The length of the string:: " << txt.length() << endl; // Displaying the length of the string

    // Displaying the character at index 1 in the string 'txt' using 'at()' function
    cout << " The char at index 1 of the string:: " << txt.at(1) << endl; 

    // Displaying the character at index 1 in the string 'txt' using array indexing
    cout << " The char at index 1 of the string [using array ]:: " << txt[1] << endl; 

    // Checking if the string 'txt' is empty and displaying the result
    cout << " Is the string empty:: " << txt.empty() << endl; 

    // Retrieving and displaying the sub-string starting from index 3 with a length of 4 characters
    cout << " Retrieve the sub-string from 3rd position for 4 characters:: " << txt.substr(3, 4) << endl; 

    // Replacing a sub-string in 'txt' starting at index 3 with a length of 4 characters with "went"
    cout << " The sub-string replace by 'went':: " << txt.replace(3, 4, "went") << endl; 

    // Appending " end" at the end of the string 'txt' and displaying the modified string
    cout << " Append a string ' end' at last of the string:: " << txt.append(" end") << endl; 

    // Appending " end" at the end of the string 'txt' using the concatenation operator and displaying the modified string
    cout << " Append a string ' end' at last of the string using operator:: " << txt + " end" << endl; 

    // Inserting " insert " at index 3 in the string 'txt' and displaying the modified string
    cout << " The string ' insert ' inserting at 3rd position of the string:: " << txt.insert(3, " insert ") << endl; 

    string txt1; // Declaring another string variable 'txt1'
    txt1 = txt; // Copying the content of 'txt' to 'txt1'
    cout << " The new string is:: " << txt1 << endl; // Displaying the content of 'txt1'

    cout << " Input a sentence:: "; // Prompting the user to input a sentence
    getline(cin, txt); // Taking a sentence as input and storing it in 'txt'
    cout << txt << endl << endl; // Displaying the input sentence

    return 0; // Returning 0 to indicate successful program execution
}