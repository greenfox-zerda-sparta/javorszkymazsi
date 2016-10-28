#include <iostream>

using namespace std;

void diamond(int num, int times);

int main() {
  // Create a function that takes a number and prints a diamond like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *
  //
  // The diamond should have as many lines as the value in the argument
  int a = 1;
  diamond(a, 12);
  return 0;
}

void diamond(int num, int times) {
  int row = 1;
  for (int i = 0; i < times; i++) {
    if (times % 2 != 0) {
      if (row > times / 2 + 1) {
        for (int l = 0; l < row - times / 2 - 1; l++) {
          cout << " ";
        }
        for (int m = 0; m < (times - row) * 2 + 1; m++) {
          cout << num;
        }
      } else {
        for (int j = 0; j < times / 2 - row + 1; j++) {
          cout << " ";
        }
        for (int k = 0; k < row * 2 - 1; k++) {
          cout << num;
        }
      }
    } else {
      if (row >= times / 2 + 1) {
        for (int l = 0; l < row - times / 2; l++) {
          cout << " ";
        }
        for (int m = 0; m < (times - row) * 2 + 1; m++) {
          cout << num;
        }
      } else {
        for (int j = 0; j < times / 2 - row + 1; j++) {
          cout << " ";
        }
        for (int k = 0; k < row * 2 - 1; k++) {
          cout << num;
        }
      }
    }
    row += 1;
    cout << endl;
  }
}
