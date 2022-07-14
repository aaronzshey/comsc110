// Objective: make a simple movie guessing game 
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>
#include <iostream>
using namespace std;

// Programmer defined data types
struct Movie {string title; int year;};

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);
void inputMovies();
void askMovie();

// main program

int main() {
  // user introduction
  string objective = "make a simple movie guessing game";
  string instructions = "type the year you think the film was released";
  introduction(objective, instructions);


deque <Movie> inputMovies();

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

void inputMovies() {
int i = 0;
deque <Movie> output;
  ifstream movieData;
  movieData.open("movieData.txt");

  while (movieData.good()) {
    if (!movieData.good()) {
      break;
    } else {
      getline(movieData, output[i].title);
      movieData >> output[i].year;
      movieData.ignore(1000, 10);
      movieData.ignore(1000, 10);
	i++;
      //cout << name << ": " << year << "\n";
    }
  }

return output;
}
