#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "second-exercise.txt"
  // Read the content of the file and print it to the terminal window
  ifstream my_file("second-exercise.txt");
  if (my_file.is_open()) {
    string fruit;
    while (my_file >> fruit) {
      cout << fruit << endl;
    }
  } else {
    cerr << "You have no file to read, szori" << endl;
  }
  return 0;
}
