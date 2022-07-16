// Objective: make a simple movie guessing game
// Name: Aaron Shey 2027142
// Course: COMSC-110-5003
// Compiler: g++ - GNU C and C++ compiler
// Editor: vim

// libraries
#include <fstream>
#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
// Programmer defined data types
struct Movie {
  string title;
  int year;
};

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions

int main() {
  std::ifstream movieData("movieData.txt");
  std::string li;
  int y;
const int MAX_MOVIES = 999999;
Movie morbin[MAX_MOVIES];
  
int i =0;
  while (movieData.good()) {
    if (!movieData.good()) {
      break;
    } else {
      getline(movieData, li);
      std::cout << "Title: " << li << "\n";
	out[i].title = li;
      movieData >> y;
//out[i].year = y;
      movieData.ignore(1000, 10);
      std::cout << "Release Year: " << y << "\n";
      movieData.ignore(1000, 10);
i++;
    }
  }
  return 0;
}
