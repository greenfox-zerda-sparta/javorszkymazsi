#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it should print the average of the numbers.
 * It should delete any dynamically allocated resource before the program exits.
 */

float average(int* array, int count) {
  float sum = 0;
  for (int i = 0; i < count; ++i) {
    sum += array[i];
  }
  float avg = sum / count;
  return avg;
}

int main() {
  int count;
  cout << "Gimme a number." << endl;
  cin >> count;
  cout << "Now you will have enter " << count << " numbers." << endl;
  int* pointer = new int[count];
  for (int i = 0; i < count; ++i) {
    cout << "Please enter a number." << endl;
    cin >> pointer[i];
  }
  cout << "The average of ";
  for (int j = 0; j < count - 1; ++j) {
    cout << pointer[j] << ", ";
  }
  cout << pointer[count - 1] << " is " << average(pointer, count) << "." << endl;
  delete[] pointer;
  pointer = nullptr;

  return 0;
}
