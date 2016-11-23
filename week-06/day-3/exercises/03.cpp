#include <iostream>
#include <string>

using namespace std;

template<class T, class B>
void print_array(T* array, B array_size) {
  for (unsigned int i = 0; i < array_size; ++i) {
    cout << array[i] << endl;
  }
}

int main() {
  int array_size = 5;
  float array[array_size];
  for (unsigned int i = 0; i < array_size; ++i) {
    array[i] = i * i / .33;
  }
  print_array(array, array_size);
  // create a function template which takes in an array, and the size of it
  // print all the elements of the array

  return 0;
}
