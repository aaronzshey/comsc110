// Objective: calculate how many days old I will be by the due date of this assignment.
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
	int numYears = 19;
	int numLeapYears = 16;
	int numDaysBefore = 221;
	int daysRemaining = 199;
	string dateOfBirth = "Aug 09 2004";
	string dueDate = "Jun 16 2022";
	int days = 0;

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n "
          "written in this course.\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: mousepad\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
  
  //output
  cout << "Date of birth:\n" << dateOfBirth << endl;
  cout << "Assignment due date:\n" << dueDate << endl;
  days = days + numYears * 365;
  days = days + numLeapYears;
  days = days - numDaysBefore;
  days = days - daysRemaining;
  cout << "Age in days at due date:\n" << days;
  

}  // main
