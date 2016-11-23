#include <iostream>
#include <string>

using namespace std;

template<class T, class B>
T add_first_to_third(T* array, B array_size) {
  return array[0] + array[2];
}

int main() {
  int array_size = 5;
  int array[array_size];
  for (unsigned int i = 0; i < array_size; ++i) {
    array[i] = i + i;
  }
  cout << add_first_to_third(array, array_size) << endl;
  // create a function template that takes fix long array
  // and add the 1st element of it to the third

  return 0;
}
