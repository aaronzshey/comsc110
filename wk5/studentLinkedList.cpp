// Objective:  used linked lists with a file of strings
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: geany

//libraries
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

// Programmer defined data types
struct Student
{
  string name;
  int id;
  float gpa;
  Student* next; // the next-link
}; // Student
 
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
  string objective = "Use linked lists with a file of strings";
  string instructions = "None - everything is programmer defined";
  introduction(objective, instructions);
  // open a file for input
  ifstream fin;
  fin.open("students.txt");
  if (!fin.good()) throw "I/O error";
  int numStudents = 0;
  // create an empty linked list
  Student* start = 0;
 
  // read and save the records
  while (fin.good())
  {
    // Step 1, create a node
    Student* aStudent = new Student;

    // Step 2, read its data fields
    getline (fin, aStudent->name);

    fin >> aStudent->id;
    fin.ignore(1000, 10);
 
    fin >> aStudent->gpa;
    fin.ignore(1000, 10);
 
    fin.ignore(1000, 10); // skip the separator line

    // Step 3, add new node to the list
    aStudent->next = start;
    start = aStudent;
    numStudents++;
  }
  fin.close();
  cout << "\nNumber of students: " << numStudents << "\n";

  // traverse the list and output
  Student* p;
  for (p = start; p; p = p->next)
  {
    cout << "Name = " << left << setw(30) << p->name;
    cout.fill('0'); 
    cout << " ID = " << right << setw(7) << p->id
      << ", gpa = " << p->gpa << endl;
    cout.fill(' '); 
  }
  
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

