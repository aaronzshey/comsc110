#include <iostream>
#include <fstream>
int main() {

std::ifstream offsetFile;
offsetFile.open("offset.txt");
int temp;
while (offsetFile.good()) {
offsetFile >> temp;
std::cout << temp << "\n";

}

}
