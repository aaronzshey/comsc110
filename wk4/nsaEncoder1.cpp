// Objective: make a simple encoder
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>
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
  // user introduction
  string objective = "make a simple encoder";
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
    //cout << line;
    for (int i = 0; i < line.length(); i++) {
      line[i]++;
      fileOut << line[i];
    }
  }

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
