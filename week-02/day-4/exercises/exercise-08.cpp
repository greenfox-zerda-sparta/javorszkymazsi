#include <iostream>

using namespace std;

void christmasTree(int num, int times);

int main() {
  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument
  int a = 1;
  christmasTree(a, 8);
  return 0;
}

void christmasTree(int num, int times) {
  int row = 1;
  for (int i = 0; i < times; i++) {
    for (int j = 0; j < times - row; j++) {
      cout << " ";
    }
    for (int k = 0; k < row * 2 - 1; k++) {
      cout << num;
    }
    row += 1;
    cout << endl;
  }
}
