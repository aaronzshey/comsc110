// Objective:  Gather user's personal information
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
  int luckyNumber;
  string favoriteMovie;
  double age;
  char initial;
  

  // introduction
  cout << "Objective: Gather user's personal information\n "
          "written in this course.\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: mousepad\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  cout << "\n\n\n\n";
  
  cout << "Enter your lucky number: ";
  cin >> luckyNumber;
  cin.ignore(1000, 10);
  cout << "Enter your lucky favorite movie: ";
  cin >> favoriteMovie;
  cin.ignore(1000, 10);
  cout << "Enter your age: ";
  cin >> age;
  cin.ignore(1000, 10);
  cout << "Enter your first initial: ";
  cin >> initial;
  cin.ignore(1000, 10);
  cout << "\n\n\n\n";
  
  cout << "Your favorite number is " << luckyNumber << endl;
  cout << "Your favorite movie is " << favoriteMovie << endl;
  cout << "Your initial is " << initial << endl;
  cout << "Your age is " << age << endl;
 

}  // main
