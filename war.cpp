#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>

int main() {
  srand(time(0));
  int computerValue = (rand() % 12) + 2;
  int computerSuite = rand() % 3;
  int computerScore = computerValue + computerSuite;

  cout << "Computer's card is a ";
  // computer
  if (computerValue == 11) {
    cout << "Jack ";
  } else if (computerValue == 12) {
    cout << "Queen ";
  } else if (computerValue == 13) {
    cout << "King ";
  } else if (computerValue == 14) {
    cout << "Ace ";
  } else {
    cout << computerValue << " ";
  }
  cout << "of";

  if (computerSuite == 0) {
    cout << " Spades";
  } else if (computerSuite == 1) {
    cout << " Diamonds";
  } else if (computerSuite == 2) {
    cout << " Hearts";
  } else if (computerSuite == 3) {
    cout << " Clubs";
  }
  cout << "\n\n";

  int humanValue = (rand() % 12) + 2;
  int humanSuite = rand() % 3;
  int humanScore = humanValue + humanSuite;

  cout << "Human's card is a ";
  // computer
  if (humanValue == 11) {
    cout << "Jack ";
  } else if (humanValue == 12) {
    cout << "Queen ";
  } else if (humanValue == 13) {
    cout << "King ";
  } else if (humanValue == 14) {
    cout << "Ace ";
  } else {
    cout << humanValue << " ";
  }
  cout << "of";

  if (humanSuite == 0) {
    cout << " Spades";
  } else if (humanSuite == 1) {
    cout << " Diamonds";
  } else if (humanSuite == 2) {
    cout << " Hearts";
  } else if (humanSuite == 3) {
    cout << " Clubs";
  }
  cout << "\n\n";

  if (humanScore < computerScore) {
    cout << "I win!";
  } else if (humanScore > computerScore) {
    cout << "You win!";
  } else if (humanScore == computerScore) {
    cout << "Play again!";
  }
}
