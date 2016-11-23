#include <iostream>
#include <string>

//The char part's not working so I commented it. I don't think a function template is good to be specialized, I'll do it later with class template

using namespace std;

template<class T, class B>
double add_elements(T* array, B length) {
  T sum = 0;
  for (unsigned int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return sum;
}

/*
template<>
double add_elements<char>(T* array) {
  int sum = 0;
  for (unsigned int i = 0; i < length; ++i) {
    sum += array[i] - 64;
  }
  return sum;
}*/

int main() {
  double array[7] = {22580.4, 5.5, 8.478, 7.452, 198.412, 78.4, 45.6};
  cout << add_elements(array, 7);
  // Create a function template that takes an array, and its length and return the sum of his elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
  return 0;
}
