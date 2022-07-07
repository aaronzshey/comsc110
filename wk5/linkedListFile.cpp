#include <fstream> 
#include <iostream> 
using namespace std; 

struct Score {
int score;
  Score* next;
}



int main() 
{ 
  ifstream fin; 
  fin.open("scores.txt"); 
  if (!fin.good()) throw "I/O error"; 
  
  // create an empty list 
  Score* start = 0;
 
  
  // read and save the scores 
  while (fin.good()) 
  { 
    // read a score from the file 
   Score* aScore = new Score; 
   getline(fin, aScore->score);
    aScore->next = start;
    start = aScore;
  } // while 
  fin.close(); 
  
  int count = 0; // to count the number of nodes in the list
  int sum = 0; // to accumulate the total of all scores
  Score* p;
  int max = 0;
  int min = 999;
  
  for (p = start; p; p = p->next)
  {
    if (p->value > max) {
    max = p->value;
    }
    
    if (p-> value < min) {
    min = p->value;
    }
    sum += p->value;
    count++;
  }

  
    // output the result
  if (count > 0)
  {
    double average = double(sum) / double(count);
    cout << "The average of " << count << " scores is " << average << endl;
  }
  else
    cout << "No values were entered.\n";
  Score* k;
  
  for (k=start;k;k=k->next) {
  
  
    
  }
  
  
} // main 
