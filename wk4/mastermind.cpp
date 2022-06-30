#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  srand(time(0));
  char color1 = randColor(rand() % 3);
  char color2 = randColor(rand() % 3);
  char color3 = randColor(rand() % 3);
  char color4 = randColor(rand() % 3);
  int numberOfGuesses = 0;

  for (numberOfGuesses = 0; numberOfGuesses < 10; numberOfGuesses++) {
    char userGuess
  }
}

int randColor(int randNumber) {
  if (randNumber == 0) {
    return 'R';
  } else if (randNumber == 1) {
    return 'G';
  } else if (randNumber == 2) {
    return 'B';
  } else if (randNumber == 3) {
    return 'Y';
  }
}
