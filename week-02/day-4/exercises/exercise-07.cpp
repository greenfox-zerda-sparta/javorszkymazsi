#include <iostream>

using namespace std;

void triangle(int num, int times);

int main() {
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument
  int a = 1;
  triangle(a, 10);
  return 0;
}

void triangle(int num, int times) {
  int row = 1;
  for (int i = 0; i < times; i++) {
    for (int j = 0; j < row; j++) {
      cout << num;
    }
    row += 1;
    cout << endl;
  }
}
