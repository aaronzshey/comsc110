// Objective:  Simulate a car's odometer
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: Geany - lightweight and mature IDE for GNU

// libraries
#include <iostream>
using namespace std;

// Programmer defined data types
// NONE

// Special compiler dependent definitions
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// global constants/variables
// NONE

// Programmer defined functions
// NONE

// main program
int main() {
  // introduction
  cout << "Objective: Simulate a car's odometer";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: geany\n";
  cout << "Compiler(s) used: g++\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl;

  // Data:
  int tenths = 0;
  int ones = 0;
  int tens = 0;
  int hundreds = 0;
  int thousands = 0;
  int tensOfThousands = 0;
  int hundredsOfThousands = 0;

  for (tensOfThousands = 0; tensOfThousands < 10; thousands++) {
    for (thousands = 0; thousands < 10; thousands++) {
      for (hundreds = 0; hundreds < 10; hundreds++) {
        for (tens = 0; tens < 10; tens++) {
          for (ones = 0; ones < 10; ones++) {
            for (tenths = 0; tenths < 10; tenths++) {
              cout << hundredsOfThousands << tensOfThousands << thousands
                   << hundreds << tens << ones << tenths << "\n";
#ifdef _WIN32
              Sleep(100);  // one thousand milliseconds
#else
              sleep(0.1);  // one second
#endif
            }  // tenths
          }    // ones
        }      // tens
      }        // hundreds
    }          // thousands
  }            // tensOfThousands

}  // main
