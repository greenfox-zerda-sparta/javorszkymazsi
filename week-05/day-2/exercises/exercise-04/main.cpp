#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Open a file called "fourth-exercise.txt"
  // Print all of its lines to the terminal window
  ifstream fourth_file("fourth-exercise.txt");
  if (fourth_file.is_open()) {
    string fruits;
    while (fourth_file >> fruits) {
      cout << fruits << endl;
    }
  } else {
    cerr << "You have no file open, yo" << endl;
  }
  return 0;
}
