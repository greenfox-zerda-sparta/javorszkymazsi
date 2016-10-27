#include <iostream>

using namespace std;

void reverse(int *array, int length);

int main() {
  int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

  // Write a function that takes an array and its length than reverses the array
  reverse(array, 8);
  for (int i = 0; i < 8; i++) {
    cout << array[i] << endl;
  }
  return 0;
}

void reverse(int *array, int length) {
  for (int i = 0; i < length / 2; i++) {
    int temp = array[i];
    array[i] = array[length - 1 - i];
    array[length - 1 - i] = temp;
  }
}
