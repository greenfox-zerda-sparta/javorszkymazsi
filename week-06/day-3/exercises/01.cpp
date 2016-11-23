#include <iostream>
#include <string>

using namespace std;

template<class T>
T print_first_element(T* arr) {
  return arr[0];
}

int main() {
  long array[5] = {1, 2, 3, 5, 9};
  cout << print_first_element(array) << endl;

  // create a function template the takes in a fix long array and prints the 1st element of it

  return 0;
}
