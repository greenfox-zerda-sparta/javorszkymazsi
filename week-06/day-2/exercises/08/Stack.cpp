#include "Stack.h"

Stack::Stack() {
  this->size = 0;
  this->array = nullptr;
}

void Stack::push(int num) throw(int) {
  ++size;
  if (size > 5) {
    throw 1;
  }
  int* new_array = new int[size];
  for (unsigned int i = 0; i < size - 1; ++i) {
    new_array[i] = array[i];
  }
  new_array[size - 1] = num;
  delete[] this->array;
  this->array = new_array;
}

void Stack::pop() throw(int) {
  if (size == 0) {
    throw 2;
  }
  int* new_array = new int[size - 1];
  for (unsigned int i = 0; i < size - 1; ++i) {
    new_array[i] = array[i];
  }
  --size;
  delete[] this->array;
  this->array = new_array;
}

Stack::~Stack() {
  delete[] this->array;
}
