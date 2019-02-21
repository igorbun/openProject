// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Upisi nesto drugo u fajl.\n";
  myfile.close();
  return 0;
}
