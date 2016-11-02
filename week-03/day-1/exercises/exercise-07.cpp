#include <iostream>

using namespace std;

/**
 * Create a function called "union" that takes two pointers to int arrays, and their sizes.
 * It should also take an output pointer and size as reference.
 * The output pointer should point to a new array that only consists the union of the two arrays.
 * The size should be the size of the new array.
 */

int* u_nion(int* array1, int* array2, int size1, int size2) {
  int j = 0;
  int* new_array = new int[size1 + size2];
  for (int i = 0; i < size1 + size2; i++) {
    if (i >= size1) {
      new_array[i] = array2[j];
      j += 1;
    } else {
      new_array[i] = array1[i];
    }
  }
  return new_array;
}

int main() {
  int array1[] = {3, 456, 23, 52, 43, 5};
  int array2[] = {3, 22, 123, 3};
  int size1 = 6, size2 = 4;
  int* new_array = u_nion(array1, array2, size1, size2);
  for (int i = 0; i < size1 + size2; ++i) {
    cout << new_array[i] << " ";
  }
  delete[] new_array;
  new_array = nullptr;
  return 0;
}
