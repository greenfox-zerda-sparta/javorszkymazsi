#include <iostream>
#include <string>

using namespace std;

void findEvens(int *array, int length);

int main() {
  int numbers[10] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};

  // Write a function that counts how many times is an even number is followed by
  // another even number in an array
  findEvens(numbers, 10);
  return 0;
}

void findEvens(int *array, int length) {
  int result = 0;
  for (int i = 0; i < length - 1; i++) {
    if (array[i] % 2 == 0 && array[i + 1] % 2 == 0) {
      result += 1;
    }
  }
  cout << result << endl;
}
