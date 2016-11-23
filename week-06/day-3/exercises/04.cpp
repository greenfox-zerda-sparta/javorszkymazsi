#include <iostream>
#include <string>

using namespace std;

template<class T, class B>
void sort_descending_order(T* array, B array_size) {
  for (unsigned int i = 0; i < array_size - 1; ++i) {
    if (array[i] < array[i + 1]) {
      T temp = array[i];
      array[i] = array[i + 1];
      array[i + 1] = temp;
    }
    for (unsigned int j = 0; j < array_size - 1; j++) {
      if (array[j] < array[j + 1]) {
        T temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main() {
  int array_size = 5;
  float array[array_size];
  for (unsigned int i = 0; i < array_size; ++i) {
    array[i] = i * i / .33;
  }
  sort_descending_order(array, array_size);
  for (unsigned int i = 0; i < array_size; ++i) {
    cout << array[i] << endl;
  }
  // create a function template that takes an array and sort it in a descending order

  return 0;
}
