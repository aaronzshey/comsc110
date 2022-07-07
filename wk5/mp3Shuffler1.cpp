// Objective:  Simulate a MP3 shuffling music
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>

#include <iostream>

using namespace std;#include <cstdlib>

#include <ctime>
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
  string objective = "Simulate a MP3 shuffling music";
  string instructions = "press y or n";
  introduction(objective, instructions);

  const int MAX_SIZE = 200;
  int nSongs = 0;
  string songList[MAX_SIZE];
  ifstream songs;
  songs.open("songs.txt");

  while(songs.good())
  {
    string temp;

    getline(songs, temp);
    //cout << temp << "\n";
    if(nSongs < MAX_SIZE)
    {
      songList[nSongs] = temp;
      nSongs++;
    }
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
