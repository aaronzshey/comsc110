// Objective: make a simple mortgage calculator with file and console input
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>

#include <iostream>

using namespace std;#include <cmath>

// Programmer defined data types
struct MortgageValues
{
  double amountBorrowed; // p
  double interestRate; // r
  double numOfPayments; // n
};

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
void introduction(string objective, string instructions);
void getPassword();
// main program

int main()
{
  getPassword();
  // user introduction
  string objective =
    "make a simple mortgage calculator with file and console input";
  string instructions =
    "type the name of the file with your amount borrowed first and interest "
  "rate second, separated by paragraph breaks";
  introduction(objective, instructions);

  MortgageValues m;
  string fileName;
  ifstream fin;
  cout << "Type the name of the file with the mortgage values inside: ";
  cin >> fileName;
  cin.ignore(1000, 10);

  fin.open(fileName);

  if (!fin.good())
  {
    throw "i/o err";
  } //if 
  m.numOfPayments = 30 * 12;
  fin >> m.amountBorrowed;
  fin.ignore(1000, 10);
  fin >> m.interestRate;
  fin.ignore(1000, 10);

  double payment = (m.amountBorrowed * (m.interestRate / 12.0) *
      pow((1 + (m.interestRate / 12.0)), m.numOfPayments)) /
    (pow((1 + (m.interestRate / 12.0)), m.numOfPayments) - 1);

  cout << "\nAmount borrowed: $" << m.amountBorrowed << "\n";
  cout << "Annual interest rate: " << m.interestRate * 100 << "% \n";
  cout << "Payback period: " << m.numOfPayments << " months \n";
  cout << "Monthly payment: $" << payment << "\n";

} // main

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


void getPassword()
{
  while (true)
  {
    string password;
    cout << "Enter the password: ";
    getline(cin, password);

    if (password == "2027142") break;
    cout << "INVALID. ";
  } // while 
} // getPassword 
