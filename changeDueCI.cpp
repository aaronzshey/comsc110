// Objective:  calculate change due in a transaction using these U.S. bills:
// no cents: $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and
// $100000 bills. Name: Aaron Shey 2027142 Course: COMSC-110-5003 Compiler: g++
// - GNU C and C++ compiler Editor: Geany - lightweight and mature IDE for GNU

#include <iostream>
using namespace std;

// Programmer defined data types
// NONE

// Special compiler dependent definitions
// NONE

// global constants/variables
// NONE

// Programmer defined functions
// NONE

// main program
int main() {
  // data
  int amountOwed; //= 45000;                      // amount owed
  int cashPaid; //= 100000;                       // amount paid
  cout << "Enter how much you owe: ";
  cin >> amountOwed;
  cin.ignore(1000,10);
  cout << "Enter how much you paid: ";
  cin >> cashPaid;
  cin.ignore(1000,10);
  
  int totalChangeDue = cashPaid - amountOwed;  // total change due
  int changeDue = totalChangeDue;
  int thousand100;  // number of $100000 bills
  int thousand10;   // number of $10000 bills
  int thousand5;    // number of $5000 bills
  int thousand;     // number of $1000 bills
  int hundred5;     // number of $500 bills
  int hundred;      // number of $100 bills
  int fifty;        // number of $50 bills
  int twenty;       // number of $20 bills
  int ten;          // number of $10 bills
  int five;         // number of $5 bills
  int two;          // number of $2 bills
  int one;          // number of $1 bills

  // output user introduction
  cout << "Objective: calculate change due in a transaction using these U.S. "
          "bills - no cents: \n $1, $2, $5, $10, $20, $50, $100, $500, $1000, "
          "$5000, $10000, and $100000 bills.\n";
  cout << "Programmer: Aaron\n";
  cout << "Editor(s) used: Geany\n";
  cout << "Compiler(s) used: gcc\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;

  // calculate change due
  thousand100 = changeDue / 100000;  // number of $100,000 bills
  changeDue = changeDue % 100000;    // remainder from $100,000
  thousand10 = changeDue / 10000;    // number of $10,000 bills
  changeDue = changeDue % 10000;     // remainder from $10,000

  thousand5 = changeDue / 5000;  // number of $5,000 bills
  changeDue = changeDue % 5000;  // remainder from $5,000
  thousand = changeDue / 1000;   // number of $1,000 bills
  changeDue = changeDue % 1000;  // remainder from $1,000
  hundred5 = changeDue / 500;    // number of $100,000 bills
  changeDue = changeDue % 500;   // remainder from $100,000
  hundred = changeDue / 100;     // number of $10,000 bills
  changeDue = changeDue % 100;   // remainder from $10,000
  fifty = changeDue / 50;        // number of $100,000 bills
  twenty = changeDue / 20;
  twenty = changeDue % 20;
  changeDue = changeDue % 50;  // remainder from $100,000
  ten = changeDue / 10;        // number of $10,000 bills
  changeDue = changeDue % 10;  // remainder from $10,000
  five = changeDue / 5;        // number of $100,000 bills
  changeDue = changeDue % 5;   // remainder from $100,000
  two = changeDue / 2;         // number of $10,000 bills
  changeDue = changeDue % 2;   // remainder from $10,000
  one = changeDue / 1;         // number of $100,000 bills
  changeDue = changeDue % 1;   // remainder from $100,000

  //***you figure out what goes here***

  // output calculated change due for each kind of monetary demonination
  cout << "Amount owed: " << amountOwed << endl;
  cout << "Cash paid: " << cashPaid << endl;
  cout << "Total change due: " << totalChangeDue << endl;
  cout << "this many $100,000 bills: " << thousand100 << endl;
  cout << "this many $10,000 bills: " << thousand10 << endl;
  cout << "this many $5,000 bills: " << thousand5 << endl;
  cout << "this many $1,000 bills: " << thousand << endl;
  cout << "this many $500 bills: " << hundred5 << endl;
  cout << "this many $100 bills: " << hundred << endl;
  cout << "this many $50 bills: " << fifty << endl;
  cout << "this many $20 bills: " << twenty << endl;
  cout << "this many $10 bills: " << ten << endl;
  cout << "this many $5 bills: " << five << endl;
  cout << " this many $2 bills: " << two << endl;
  cout << " this many $1 bills: " << one << endl;
}
