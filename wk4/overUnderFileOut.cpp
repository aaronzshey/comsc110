// Objective:  Make a simple guessing game where the user receives input about
// the quality of their guess. Name: Aaron Shey 2027142 Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: Geany - lightweight and mature IDE for GNU

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
// NONE

// main program
int main() {
  // introduction
  cout << "Objective: Make a simple guessing game where the user receives "
          "input about the quality of their guess.";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: mousepad\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;

  // Data
  srand(time(0));  // seeds with time since unix epoch
  int myNumber = 1 + (rand() % 100);
  int guess;
  int score = 0;
  while (true) {
    cout << "Type a number between 1-100: " << endl;
    cin >> guess;
    cin.ignore(256, 10);
    score++;
    if (guess == 999) {
      break;
    } else if (guess == myNumber) {
      cout << "You guessed it!\n";
      ofstream fileOut;
      fileOut.open("score.txt");
      fileOut << "Player took " << score
              << " guesses to guess the correct number.\n";
      break;
    } else if (guess > myNumber) {
      cout << "That's too high" << endl;
      continue;
    } else if (guess < myNumber) {
      cout << "That's too low" << endl;
      continue;
    }
  }

}  // main
