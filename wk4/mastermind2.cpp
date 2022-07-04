#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;

int randColor(int randNumber) {
  if (randNumber == 0) {
    return 'R';
  } else if (randNumber == 1) {
    return 'G';
  } else if (randNumber == 2) {
    return 'B';
  } else if (randNumber == 3) {
    return 'Y';
  } else {
	  return 'Q';
	  }
}

int main() {
  int numOfR = 0;
  int numOfG = 0;
  int numOfY = 0;
  int numOfB = 0;

  srand(time(0));
  char color1 = randColor(rand() % 4);
  char color2 = randColor(rand() % 4);
  char color3 = randColor(rand() % 4);
  char color4 = randColor(rand() % 4);
  

ofstream scoresFile;
scoresFile.open("mastermind-scores.txt");

  
  if (color1 == 'R' || color2 == 'R' || color3 == 'R' || color4 == 'R') {
 numOfR++;	  
} else if (color1 == 'Y' || color2 == 'Y' || color3 == 'Y' || color4 == 'Y') {
	numOfY++;
	} else if (color1 == 'G' || color2 == 'G' || color3 == 'G' || color4 == 'G') {
	numOfG++; 
	} else if (color1 == 'B' || color2 == 'B' || color3 == 'B' || color4 == 'B') { 
	numOfB++;
	}
  //
  cout << color1 << color2 << color3 << color4;
  int numberOfGuesses = 0;

  for (numberOfGuesses = 0; numberOfGuesses < 10; numberOfGuesses++) {
    int correct = 0;
    char userGuess1;
    char userGuess2;
    char userGuess3;
    char userGuess4;
    cout << "Type your guess for the first position [R,G,B,Y]: ";
    cin >> userGuess1;
    cout << "Type your guess for the second position [R,G,B,Y]: ";
    cin >> userGuess2;
    cout << "Type your guess for the third position [R,G,B,Y]: ";
    cin >> userGuess3;
    cout << "Type your guess for the fourth position [R,G,B,Y]: ";
    cin >> userGuess4;
    
    //quit:
      if (userGuess1 == 'Q' || userGuess2 == 'Q' || userGuess3 == 'Q' || userGuess4 == 'Q') {
	  cout << "Thanks for playing!";
	  break;
	  }
	  
    // direct matches
    if (toupper(userGuess1) == color1) {
      cout << 'B';
      correct++;
    } 
    if (toupper(userGuess2) == color2) {
      cout << 'B';
      correct++;
    } 
     if (toupper(userGuess3) == color3) {
      cout << 'B';
      correct++;
    } 
     if (toupper(userGuess4) == color4) {
      cout << 'B';
      correct++;
    }
//correct
    if (correct == 4) {
      cout << "\nYou guessed the code in " << numberOfGuesses + 1 << " tries!";
scoresFile >> numberOfGuesses + 1 << "\n";

      break;

    }

    // red
    if ((toupper(userGuess1) == 'R') && numOfR > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess2) == 'R' && numOfR > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess3) == 'R' && numOfR > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess4) == 'R' && numOfR > 0) {
      cout << 'W';
    }
    
    // green
    if ((toupper(userGuess1) == 'G') && numOfG > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess2) == 'G' && numOfG > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess3) == 'G' && numOfG > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess4) == 'G' && numOfG > 0) {
      cout << 'W';
    }
    
    // blue
    if ((toupper(userGuess1) == 'B') && numOfB > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess2) == 'B' && numOfB > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess3) == 'B' && numOfB > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess4) == 'B' && numOfB > 0) {
      cout << 'W';
    }
    
    // yellow
    if ((toupper(userGuess1) == 'Y') && numOfY > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess2) == 'Y' && numOfY > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess3) == 'Y' && numOfY > 0) {
      cout << 'W';
    } 
     if (toupper(userGuess4) == 'Y' && numOfY > 0) {
      cout << 'W';
    }
  }
}
