#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "third-exercise.txt"
  // Write numbers from 0 to 20 into the file each in a new line
  ofstream third_ex("third-exercise.txt");
  if (third_ex.is_open()) {
    for (int i = 0; i < 21; ++i) {
      third_ex << i << endl;
    }
  }

  return 0;
}
