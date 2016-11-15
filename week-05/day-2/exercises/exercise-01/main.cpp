#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "first-exercise.txt"
  // Write your name in it as a single line

  ofstream the_file("thefile.txt");
  the_file << "Mazsi" << endl;
  the_file.close();

  return 0;
}
