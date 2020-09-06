#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

  ofstream outFile("test.txt");
  ifstream inFile("test2.txt");
  string letters;

  while (inFile >> letters)
    cout << letters << endl;

  return 0;
}
