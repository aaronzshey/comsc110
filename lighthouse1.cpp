#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

int main() {
  cout.setf(ios::fixed);
  cout << setprecision(0);
  int lighthouseHeightinFeet;
  cout << "Type in the height of your lighthouse in feet and press enter. ";
  cin >> lighthouseHeightinFeet;
  cin.ignore(256, '\n');
  double distInMiles = sqrt(double(0.8 * lighthouseHeightinFeet));
  cout << "a " << lighthouseHeightinFeet
       << " foot tall lighthouse can be seen from " << distInMiles
       << " feet away.";
}
