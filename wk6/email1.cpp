// Objective:  prompt the user for the input and output filenames, and output
// the user's choices Name: Aaron Shey 2027142 Course: COMSC-110-5003 Compiler:
// g++ - GNU C and C++ compiler Editor: vim

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
string getFileName(string def, string type);
// main program

int main()
{
  // user introduction
  string objective = "prompt the user for filenames";
  string instructions = "type the filenames requested";
  introduction(objective, instructions);
<<<<<<< HEAD

  //defaults
  string dFileIn = "fileContainingEmails.txt";
  string dFileOut = "copyPasteMyEmails.txt";

  //inputs
  string inName;
  string outName;

  //validation
  inName = getFileName(dFileIn, "input");
  outName = getFileName(dFileOut, "output");

=======
  
  //defaults
  string dFileIn = "fileContainingEmails.txt";
  string dFileOut = "copyPasteMyEmails.txt";
  
  //inputs
  string inName;
  string outName;
  
  //validation
  inName = getFileName(dFileIn, "input");
  outName = getFileName(dFileOut, "output");
  
>>>>>>> d555e882a56b0cccf5e8ac09faff6c1a31f3c101
  //printing
  cout << "Input file: " << inName << "\n";
  cout << "Output file: " << outName << "\n";
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

string getFileName(string def, string type)
{
  while(true)
  {
    cout << "Enter " << type << " filename [default: " << def << "]: ";

    string inp;
    getline(cin, inp);

<<<<<<< HEAD
    if(inp.length() == 0)
    {
      return def; //exit if empty
    }
    else if(inp.length() > 4 && inp.substr(inp.length() - 4, 4) != ".txt")
    {
      return inp; //otherwise keep going until valid
    }
  } //while
} //getFileName
=======
    if (inp.length() == 0) {
      return def; //exit if empty
    } else if (inp.length() > 4 && inp.substr(inp.length() - 4, 4) != ".txt") {
      return inp; //otherwise keep going until valid
    }
  }//while
}//getFileName
>>>>>>> d555e882a56b0cccf5e8ac09faff6c1a31f3c101
