// Objective:  template for C++ programs and to test code
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
void introduction(string objective, string instructions);

// main program

int main() {
  // Data
  cout << "Objective: "
       << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // main
