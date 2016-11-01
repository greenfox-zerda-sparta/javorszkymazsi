#include <iostream>
#include <string>

using namespace std;

int index(int* array, int length, int num);

int main() {
  int numbers[5] = {7, 5, 8, -1, 2};
  // Write a function that takes ana array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)
  int number;
  cout << "What number would you like to check if it's in the array?" << endl;
  cin >> number;
  cout << index(numbers, 5, number) << endl;
  return 0;
}

int index(int* array, int length, int num) {
  int i = 0;
  for (i = 0; i < length; i++) {
    if (array[i] == num) {
      return i;
    }
  }
  if (array[i] != num) {
    return -1;
  }
}
