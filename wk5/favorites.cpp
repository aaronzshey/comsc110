// Objective: use structs with arrays
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>
#include <iostream>
using namespace std;

// Programmer defined data types
struct Favorites {
  string movie;
  string song;
  string food;
  string sport;
  string show;
  string book;
  string place;
}



// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);

// main program

int main() {
  // user introduction
  string objective = "Objective goes here";
  string instructions = "User instructions go here";
  introduction(objective, instructions);

  const int SIZE = 2;

  string whoAreYou[SIZE];

  Favorites people[SIZE];

  ifstream favData;

  favData.open("favoritesData.txt");

  int counter = 0;

  while (favData.good()) {
    getline(favData, people[counter].movie);
    getline(favData, people[counter].song);
    getline(favData, people[counter].food);
    getline(favData, people[counter].sport);
    getline(favData, people[counter].show);
    getline(favData, people[counter].book);
    getline(favData, people[counter].place);
favData.ignore(1000,10);

counter++;
if (counter > SIZE) {
      break;
}
  }

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
