#include <iostream>

using namespace std;

struct Vector {
  int size;
  double* array;
};

Vector* construct_vector(double* input, int size) {
  Vector* v = new Vector;
  v->size = size;
  double* arr = new double[size];
  for (int i = 0; i < size; i++) {
    arr[i] = input[i];
  }
  v->array = arr;
  return v;
}

double vector_at(Vector& v, unsigned int index) {
  if (v.size - 1 >= index) {
    return v.array[index];
  } else {
    return 0;
  }
}

void vector_insert(Vector& v, unsigned int index, double value) {
  v.size += 1;
  double* new_arr = new double[v.size];
  for (unsigned int i = 0; i < v.size; ++i) {
    if (i < index) {
      new_arr[i] = v.array[i];
    } else if (i == index){
      new_arr[i] = value;
    } else {
      new_arr[i] = v.array[i - 1];
    }

  }
  delete[] v.array;
  v.array = new_arr;
}

unsigned int vector_find(Vector& v, double value) {
  for (int i = 0; i < v.size; ++i)
    if (value == v.array[i]) {
      return i;
    }
  return 0;
}

void vector_remove(Vector& v, unsigned int index) {
  v.size -= 1;
  double* new_arr = new double[v.size];
  for (unsigned int i = 0; i < v.size; ++i) {
    if (i < index) {
      new_arr[i] = v.array[i];
    } else {
      new_arr[i] = v.array[i + 1];
    }
  }
  delete[] v.array;
  v.array = new_arr;
}

Vector* vector_concat(Vector& v1, Vector& v2) {
  double* concat_arr = new double[v1.size + v2.size];
  for (int i = 0; i < v1.size + v2.size; ++i) {
    if (i < v1.size) {
      concat_arr[i] = v1.array[i];
    } else {
      concat_arr[i] = v2.array[i - v1.size];
    }
  }
  Vector* concat_v = construct_vector(concat_arr, v1.size + v2.size);
  return concat_v;
}

int main() {
  double a[5] = {4, 9, 13, 4, 53};
  double b[7] = {14, 90, 43, 93, 1, 153, 73};
  Vector* v = construct_vector(a, 5);
  cout << "First vector is like this: ";
  for (int i = 0; i < 5; ++i) {
    cout << v->array[i] << " ";
  }
  cout << endl << "Fifth element of the vector is: " << vector_at(*v, 4) << endl;
  vector_insert(*v, 2, 167);
  cout << "I\'ve added the fantastic number 167 to this vector which looks like this: ";
  for (int i = 0; i < v->size; ++i) {
    cout << v->array[i] << " ";
  }
  cout << endl << "I wanted this function to find the number 53 and it did!" << vector_find(*v, 53) << endl;
  vector_remove(*v, 4);
  cout << "I\'ve removed the fifth element of the vector which is now looks like this: ";
  for (int i = 0; i < v->size; ++i) {
    cout << v->array[i] << " ";
  }
  cout << endl;
  Vector* v2 = construct_vector(b, 7);
  Vector* v_concat = vector_concat(*v, *v2);
  cout << "Now I wanted to put two vectors together. The vector after the concatenation is as follow: ";
  for (int i = 0; i < v->size + v2->size; ++i) {
    cout << v_concat->array[i] << " ";
  }
  cout << "." << endl << "Beautiful, isn\'t it? :)";

  delete[] v;
  delete[] v2;
  delete[] v_concat;
  v = nullptr;
  v2 = nullptr;
  v_concat = nullptr;

  return 0;
}
