// Objective: calculate how long it will take to earn x amount of money
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim 

// libraries
#include <iostream>
#include <iomanip>
using namespace std;

// Programmer defined data types
// NONE

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);
void isAire(int wealth, string type);

// main program

int main() {
  // user introduction
  string objective = "calculate how long it will take to earn x amount of money";
  string instructions = "no instructions necessary";
  introduction(objective, instructions);
  isAire(1000, "thousandaire");
  isAire(1000000, "millionaire");
  isAire(1000000000, "billionaire");
  

}  // main

void isAire(int wealth, string type) {
cout.setf(ios::fixed);
  cout << setprecision(0);
  double i = 1;
  double amount = 0;
  int time = 0;
  for (i = 1; i < wealth; i *= 2) {
    time++;
    amount += i * 5;
    if (amount >= wealth) {
      cout << "In " << time << " weeks you will be a " << type << "\n";
      break;
  }}
}

void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // introduction




