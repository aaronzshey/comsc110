// Objective:  template for C++ programs and to test code
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: Geany - lightweight and mature IDE for GNU

// libraries
#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

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
  cout << "Objective: This program will serve as a template for all programs\n "
          "written in this course.\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: mousepad\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  
  //formatting
  cout.setf(ios::fixed);
  cout << setprecision(0);
  
  //data:
  int lighthouseHeightinFeet;
  cout << "Type in the height of your lighthouse in feet and press enter. ";
  cin >> lighthouseHeightinFeet;
  cin.ignore(256, '\n');
  double distInMiles = sqrt(double(0.8 * lighthouseHeightinFeet));
  
  //output
  cout << "a " << lighthouseHeightinFeet
       << " foot tall lighthouse can be seen from " << distInMiles
       << " miles away.";
}
