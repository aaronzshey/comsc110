// Objective: learn how to use objects 
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <iostream>
using namespace std;

// Programmer defined data types
struct Student {
    string name;
    string address;
    string city;
    string state;
    int zip;
    char gender;
    int id;
    double gpa;
}

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);
Student getStudent(Student& genericObject);
// main program

int main() {
  // user introduction
  string objective = "
  string instructions = "User instructions go here";
  introduction(objective, instructions);

Student me;
Student myself;
Student eye;



}  // main

Student getStudent(Student& genericObject);

void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
}  // introduction
