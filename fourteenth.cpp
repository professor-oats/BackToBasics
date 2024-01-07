/* Volume calculator */

#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

int main() {

std::cout << "Hello and welcome to the program to calculate the volumes of common objects!" << std::endl;

char userchoice;
char doagain;


do {
std::cout << "What object do you wish to calc the volume of?\n\
1. Sphere\n\
2. Cube\n\
3. Cylinder" << std::endl;

std::cin >> userchoice;

if (userchoice == '1') {
  std::cout << "What is the radius of the sphere?\n" << std::endl;

  int sphererad;
  std::cin >> sphererad;

  int spherevolume = 4/3 * M_PI * pow(sphererad, 3);

  std::cout << "The volume of the sphere is: " << spherevolume << "\n" << std::endl;
  
}

else if(userchoice == '2') {
  std::cout << "What is the length of the cube side?\n" << std::endl;
  int cubeside;
  std::cin >> cubeside;

  int cubevolume = pow(cubeside, 3);

  std::cout << "The volume of the cube is: " << cubevolume << "\n" << std::endl;
}

else if(userchoice == '3') {
  std::cout << "What is the radius of the cylinder?\n" << std::endl;
  int cylinderrad;
  std::cin >> cylinderrad;
  std::cout <<"What is the height of the cylinder?\n" << std::endl;
  int cylinderheight;
  std::cin >> cylinderheight;

  int cylindervolume = M_PI * pow(cylinderrad, 2) * cylinderheight;

  std::cout << "The volume of the cylinder is: " << cylindervolume << "\n" << std::endl; 

}

else {
    std::cout << "Wrong choice, try again\n" << std::endl;
    std::cin.clear();
    fflush(stdin);
}

std::cout << "Do you want to calculate another volume, Y/N?\n" << std::endl;
std::cin.clear();
fflush(stdin);
std::cin >> doagain;

}
while(doagain != 'N' && doagain != 'n');
 
return 0;

}