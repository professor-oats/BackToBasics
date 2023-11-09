#include <iostream>


int PrintSum(int a, int b) {
  return a + b;

}

int main() {
  std::cout << "Hello and welcome to the first program in the journey of becoming a better C++ programmer\n" << std::endl;
  /* int sum = PrintSum(9, 11); /* No need for this*/
  std::cout << "Sum is: " << PrintSum(9, 11) << std::endl;
  return 0;
}