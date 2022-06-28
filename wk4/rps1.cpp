// Objective: play rock paper scissors
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: Geany - lightweight and mature IDE for GNU

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
int introduction(string objective, string instructions);
int playerMove();
int computerMove();

// main program

int main() {
  // user introduction
  string objective = "play rock paper scissors";
  string instructions = "type r for rock, p for paper, and s for scissors";
  introduction(objective, instructions);
if (playerMove() == 999) {
cout << "You did something wrong, try again";
} else {

int status = playerMove() - computerMove();
if (status == 0) {
cout << "It's a tie!\n";
} else if (status > 0) {
cout << "You win!\n";
} else if (status < 0) {

}

}

}  // main

int playerMove() {
  cout << "type r for rock, p for paper, and s for scissors";
  char playerGuessRaw;
  cin << playerGuessRaw;
  char playerGuess = tolower(playerGuessRaw);
  if (playerGuess == 'r') {
    return 0;
  } else if (playerGuess == 'p') {
    return 1;

  } else if (playerGuess == 's') {
    return 2;
  } else {
    return 999;
  }
}

int computerMove() {
  srand(time(0));
  return (rand() % 2);
}

int introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // introduction
