// Objective:  Calculate the average height of everyone in the class
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: Geany - lightweight and mature IDE for GNU

// libraries
#include <iostream>
using namespace std;

// Programmer defined data types
// NONE

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
// NONE

// main program
int main() {
  // Data
  // NONE

  // introduction
  cout << "Objective: Calculate the average height of everyone in the class";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;

  int i = 0;
  int sizeOfClass = 2;
  int sum = 0;
  double input;

  for (i = 0; i < sizeOfClass; i++) {
    cout << "What is your height? Type a decimal between 3.0 and 7.0 ";
    cin >> input;

    if (input > 7.0 || input < 3.0) {
      i--;
      cout << "Please type a number between 3 and 7\n";
    } else {
      sum = sum + input;
    }  // if else
  }    // for

  cout << "The average height of the class is " << sum / sizeOfClass;

}  // main
