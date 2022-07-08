// Objective:  simulate a game of the card game war
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>

// Programmer defined data types
// NONE
struct SuiteData {
  string name;
  int value;
}; //SuiteData

struct PlayingCard {
  int cardValue;
  SuiteData suite;
}; //PlayingCard

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);
string suite(int value);

// main program

int main() {
  // user introduction
  string objective = "Simulate a game of war";
  string instructions = "Indicate if you want to keep playing";
  introduction(objective, instructions);
  cout << "\n\n";
  
  char sentinel;
  do {
    cout << "Do you want to play a round? [y/n]";
    cin >> sentinel;
    cin.ignore(1000, 10);
    cout << "\n";

    srand(time(0));
    int computerSuiteV = rand() % 3;
    PlayingCard computerCard = {
        (rand() % 12) + 2, SuiteData{suite(computerSuiteV), computerSuiteV}};

    int humanSuiteV = rand() % 3;
    PlayingCard humanCard = {(rand() % 12 + 2),
                             SuiteData{suite(humanSuiteV), humanSuiteV}};

    int computerScore = computerCard.cardValue + computerCard.suite.value;

    int humanScore = humanCard.cardValue + humanCard.suite.value;

    if (humanScore < computerScore) {
      cout << "I win!\n";
    } else if (humanScore > computerScore) {
      cout << "You win!\n";
    } else if (humanScore == computerScore) {
      cout << "Play again!\n";
    }

  } while (tolower(sentinel) == 'y');
} //main


void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // introduction

string suite(int value) {
  if (value == 0) {
    return " Spades";
  } else if (value == 1) {
    return " Diamonds";
  } else if (value == 2) {
    return " Hearts";
  } else if (value == 3) {
    return " Clubs";
  } else {
    return NULL;
  }
}  // suite
