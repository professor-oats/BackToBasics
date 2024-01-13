#include <stdio.h>

/* For this assignment I will code in C because I want a proper array solution to it */

int main() {
  printf("Hello this program will take a number input and switch the position of the first and last digit\nInput a number: ");

  char numberin;
  int position = 0;
  int numberholder[100];

  while((numberin = getchar()) != '\n') {

    if (numberin >= '0' && numberin <= '9') {
        int numbervalue = numberin - '0';

        numberholder[position] = numbervalue;
        position++;
    }

    else {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

  }

  int tempholder;

  position--; /* Backing to last */
  
  tempholder = numberholder[position];
  numberholder[position] = numberholder[0];
  numberholder[0] = tempholder;

  for(int i = 0; i <= position; i++) {
    printf("%d ", numberholder[i]);
  }

  return 0;
  
}