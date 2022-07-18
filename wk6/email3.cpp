// Objective:  prompt the user for the input and output filenames, and output
// the user's choices Name: Aaron Shey 2027142 Course: COMSC-110-5003 Compiler:
// g++ - GNU C and C++ compiler Editor: vim

// libraries
#include <iostream>

#include <fstream>

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
void processLine(string lineFromFile);
void readFile(string iFileName);

bool isValidEmailChar(char c);
// main program

int main()
{
  // user introduction
  string objective = "prompt the user for filenames";
  string instructions = "type the filenames requested";
  introduction(objective, instructions);

  //defaults
  string dFileIn = "fileContainingEmails.txt";
  string dFileOut = "copyPasteMyEmails.txt";

  //inputs
  string inName;
  string outName;

  //validation
  inName = getFileName(dFileIn, "input");
  outName = getFileName(dFileOut, "output");
  //printing
  cout << "Input file: " << inName << "\n";
  cout << "Output file: " << outName << "\n";


  readFile(inName);
} // main

void introduction(string objective, string instructions)
{
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: vim\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
} // introduction

bool isValidEmailChar(char c)
{
  bool status = false;
  if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_' || c == '.' || c == '-' || c == '+') status = true;
  return status;
}

string getFileName(string def, string type)
{
  while(true)
  {
    cout << "Enter " << type << " filename [default: " << def << "]: ";

    string inp;
    getline(cin, inp);
    if(inp.length() == 0)
    {
      return def; //exit if empty
    }
    else if(inp.length() > 4 && inp.substr(inp.length() - 4, 4) == ".txt")
    {
      return inp; //otherwise keep going until valid
    }
  } //while
} //getFileName

void processLine(string lineFromFile)
{

int nEmails = 0;
  for(int i = 0; i < lineFromFile.size(); i++)
  {
    int s = 0;
    int e = 0;
    bool hasDot = false;
    int dotPos = 0;

    if(lineFromFile[i] == '@')
    {
      for(s = i - 1; s >= 0; s--)
      {
        if(!isValidEmailChar(lineFromFile[s]))
        {
          break;
        } //if
      } //loop backwards from @

      for(e = i + 1; e < lineFromFile.size(); e++)
      {
        if(lineFromFile[e] == '.')
        {
          hasDot = true;
          dotPos = e;
        }
        if(!isValidEmailChar(lineFromFile[e]))
        {
          break;
        }
      } //loop forwards from @
      s++;
      if(s < i && e > i && hasDot && dotPos > i++)
      {
        cout << lineFromFile.substr(s, e - s) << "\n";
	nEmails++;
      }
    } //if
  } //for: loop thru fileLine
 return nEmails;
} //processLine

void readFile(string iFileName)
{
  ifstream fin;
  fin.open(iFileName);
  while(fin.good())
  {
    if(!fin.good())
    {
      break;
    }
    else
    {}
    string temp;
    getline(fin, temp);
    //cout << "temp" << "\n";
        cout << "\n" << processLine(temp) << " emails found.\n";
  }
};
