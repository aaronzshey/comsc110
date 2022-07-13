// Objective:  prompt the user for the input and output filenames, and output
// the user's choices Name: Aaron Shey 2027142 Course: COMSC-110-5003 Compiler:
// g++ - GNU C and C++ compiler Editor: vim

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
  // user introduction
  string objective = "prompt the user for filenames";
  string instructions = "type the filenames requested";
  introduction(objective, instructions);
  string dFileIn = "fileContainingEmails.txt";
  string dFileOut = "copyPasteMyEmails.txt";

  string inName;
  string outName;
  cout << "Enter input filename [default: fileContainingEmails.txt]: ";
  getline(cin, inName);
  cout << "Enter output filename [default: copyPasteMyEmails.txt]: ";
  getline(cin, outName);

  if (inName == "") {
    inName = dFileIn;
  }

  if (outName == "") {
    outName = dFileOut;
  }

  cout << "Input file: " << inName << "\n";
  cout << "Output file: " << outName << "\n";
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
