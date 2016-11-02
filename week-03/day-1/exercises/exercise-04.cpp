#include <iostream>

using namespace std;

int* range(int from, int to, int step) {
  int count = (to - from) / step + 1;
  int* ptr = new int[count];
  ptr[0] = from;
  for (int i = 1; i < count; ++i) {
    if (ptr[i] == to) {
      break;
    } else {
      ptr[i] = ptr[i - 1] + step;
    }
  }
  return ptr;
}

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's parameters.
 * It should take 3 parameters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 4, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  int from = 0, to = 15, step = 2;
  int* array = range(from, to, step);
  for (int i = 0; i < (to - from) / step + 1; i++) {
    cout << array[i] << " ";
  }
  delete[] array;
  array = nullptr;
  return 0;
}
