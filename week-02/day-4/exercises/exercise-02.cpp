#include <iostream>

using namespace std;

void fill(int *array, int length);

int main() {
  int array[10];

  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length
  fill(array, 10);
  for (int i = 0; i < 11; i++) {
    cout << array[i] << endl;
  }
  return 0;
}

void fill(int *array, int length) {
  for (int i = 0; i < length + 1; i++) {
    array[i] = i;
  }
}
