#include <iostream>
using namespace std;

int evens(int* array, int length) {
  int result = 0;
  for (int i = 0; i < length; i++) {
    if (array[i] % 2 == 0) {
      result += 1;
    }
  }
  return result;
}

int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5};
  // create a function that takes an array and it's length as an agrument
  // and returns a number that states how many even numbers are in the array
  cout << evens(numbers, 8) << endl;

  return 0;
}
