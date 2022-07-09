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
};

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);
void outputRecord(Favorites *obj, string* per, int n);
//  main program

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
  // store the data
  while (favData.good()) {
    getline(favData, people[counter].movie);
    getline(favData, people[counter].song);
    getline(favData, people[counter].food);
    getline(favData, people[counter].sport);
    getline(favData, people[counter].show);
    getline(favData, people[counter].book);
    getline(favData, people[counter].place);
    favData.ignore(1000, 10);
    counter++;
  }

  for (int i = 0; i < SIZE; i++) {
    cout << "favorite movie:" << people[i].movie << "\n";
    cout << "favorite song:" << people[i].song << "\n";
    cout << "favorite food:" << people[i].food << "\n";
    cout << "favorite sport:" << people[i].sport << "\n";
    cout << "favorite show:" << people[i].show << "\n";
    cout << "favorite book:" << people[i].book << "\n";
    cout << "favorite place:" << people[i].place << "\n";
    cout << "Who do you think this is?: ";
    getline(cin, whoAreYou[i]);
  }
cout << "\n\n";
outputRecord(people, whoAreYou, SIZE);


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

void outputRecord(Favorites *obj, string* per, int n) {

for (int j = 0; j < n; j++) {

cout << "Person #" << j+1 << ": " << per[j] << "\n";

    cout << "favorite movie: " << obj[j].movie << "\n";
    cout << "favorite song: " << obj[j].song << "\n";
    cout << "favorite food: " << obj[j].food << "\n";
    cout << "favorite sport: " << obj[j].sport << "\n";
    cout << "favorite show: " << obj[j].show << "\n";
    cout << "favorite book: " << obj[j].book << "\n";
    cout << "favorite place: " << obj[j].place << "\n";
}

}//outputRecord
