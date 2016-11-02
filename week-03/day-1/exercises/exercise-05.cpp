#include <iostream>

using namespace std;

/**
 * Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
 * then it should return a new pointer that points to the new resized array.
 * It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
 * It should delete the old array.
 */

int* resize(int* array, int size, int new_size) {
  int* new_ptr = new int[new_size];
  for (int i = 0; i < new_size; i++) {
    if (i >= size) {
      new_ptr[i] = 0;
    } else {
      new_ptr[i] = array[i];
    }
  }
  return new_ptr;
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 3, 5};
  int size = 7, new_size = 5;
  int* new_array = resize(array, size, new_size);
  for (int i = 0; i < new_size; ++i) {
    cout << new_array[i] << " ";
  }
  delete[] new_array;
  new_array = nullptr;
  return 0;
}
