#include <iostream>

using namespace std;

void draw_characters(int count, int c);

void diamond(char main_character, int times);


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
  diamond('*', 12);
  return 0;
}

void draw_characters(int count, char c) {
  for (int i = 0; i < count; ++i) {
    cout << c;
  }
}

void diamond(char main_character, int times) {
  for (int row = 1; row <= times; ++row) {
    if (times % 2 != 0) {
      if (row > times / 2 + 1) {
        draw_characters(row - times / 2 - 1, ' ');
        draw_characters((times - row) * 2 + 1, main_character);
      } else {
        draw_characters(times / 2 - row + 1, ' ');
        draw_characters(row * 2 - 1, main_character);
      }
    } else {
      if (row >= times / 2 + 1) {
        draw_characters(row - times / 2, ' ');
        draw_characters((times - row) * 2 + 1, main_character);
      } else {
        draw_characters(times / 2 - row + 1, ' ');
        draw_characters(row * 2 - 1, main_character);
      }
    }
    cout << endl;
  }
}
