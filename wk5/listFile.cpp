// Objective:  read and sort scores from a file
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

int main() 
{ 
  // user introduction
  string objective = "read and sort scores from a file";
  string instructions = "None - everything is programmer defined";
  introduction(objective, instructions);
  
  // open a file for input 
  ifstream fin; 
  fin.open("scores2.txt"); 
  if (!fin.good()) throw "I/O error"; 
  
  // create an empty list 
  const int MAX_SCORES = 100; // capacity 
  int nScores = 0; // initially empty 
  int score[MAX_SCORES]; 
  
  // read and save the scores 
  while (fin.good()) 
  { 
    // read a score from the file 
    int aScore; 
    fin >> aScore; 
    fin.ignore(1000, 10); 
  
    // save score to list, if not full 
    if (nScores < MAX_SCORES && (aScore <= 100 && aScore >= 0)) score[nScores++] = aScore; 
      
  } // while 
  fin.close(); 
  
  //sort:   
  for (int i = 0; i < nScores; i++) 
  {
    for (int j = i + 1; j < nScores; j++) 
    { 
      if (score[i] > score[j]) 
      { 
        // swap code 
        int temp = score[i]; 
        score[i] = score[j];   
        score[j] = temp; 
      } // if 
    } // for 
  } // for 
  
  
  // output scores in lo-to-hi order
  for (int i = 0; i < nScores; i++) 
    cout << score[i] << ' \n'; 
}//main

void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // introduction
