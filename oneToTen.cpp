// Objective:  Make a simple number guessing game
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: Geany - lightweight and mature IDE for GNU

// libraries
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
// NONE

// main program
int main() {
  // introduction
  cout << "Objective: Make a simple number guessing game\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: mousepad\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
  // Data
  srand(time(0));  // seeds with time since unix epoch
  int myNumber = 1 + (rand() % 10);
  int guess;

  while (true) {
    guess = 0;
    cout << "I'm thinking of a number from 1 to 10." << endl;
    cin >> guess;
    cin.ignore(256, 10);

    if (guess == myNumber) {
      cout << "You guessed it!\n";
      cout << "Thanks for playing!\n";
      break;
    } else if (guess > 10 || guess < 1) {
      cout << "Type a number from 1 to 10\n\n";
      continue;
    } else if (guess != myNumber) {
      cout << "Try again! \n";
      continue;
    }
  }

}  // main
