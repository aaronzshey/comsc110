// Objective:  prompt the user for the input and output filenames, and output
// the user's choices Name: Aaron Shey 2027142 Course: COMSC-110-5003 Compiler:
// g++ - GNU C and C++ compiler Editor: vim

// libraries
#include <iostream>

#include <deque>
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
bool isValidEmailChar(char c);
string getFileName(string def, string type);
int processLine(deque<string>& nonDup, string lineFromFile);
void readFile(deque<string>& nonDup, string iFileName);
void isDuplicate(deque<string>& nonDup, string aEmail);
string changeCase(string s);
void outputList(deque<string>& nonDup);

// main program
int main() {
  // user introduction
  string objective = "prompt the user for filenames";
  string instructions = "type the filenames requested";
  introduction(objective, instructions);

  // defaults
  string dFileIn = "fileContainingEmails.txt";
  string dFileOut = "copyPasteMyEmails.txt";

  // inputs
  string inName;
  string outName;

  // validation
  inName = getFileName(dFileIn, "input");
  outName = getFileName(dFileOut, "output");
  // printing
  cout << "Input file: " << inName << "\n";
  cout << "Output file: " << outName << "\n";

  deque<string> nonDup;
  readFile(nonDup, inName);
  outputList(nonDup);
} // main

void introduction(string objective, string instructions) {
  cout << "Objective: " << objective << "\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: vim\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Instructions: " << instructions << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;
} // introduction

string changeCase(string s) {
  // cout << "CASE CHANGED\n";
  string output = s;
  for (int i = 0; i < s.size(); i++) {
    output[i] = tolower(s[i]);
  }
  return output;
} // changeCase

void isDuplicate(deque<string>& nonDup, string aEmail) {
  bool isDuplicate = false;
  for (int i = 0; i < nonDup.size(); i++) {
    if (changeCase(aEmail) == changeCase(nonDup[i])) {
      isDuplicate = true;
    }
  } // for

  if (!isDuplicate) {
    nonDup.push_back(aEmail);
  } // if
//  else {cout << "dupe found\n";}
} // isDuplicate

bool isValidEmailChar(char c) {
  bool status = false;
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
      (c >= '0' && c <= '9') || c == '_' || c == '.' || c == '-' || c == '+')
    status = true;
  return status;
}

string getFileName(string def, string type) {
  while (true) {
    cout << "Enter " << type << " filename [default: " << def << "]: ";

    string inp;
    getline(cin, inp);
    if (inp.length() == 0) {
      return def; // exit if empty
    } else if (inp.length() > 4 && inp.substr(inp.length() - 4, 4) == ".txt") {
      return inp; // otherwise keep going until valid
    }
  } // while
} // getFileName

int processLine(deque<string>& nonDup, string lineFromFile) {
  int nEmails = 0;

  for (int i = 0; i < lineFromFile.size(); i++) {
    int s = 0;
    int e = 0;
    bool hasDot = false;
    int dotPos = 0;

    if (lineFromFile[i] == '@') {

      for (s = i - 1; s >= 0; s--) {
        if (!isValidEmailChar(lineFromFile[s])) {
          break;
        } // if
      }   // loop backwards from @

      for (e = i + 1; e < lineFromFile.size(); e++) {
        if (lineFromFile[e] == '.') {
          hasDot = true;
          dotPos = e;
        }
        if (!isValidEmailChar(lineFromFile[e])) {
          break;
        }
      } // loop forwards from @
      s++;
      if (s < i && e > i && hasDot && dotPos > i++) {
        string anEmail = lineFromFile.substr(s, e - s);
        // cout << lineFromFile.substr(s, e-s) << "eeee\n";
        isDuplicate(nonDup, anEmail);
        /*

        if (isdup ) {cout, add to list} {else continue}

        */
        nEmails++;
      }
    } // if
  }   // for: loop thru fileLine

  return nEmails;
} // processLine

void readFile(deque<string>& nonDup, string iFileName) {
  int totalEmails = 0;

  ifstream fin;
  fin.open(iFileName);
  while (fin.good()) {
    if (!fin.good()) {
      break;
    } else {
      string temp;
      getline(fin, temp);
      // cout << "temp" << "\n";
      totalEmails += processLine(nonDup, temp);
    }
  } // while
  cout << totalEmails << " emails found.\n";
};

void outputList(deque<string>& nonDup) {
  for (int i = 0; i < nonDup.size(); i++) {
    cout << nonDup[i] << "\n";
  }
}