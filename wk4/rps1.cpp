// Objective: play rock paper scissors
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
void introduction(string objective, string instructions);
int playerMove();
int computerMove();

// main program

int main() {
  // user introduction
  string objective = "play rock paper scissors";
  string instructions = "type r for rock, p for paper, and s for scissors and q for quit";
  introduction(objective, instructions);
  int winCounter = 0;
  int p;
  int c;
  
  while (p != 999) {
  
   p = playerMove();
   c = computerMove();
  if (c == 0) {
    cout << "Computer move: r\n";
  } else if (c == 1) {
    cout << "Computer move: p\n";
  } else if (c == 2) {
    cout << "Computer move: s\n";
  }

  if (p == 999) {
    cout << "You did something wrong, try again";
  } else {
    int status = p - c;
    if (status == 0) {
      cout << "It's a tie!\n";
    } else if (status > 0) {
      cout << "You win!\n";
      winCounter += 1;
    } else if (status < 0) {
      cout << "You lose!\n";
      winCounter -= 1;
    }
  }
  
  cout << "You have won " << winCounter << " times\n";
}//while

} // main

int playerMove() {
  cout << "type r for rock, p for paper, and s for scissors: ";
  char playerGuessRaw;
  cin >> playerGuessRaw;
  char playerGuess = tolower(playerGuessRaw);
  cout << "Your move: " << playerGuess << "\n";
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
  int temp = rand() % 2;
  return temp;
}

void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
} // introduction
