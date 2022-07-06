// Objective: learn how to use objects
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>

#include <iostream>

using namespace std;

// Programmer defined data types
struct Student
{
  string name;
  string address;
  string city;
  string state;
  int zip;
  char gender;
  int id;
  double gpa;
};

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);
Student getStudent(Student & genericObject);
void printStudent(Student & genericObject);
// main program

int main()
{
  // user introduction
  string objective = "learn how to use objects";
  string instructions = "User instructions go here";
  introduction(objective, instructions);

  Student me;
  Student myself;
  Student eye;

  me = getStudent(me);
  myself = getStudent(myself);
  eye = getStudent(eye);

  cout << "\n\n\n\n\n\n";

  printStudent(me);
  printStudent(myself);
  printStudent(eye);
} // main

Student getStudent(Student & genericObject)
{
  cout << "Enter Student Information: \n";
  cout << " Name: ";
  getline(cin, genericObject.name);
  cout << " City: ";
  getline(cin, genericObject.city);
  cout << " State: ";
  getline(cin, genericObject.state);
  cout << " ZIP Code: ";
  cin >> genericObject.zip;
  cin.ignore(1000, 10);
  cout << " Gender [M/F]: ";
  cin >> genericObject.gender;
  cin.ignore(1000, 10);
  cout << " Student ID: ";
  cin >> genericObject.id;
  cin.ignore(1000, 10);
  cout << " GPA: ";
  cin >> genericObject.gpa;
  cin.ignore(1000, 10);

  genericObject.address = genericObject.city + ", " + genericObject.state +
    ", " + to_string(genericObject.zip);

  return genericObject;
} //getStudent

void printStudent(Student & genericObject)
{
  cout << "Student Information: \n";
  cout << " Name: ";
  cout << genericObject.name;
  cout << "\n";
  cout << " Adress: ";
  cout << genericObject.address;
  cout << "\n";
  cout << " Gender: ";
  cout << genericObject.gender;
  cout << "\n";
  cout << " Student ID: ";
  cout << genericObject.id;
  cout << "\n";
  cout << " GPA: ";
  cout << genericObject.gpa;
  cout << "\n";
} //printStudent

void introduction(string objective, string instructions)
{
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
} // introduction
