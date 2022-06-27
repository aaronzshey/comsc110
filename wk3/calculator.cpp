// Objective: A basic four function calculator
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: Geany - lightweight and mature IDE for GNU

#include <iostream>
using namespace std;

// while input
// get firstNumber
// get secondNumber
// get operation
// cout the calculation
// get sentinel

int main() {
  cout << "Objective: A basic four function calculator";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  double firstNumber;
  double secondNumber;
  char operation;
  char sentinel = 'y';

  while (tolower(sentinel) == 'y') {
    cout << "Type a number: \n";
    cin >> firstNumber;
    cin.ignore(1000, 10);
    cout << "Type another number: \n";
    cin >> secondNumber;
    cin.ignore(1000, 10);
    cout << "Type the operation you want [+,-,/,*]: \n";
    cin >> operation;
    cin.ignore(1000, 10);

    if (operation == '+') {
      cout << firstNumber + secondNumber << "\n";
    } else if (operation == '-') {
      cout << firstNumber - secondNumber << "\n";
    } else if (operation == '/') {
      cout << firstNumber / secondNumber << "\n";
    } else if (operation == '*') {
      cout << firstNumber * secondNumber << "\n";
    }

    cout << "Would you like to perform another calculation? [y/n]: \n";
    cin >> sentinel;
    cin.ignore(1000, 10);
  }
}
