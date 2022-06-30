// Objective: Prompt the user to input 4 numbers between 0 and 100, and
// calculate the average of those 4 numbers, and how many of those 4
// numbers are above the average.
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
  const int count = 4;
  int numbers[count];
  int i = 0;
  int input = 0;
  for (i = 0; i < count; i++) {
    cout << "Type a number [0-100]: ";
    cin >> input cin.ignore(1000, 10);
    if (input > 100 || input < 0) {
      cout << "Make sure your number is between 0 and 100 \n";
i--;
    } else {
      numbers[i] = input;
    }
  }

  int j = 0;
  int sum = 0;
  for (j = 0; j < count; j++) {
    sum += numbers[j];
  }

  int average = double(sum) / double(count);

  int k = 0;
  int numGreater = 0;
  for (k = 0; k < count; k++) {
    if (numbers[k] > average) {
      numGreater++;
    }
  }

  cout << "The average of the numbers you typed in is " << average << "\n";
  cout << numGreater << " numbers are greater than the average.\n";

  // user introduction
  string objective = "Objective goes here";
  string instructions = "User instructions go here";
  introduction(objective, instructions);

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
