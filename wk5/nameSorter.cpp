// Objective:  read and sort names from a file
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
  string objective = "read and sort names from a file";
  string instructions = "Type the name of the file in question";
  introduction(objective, instructions);

  const int MAX_NAMES = 5;
  int nNames = 0;
  string nameList[MAX_NAMES];

  string loc;
  ifstream friendsFile;
  cout << "Type the name of the file containing your friends: ";
  getline(cin, loc);
  friendsFile.open(loc);

  string temp;
  // read the values from file
  while(friendsFile.good())
  {
    getline(friendsFile, temp);
    int sentinel = 1;

    if(temp.length() == 0)
    {
      continue;
    }
    else
    {
      for(int i = 0; i < nNames; i++)
      {
        if(temp == nameList[i])
        {
          sentinel = 2;
        }
      } // for

      if(sentinel != 2 && nNames < MAX_NAMES)
      {
        // cout << "\n" << temp << "\n";
        nameList[nNames++] = temp;
      } // if

    } // else

  } // while

  string lowercaseNames[nNames];

  // convert everything to lowercase
  for(int i = 0; i < nNames; i++)
  {
    for(int j = 0; j < nameList[j].length() + 1; j++)
    {
      lowercaseNames[i] += tolower(nameList[i][j]);
    }
  }

  // sort
  for(int i = 0; i < nNames; i++)
  {
    for(int j = i + 1; j < nNames; j++)
    {
      if(lowercaseNames[i] > lowercaseNames[j])
      {
        // swap code
        string tTemp = nameList[i];
        nameList[i] = nameList[j];
        nameList[j] = tTemp;
      } // if
    } // for
  } // for

  for(int i = 0; i < nNames; i++)
  {
    cout << nameList[i] << "\n";
  }

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
