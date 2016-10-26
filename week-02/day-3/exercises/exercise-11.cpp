#include <iostream>
using namespace std;
#include <algorithm>

void sortAscending(int *array, int length);
// Implement this function to sort the array in an ascending order.

void sortDescending(int *array, int length);
// Implement this function to sort the array in a descending order.

void printArray(int *array, int length) {
  cout << "{";
  for(int i=0; i<length; i++){
    cout << array[i];
    if(i<length-1) {
      cout << ", ";
    }
  }
  cout << "}" << endl;
}


int main(int argc, char** argv){
  int example[13] = {34, 56, 26, 84, 29, 3875, 43, 96, 4759, 979, 92, 56, 1987};
  sortAscending(example, 13);
  printArray(example, 13);
  sortDescending(example, 13);
  printArray(example, 13);

  return 0;
}

void sortAscending(int *array, int length) {
  for (int i = 0; i < length; i++) {
    if (array[i] > array[i + 1]) {
      int temp = array[i];
      array[i] = array[i + 1];
      array[i + 1] = temp;
    }
    for (int j = 0; j < length; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

void sortDescending(int *array, int length) {
  for (int i = 0; i < length - 1; i++) {
      if (array[i] < array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
      for (int j = 0; j < length - 1; j++) {
        if (array[j] < array[j + 1]) {
          int temp = array[j];
          array[j] = array[j + 1];
          array[j + 1] = temp;
      }
    }
  }
}
