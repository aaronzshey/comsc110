// Objective:  use linked lists with a file
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: mousepad

// libraries
#include <fstream>
#include <iostream>
using namespace std;

// Programmer defined data types
struct Score
{
  int score;
  Score * next;
};

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);

int main()
{
  ifstream fin;
  fin.open("scores.txt");
  if(!fin.good()) throw "I/O error";

  // create an empty list 
  Score* start = 0;


  // read and save the scores 
  while(fin.good())
  {
    // read a score from the file 
    Score* aScore = new Score;
    fin >> aScore -> score;
    aScore -> next = start;
    start = aScore;
  } // while 
  fin.close();

  int count = 0; // to count the number of nodes in the list
  int sum = 0; // to accumulate the total of all scores
  Score* p;
  int max = 0;
  int min = 999;
  int numAboveAverage = 0;

  for(p = start; p; p = p -> next)
  {
    if(p -> score > max)
    {
      max = p -> score;
    }

    if(p -> score < min)
    {
      min = p -> score;
    }
    sum += p -> score;
    count++;
  }//for
  double average = double(sum) / double(count);
  Score* k;
  for(k = start; k; k = k -> next)
  {
    if(k -> score > average)
    {
      numAboveAverage++;
    }//if
  }//for

  cout << "Maximum: " << max << "\n";
  cout << "Minimum: " << min << "\n";
  cout << "Scores above average: " << numAboveAverage << "\n";
  cout << "The average of " << count << " scores is " << average << endl;

  // user introduction
  string objective = "use linked lists with a file";
  string instructions = "None; everything has been programmer defined";
  introduction(objective, instructions);
} // main 

void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // introduction
