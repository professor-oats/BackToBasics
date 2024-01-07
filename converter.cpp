#include <iostream>
#include <math.h>


int main() {
  std::cout << "Welcome to the genereric converter program \n What would you like to convert?\n";

char userchoice;
char doagain;


do {
std::cout << "1. Convert Celsius to Fahrenheit and Kelvin\n\
2. Convert Fahrenheit to Celsius and Kelvin\n\
3. Convert Kelvin to Celsius and Fahrenheit\n"
  << std::endl;
std::cin >> userchoice;

if (userchoice == '1') {
  int celsius;
  std::cout << "How many degrees celsius?\n";
  std::cin >> celsius;
  int fahrenheit = (celsius * 9/5) + 32;
  int kelvin = celsius + 273.15;
  std::cout << "Amount of Fahrenheit: " << fahrenheit << "F\n";
  std::cout << "Amount of Kelvin: " << kelvin << "K\n";

}

else if(userchoice == '2') {
  int fahrenheit;
  std::cout << "How many degrees fahrenheit?\n";
  std::cin >> fahrenheit;
  int celsius = (fahrenheit - 32) * 5/9;
  int kelvin = (fahrenheit - 32) * 5/9 + 273.15;
  std::cout << "Amount of Celsius: " << celsius << "C\n";
  std::cout << "Amount of Kelvin: " << kelvin << "K\n";
}

else if(userchoice == '3') {
  int kelvin;
  std::cout << "How many degrees kelvin?\n";
  std::cin >> kelvin;
  int celsius = kelvin - 273.15;
  int fahrenheit = (kelvin - 273.15) * 9/5 + 32;
  std::cout << "Amount of Fahrenheit: " << fahrenheit << "F\n";
  std::cout << "Amount of Kelvin: " << kelvin << "K\n";

}

else {
    std::cout << "Wrong choice, try again\n" << std::endl;
    std::cin.clear();
    fflush(stdin);
}

std::cout << "Do you want to convert another temperature, Y/N?\n" << std::endl;
std::cin.clear();
fflush(stdin);
std::cin >> doagain;

}
while(doagain != 'N' && doagain != 'n');


  return 0;
}
