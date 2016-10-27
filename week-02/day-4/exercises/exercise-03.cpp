#include <iostream>

using namespace std;

void swap(int *pointer1, int *pointer2);

int main() {
  int first = 12;
  int second = 54;
  int *f = &first;
  int *s = &second;
  // Write a function that takes two int pointers and swaps the values where the pointers point
  swap(*f, *s);
  cout << "The value of variable first is now " << *f << "." << endl;
  cout << "The value of variable second is now " << *s << "." << endl;
  return 0;
}

void swap(int *pointer1, int *pointer2) {
  int temp = *pointer1;
  *pointer1 = *pointer2;
  *pointer2 = temp;
}
