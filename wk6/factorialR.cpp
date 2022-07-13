// Objective: calculate factorials 
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

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
  // user introduction
  string objective = "calculate factorials"; 

  string instructions = "Type the number you want the factorial of";
  introduction(objective, instructions);
int inp = 0;
  cout << "Enter the number you want to factorialize";
cin >> inp;
cin.ignore(1000,10);
  int factorial = 1;

  for (int i = 1; i < 10; i++) {
    factorial *= i;
  }
  cout << "The factorial of " << inp << " is " << factorial << "\n";

}  // main

void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // introduction
