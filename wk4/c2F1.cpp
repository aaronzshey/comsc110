// Objective:  template for C++ programs and to test code
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>
#include <iomanip>
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
double CtoF(double C);
// main program

int main() {
  // user introduction
  string objective = "Objective goes here";
  string instructions = "User instructions go here";
  introduction(objective, instructions);
  double tempInCelsius;
  ifstream fileIn;
  fileIn.open("temps.txt");
  if (!(fileIn.good()))
    throw "I/O error";

  while (fileIn.good()) {
    cout << setprecision(6);
    cout.unsetf(ios::fixed | ios::showpoint);

    fileIn >> tempInCelsius;
    if (tempInCelsius == -999 || !fileIn.good()) {
      break;
    } else {
      cout << tempInCelsius << " Celsius equals ";
      cout.setf(ios::fixed | ios::showpoint);

      cout << setprecision(1);
      cout << CtoF(tempInCelsius) << " Fahrenheit\n";
    }
  }

}  // main

double CtoF(double C) {
  return (9.0 / 5.0) * C + 32.0;
}

void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: vim\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // introduction
