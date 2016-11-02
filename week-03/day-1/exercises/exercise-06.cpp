#include <iostream>

using namespace std;

/**
 * Create a function called "fliter_greater_than_5" that takes a pointer to an int array, and it's size.
 * It should return a pointer to a new array that only consists the numbers that are bigger than 5.
 */

int* filter_greater_than_5(int* array, int size) {
  int* new_ptr = new int[size];
  int j = 0;
  for (int i = 0; i < size; ++i) {
    if (array[i] > 5) {
      new_ptr[j] = array[i];
      j += 1;
    }
  }
  return new_ptr;
}

int main() {
  int array[] = {1, 4, 5, 7, 8, 2, 98, 35};
  int size = 8;
  int* new_array = filter_greater_than_5(array, size);
  for (int i = 0; i < 4; ++i) {
    cout << new_array[i] << " ";
  }
  delete[] new_array;
  new_array = nullptr;
  return 0;
}
