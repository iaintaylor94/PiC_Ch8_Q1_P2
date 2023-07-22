#include <stdio.h>

// Declare functions
void printMessage (void);

int main(void) {

  // Use functions
  printMessage ();
  printMessage ();
  
  return 0;
}

// Define functions
void printMessage (void) {
  printf ("Programming is fun!\n");
}