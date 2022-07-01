// Objective: input number of scores to be input, then input that many
// scores, calculate the maximum score, average score, minimum score, and
// how many A grade scores.
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

// main program

int main() {
  int count;
  cout << "How many scores? \n";
  cin >> count;
  cin.ignore(1000, 10);
  int* scores = new int[count];

  int k;
  int inp;
  for (k = 0; k < count; k++) {
    cout << "Enter a score between 0 and 100: \n";
    cin >> inp;
    cin.ignore(1000, 10);
    if (inp > 100 || inp < 0) {
      cout << "Make sure your number is between 0 and 100 \n";
      k--;
    } else {
      scores[k] = inp;
    }
  }

  int i;
  int j;
  for (i = 0; i < count; i++) {
    for (int j = i + 1; j < count; j++) {
      if (scores[i] > scores[j]) {
        int temp = scores[i];
        scores[i] = scores[j];
        scores[j] = temp;
      }
    }
  }

  int h = 0;
  int sum = 0;
  for (h = 0; h < count; h++) {
    sum += scores[h];
  }
cout << sum;
cout << count;
  double average = double(sum) / double(count);

  int l = 0;
  int numAs = 0;
  for (l = 0; l < count; l++) {
    if (scores[l] > 89) {
      numAs++;
    }
  }
  cout << "Sorted: ";
  int m = 0;
  for (m = 0; m < count; m++) {
    cout << scores[m] << " ";
  }
  cout << "\n";
  cout << "Minimum: " << scores[0] << "\n";
  cout << "Maximum: " << scores[count - 1] << "\n";
  cout << "Average: " << average << "\n";
  cout << "Number of 'A' grades: " << numAs << "\n";

  // user introduction
  string objective = "analyze the input of scores";
  string instructions = "type the number and value of the scores";
  introduction(objective, instructions);

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
