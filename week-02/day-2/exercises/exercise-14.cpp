#include <iostream>
#include <string>

using namespace std;

int min(int numbers[], int length) {
  int smallest = numbers[0];
  for (int i = 1; i < length; i++) {
    if (numbers[i] < smallest) {
      smallest = numbers[i];
    }
  }
  return smallest;
}

int main() {
  int numbers[]= {7, 5, 8, -1, 2};
  cout << min(numbers, 5) << endl ;
  return 0;

  // Write a function that takes an array and its length returns the minimal element
  // in the array (your own min function)
}
