/* This program will calculate the areas and circumference */

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

int main() {

std::cout << "Hi and welcome to the program to calculate areas and circumference" << std::endl;

char userchoice;
char doagain;


do {
std::cout << "Pick a number: \n\
  1. Calculate the area and perimeter of a rectangle\n\
  2. Calculate the area of any triangle given the three sides\n\
  3. Calculate the area and circumference of a circle"\
  << std::endl;
std::cin >> userchoice;

if (userchoice == '1') {
  std::cout << "What is the length of the rectangle?" << std::endl;
  int rectanglelength;
  std::cin >> rectanglelength;
  std::cout << "What is the width of the rectangle?" << std::endl;
  int rectanglewidth;
  std::cin >> rectanglewidth;

  int rectanglearea = rectanglelength * rectanglewidth;
  int rectangleperi = 2 * (rectanglelength + rectanglewidth);

  std::cout << "The area of the rectangle is: " << rectanglearea << "\n"\
  << "The perimeter of the rectangle is: " << rectangleperi << std::endl;

}

else if(userchoice == '2') {
  std::cout << "What is the length of the 1st side of the triangle?" << std::endl;
  int triafirstside;
  std::cin >> triafirstside;
  std::cout << "What is the length of the 2nd side of the triangle?" << std::endl;
  int triasecondside;
  std::cin >> triasecondside;
  std::cout << "What is the length of the 3rd side of the triangle?" << std::endl;
  int triathirdside;
  std::cin >> triathirdside;

  int triahalfperi = (triafirstside + triasecondside + triathirdside) / 2;

  double triarea = sqrt(triahalfperi*(triahalfperi - triafirstside)*(triahalfperi - triasecondside)*
  (triahalfperi - triathirdside));

  std::cout << "The area of the triangle is: " << triarea << std::endl;

}

else if(userchoice == '3') {
  std::cout << "What is the radius of the circle?" << std::endl;
  int circrad;
  std::cin >> circrad;

  int circcircum = 2 * circrad * M_PI;
  int circarea = circrad * circrad * M_PI;

  std::cout << "The circumference of the circle is: " << circcircum << '\n'\
  << "The area of the circle is: " << circarea << std::endl;

}

else {
    std::cout << "Wrong choice, try again\n" << std::endl;
    std::cin.clear();
    fflush(stdin);
}

std::cout << "Do you want to calculate another area, Y/N?\n" << std::endl;
std::cin.clear();
fflush(stdin);
std::cin >> doagain;

}
while(doagain != 'N' && doagain != 'n');
 
return 0;

}