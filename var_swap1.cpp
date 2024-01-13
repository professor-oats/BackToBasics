#include "iostream"

/* This program will have three variables and switch value in two of them without using the third */

int main() {

  int var1 = 15;
  int var2 = 22;
  int var3 = 0;

  var1 = var2 + var1;
  var2 = var1 - var2;
  var1 = var1 - var2;

  std::cout << var1 << var2;

}