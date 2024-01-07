#include <iostream>

int main() {
  char five = 5, seven = 7;
  double threedotseven = 3.7, eightdotzero = 8.0;

  std::cout << five + seven << std::endl; 
  std::cout << threedotseven + eightdotzero << std::endl;
  std::cout << five + eightdotzero << std::endl;
  std::cout << five - seven << std::endl;
  std::cout << threedotseven - eightdotzero << std::endl;
  std::cout << five - eightdotzero << std::endl;
  std::cout << five * seven << std::endl;
  std::cout << threedotseven * eightdotzero << std::endl;
  std::cout << five * eightdotzero << std::endl;
  std::cout << five / seven << std::endl;
  std::cout << threedotseven / eightdotzero << std::endl;
  std::cout << five / eightdotzero << std::endl;
}