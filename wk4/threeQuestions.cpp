// Objective: make a simple quiz
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

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
bool quizQuestions(string question, char answer);
// main program

int main() {
  int score = 0;
  // user introduction
  string objective = "make a simple quiz";
  string instructions = "type a single character as indicated for your answer";
  introduction(objective, instructions);
  if (quizQuestions(
          "the integer data type can hold an infinite number of values [t/f]",
          'f'))
    score++;
  if (quizQuestions("boolean can have a) one b) two c) three different values",
                    'b'))
    score++;
  if (quizQuestions("hexadecimal means base a) 16 b) 17 c) 18", 'a'))
    score++;
  cout << "You got " << score << "out of 3 correct.";
}  // main

bool quizQuestions(string question, char answer) {
  cout << question << "\n";
  char userGuess;
  cin >> userGuess;

  if (userGuess == answer) {
    cout << "Correct!\n";
    return true;
  } else {
    cout << "Incorrect!\n";
    return false;
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
