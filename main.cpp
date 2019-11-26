/*
Write a recursive function factorialR that will generate factorials based upon the user starting point (validated) input from the keyboard. i.e. When the user enters, 4, the function should multiply 4 x 3 x 2 x 1, and output the result of 24. 
*/
#include<iostream>
#include "Input_Validation_Extended.h"

using namespace std;

int factorialR(int n);

int main() {
  int n;
  cout << "Enter a positive integer: ";
  n = validateInt(n);
  cout << "Factorial of " << n << " = " << factorialR(n);
  return 0;
}

int factorialR(int n) {
  if(n > 1) {
    return n * factorialR(n - 1);
  } else {
    return 1;
  }
}