// Objective:  Simulate a MP3 shuffling music
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <deque>
#include <fstream>

#include <iostream>

using namespace std;#include <cstdlib>

#include <ctime>
 // Programmer defined data types
struct Song { string name;}

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
  string objective = "Simulate a MP3 shuffling music";
  string instructions = "press y or n";
  introduction(objective, instructions);

  ifstream songs;
  songs.open("songs.txt");
int i = 0;
deque <Song> songList;
  while(songs.good())
  {
    string temp;
    getline(songs, temp);
Song temptwo;
temptwo.name = temp;
      songList[i] = temp;
i++;
  } // while

  srand(time(0));

  while(true)
  {
    char sentinel;
    cout << "Do you want to play a song? [y/n]: ";
    cin >> sentinel;
    cin.ignore(1000, 10);
    if(tolower(sentinel) == 'y')
    {
      cout << songList[((rand() % nSongs) + 1)] << "\n";
    }
    else
    {
      break;
    }

  } // while

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
