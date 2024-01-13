#include "iostream"

/* This program takes an array and will add the odds with odds and evens with evens */

int evens = 0; 
int odds = 0;

const int iterator = 10;
int odd_even[iterator] = {2, 15, 16, 17, 122, 2553, 34, 2, 9, 10};

int main() {

  for (int i = 0; i < iterator; i++) {

    if (!(odd_even[i] % 2)) {
      evens += odd_even[i];
      continue;

    }

    odds += odd_even[i];

  }

  std::cout << "Sum of evens: " << evens << '\n' << "Sum of odds: " << odds;

  return 0;

}
