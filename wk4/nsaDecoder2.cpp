// Objective: make a more complicated decoder
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
  string objective = " make a more secure decoder";
  string instructions = "type in the name of the file you want to decode.";
  introduction(objective, instructions);

  string userInput;
  cout << "Type the file you want to decode: ";
  cin >> userInput;
  cin.ignore(1000, 10);

  int size = 0;
  int* offsets = new int[size];
  ifstream offsetFile;
  offsetFile.open("offset.txt");

  int temp;
  while (offsetFile.good()) {
    offsetFile >> temp;

    if (!offsetFile.good()) {
      break;
    } else {
      // offsetFile >> offsets[size];
      offsets[size] = temp;
      size++;
    }
  }

  string line;
  ifstream fileIn;
  fileIn.open(userInput);
  cout << "Decoded text: ";
  while (fileIn.good()) {
    getline(fileIn, line);
    for (int i = 0; i < line.length(); i++) {
      line[i] -= offsets[i % size];
      cout << line[i];
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
