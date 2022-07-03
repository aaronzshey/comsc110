// Objective: find the max min and average from file input of numbers
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
  string objective =
      "Find the min max and average from the numbers listed in a file";
  string instructions = "Type the name of the file with the numbers inside.";
  introduction(objective, instructions);

  string inName;
  cout << "Type the name of the file you want: ";
  cin >> inName;
  cin.ignore(1000, 10);

  ifstream numbersFile;
  numbersFile.open(inName);

  int size = 0;
  int* scores = new int[size];
  int temp;
  // cout << "reached here\n";

  while (numbersFile.good()) {
    numbersFile >> temp;
    numbersFile.ignore(1000, 10);
    if (!numbersFile.good()) {
      break;
    } else {
      scores[size] = temp;
      size++;
    }
  }

  cout << "The scores from the file " << inName << " are: \n";
  for (int i = 0; i < size; i++) {
    cout << scores[i] << "\n";
  }
  cout << "\n";
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (scores[i] > scores[j]) {
        int temptwo = scores[i];
        scores[i] = scores[j];
        scores[j] = temptwo;
      }
    }
  }

  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += scores[i];
  }
  double average = double(sum) / double(size);

  int aboveAverage = 0;
  for (int i = 0; i < size; i++) {
    if (scores[i] > average) {
      aboveAverage++;
    }
  }
  
  cout << "\n";
  cout << "Minimum: " << scores[0] << "\n";
  cout << "Maximum: " << scores[size - 1] << "\n";
  cout << "Average of " << size << " scores: " << average << "\n";
  cout << "Number of above average scores: " << aboveAverage << "\n";

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
