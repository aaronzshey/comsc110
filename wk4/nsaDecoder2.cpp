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

  string line;
  string userInput;
  cout << "Type the file you want to decode: ";
  cin >> userInput;
  cin.ignore(1000, 10);

ifsftream offset;
offset.open("offset.txt");

while (fileIn.good()) {



}

  ifstream fileIn;
  fileIn.open(userInput);
cout << "Decoded text: ";
  while (fileIn.good()) {
    getline(fileIn, line);
    // cout << line;
    for (int i = 0; i < line.length(); i++) {
      line[i]--;
      cout << line[i];
    }
  }

}  // main
