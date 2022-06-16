// Objective:  template for C++ programs and to test code
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: mousepad - text editor for Xfce

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
  int luckyNumber = 12;  //my favorite number
  float amountEarned = 420.69;  //how much I want to save
  string movie = "Yaksha";  //my favorite movie
  char initial = 'A';  //my first initial

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: mousepad\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;

  
    //outputs
  
  cout << "My favorite number is" << luckyNumber << endl;
 cout << "I want to earn" << amountEarned << endl;
  cout << "My favorite movie is" << movie << endl;
  cout << "My initial is" << initial << endl;
  cout << "My favorite number is" << luckyNumber << endl;
}  // main
