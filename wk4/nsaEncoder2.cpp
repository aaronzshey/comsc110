// Objective: make a more secure encoder
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>
#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>
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
  const int SIZE = (rand() % 6) + 5;
  int offset[SIZE];
  ofstream offsetOut;
  offsetOut.open("offset.txt");
  for (int i = 0; i < SIZE; i++) {
    int temp = (rand() % 41) - 20;
    offset[i] = temp;
    offsetOut << temp << " ";
  }

  // user introduction
  string objective = "make a more secure encoder";
  string instructions = "type the name of the file to encode";
  introduction(objective, instructions);

  string line;
  string userInput;
  cout << "Type the file you want to encode: ";
  cin >> userInput;
  cin.ignore(1000, 10);

  ofstream fileOut;
  ifstream fileIn;
  fileIn.open(userInput);
  fileOut.open("secret.txt");

  while (fileIn.good()) {
    getline(fileIn, line);
    // cout << line;
    for (int i = 0; i < line.length(); i++) {
      line[i] += offset[i % SIZE];
      fileOut << line[i];
    }
  }
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

