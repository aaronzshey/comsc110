// Objective: simple fibonacci calculator
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
int fib(int index);
void introduction(string objective, string instructions);

// main program

int main() {
  // user introduction
  string objective = "calculate fibonacci numbers";
  string instructions = "Type a number";
  introduction(objective, instructions);

  int userInput;
  int i = 0;
  int final = 0;
  cout << "Enter an index [0 or greater]: ";
  cin >> userInput;

  for (int i = 0; i <= userInput; i++) {
    cout << fib(i) << " ";
    final = fib(i);
  }  // for
  cout << "\n";
  cout << "The Fibonacci number at index " << userInput << " is " << final
       << "\n";
  cout << "\n";

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

int fib(int index) {
  if (index == 1 || index == 0) {
    return (index);
  } else {
    return (fib(index - 1) + fib(index - 2));
  }
}  // fib
