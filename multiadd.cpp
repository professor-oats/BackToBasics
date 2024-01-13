#include <iostream>

int main() {
  std::cout << "Welcome, this program will take a number from input and then add all following numbers from it up to a hundred and print the sum\nInput a number from 1 to 100\n";

  int chosennumber;

  std::cin >> chosennumber;

  int ni;

  ni = 100 - chosennumber;

  if (chosennumber >= 0 && chosennumber <= 100) {
    for(int i = (chosennumber + 1); --ni >= 0; i++) {
      chosennumber += i;
    }
  }

  else {
    std::cout << "Wrong input, program terminates";
    return 1;
  }

  std::cout << chosennumber;

  return 0;  

}