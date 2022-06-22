// Objective:  calculate accumulated money from interest
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
  double interestRate = 0.075;  // = annual interest rate (decimal)
  interestRate = interestRate / 12.0;
  double deposit = 100.0;  // = monthly deposit (decimal)
  int years = 10;          // = number of years (integer)
  int time = years * 12;   // = number of months (integer)
  double sum = deposit * ((pow((1 + interestRate), time) - 1) / interestRate);
  interestRate = (interestRate * 100) * 12;

  // introduction
  cout << "Objective: calculate accumulated money from interest\n "
          "written in this course.\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: mousepad\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  cout.setf(ios::fixed | ios::showpoint);
  cout << setprecision(2);
  cout << "In " << years << " years, $" << deposit
       << " deposited per month will grow to $" << sum << " earning "
       << interestRate << "% interest";

}  // main

// expected: 17793.03
