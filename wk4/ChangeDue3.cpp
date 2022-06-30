// Objective:  template for C++ programs and to test code
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
void validateChange(int variable, int value);

// main program

int main() {
  // user introduction
  string objective = "Objective goes here";
  string instructions = "User instructions go here";
  introduction(objective, instructions);

  // data
  ifstream fileIn;
  string line;
  int lineNumber = 0;
  int amountOwed = 0;
  int cashPaid = 0;
  fileIn.open("change.txt");
  if (!(fileIn.good()))
    throw "I/O error";

  while (fileIn.good()) {
    if (lineNumber == 0) {
      fileIn >> amountOwed;
    } else if (lineNumber == 1) {
      fileIn >> cashPaid;
    }

    lineNumber += 1;
  }
  // int amountOwed = getline(fileIn, 0); //45000
  // int cashPaid = getline(fileIn, 1); // 100000

  int totalChangeDue = cashPaid - amountOwed;  // total change due
  cout << "This amount of change due: " << totalChangeDue << "\n";
  int changeDue = totalChangeDue;
  int thousand100;  // number of $100000 bills
  int thousand10;   // number of $10000 bills
  int thousand5;    // number of $5000 bills
  int thousand;     // number of $1000 bills
  int hundred5;     // number of $500 bills
  int hundred;      // number of $100 bills
  int fifty;        // number of $50 bills
  int twenty;       // number of $20 bills
  int ten;          // number of $10 bills
  int five;         // number of $5 bills
  int two;          // number of $2 bills
  int one;          // number of $1 bills

  // calculate change due
  thousand100 = changeDue / 100000;  // number of $100,000 bills
  changeDue = changeDue % 100000;    // remainder from $100,000
  thousand10 = changeDue / 10000;    // number of $10,000 bills
  changeDue = changeDue % 10000;     // remainder from $10,000
  thousand5 = changeDue / 5000;      // number of $5,000 bills
  changeDue = changeDue % 5000;      // remainder from $5,000
  thousand = changeDue / 1000;       // number of $1,000 bills
  changeDue = changeDue % 1000;      // remainder from $1,000
  hundred5 = changeDue / 500;        // number of $100,000 bills
  changeDue = changeDue % 500;       // remainder from $100,000
  hundred = changeDue / 100;         // number of $10,000 bills
  changeDue = changeDue % 100;       // remainder from $10,000
  fifty = changeDue / 50;            // number of $100,000 bills
  twenty = changeDue / 20;
  twenty = changeDue % 20;
  changeDue = changeDue % 50;  // remainder from $100,000
  ten = changeDue / 10;        // number of $10,000 bills
  changeDue = changeDue % 10;  // remainder from $10,000
  five = changeDue / 5;        // number of $100,000 bills
  changeDue = changeDue % 5;   // remainder from $100,000
  two = changeDue / 2;         // number of $10,000 bills
  changeDue = changeDue % 2;   // remainder from $10,000
  one = changeDue / 1;         // number of $100,000 bills
  changeDue = changeDue % 1;   // remainder from $100,000

  validateChange(thousand100, 100000);
  validateChange(thousand10, 10000);
  validateChange(thousand5, 5000);
  validateChange(thousand, 1000);
  validateChange(hundred5, 500);
  validateChange(hundred, 100);
  validateChange(fifty, 50);
  validateChange(twenty, 20);
  validateChange(ten, 10);
  validateChange(five, 5);
  validateChange(two, 2);
  validateChange(one, 1);

}  // main

void validateChange(int variable, int value) {
  if (variable != 0) {
    cout << "This many $" << value << " bills needed: " << variable << "\n";
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
