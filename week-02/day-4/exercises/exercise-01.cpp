#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void square(int *array, int length);

int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[7] = {1, 2, 3, 4, 5, 6, 7};
  square(array, 7);
  for (int i = 0; i < 7; i++) {
    cout << array[i] << endl;
  }
  return 0;
}

void square(int *array, int length) {
  for (int i = 0; i < length; i++) {
    array[i] = pow(array[i], 2);
  }
}
