#include <iostream>
using namespace std;

//Create a function to tell You whether a certain number is part of a 10 long array of integers.
//Create an other function to give You the first index of a given integer in an array of integers.
//Create an other functions to give You the index of the last occurrence of the given integer in
//the array.If the array does not include the given integer this function should return -1.
//Do not duplicate functionality, use the functions You've created earlier instead of duplicating.
//Create 5 arrays, each 10 long filled with integers.
//Find the first and last occurrances of the integer: 14. And Print them out. If the array does not
//include the integr You should say so in words.
//The names of the functions should be "includes", "firstIndexOf", "lastIndexOf"
//Decide what should the function return. Void? Bool? Int? Float? Char?

bool includes(int* array, int num, int size) {
  for (int i = 0; i < size; i++) {
    if (array[i] == num) {
      return true;
    }
  }
  return false;
}

int firstIndexOf(int* array, int num, int size) {
  if (includes(array, num, size)) {
    for (int i = 0; i < size; i++) {
      if (array[i] == num) {
        return i;
      }
    }
  }
  return -1;
}

int lastIndexOf(int* array, int num, int size) {
  if (includes(array, num, size)) {
    for (int i = size; i > 0; i--) {
      if (array[i] == num) {
        return i;
      }
    }
  }
  return -1;
}

int main(int argc, char** argv){
  int array1[10] = {1, 2, 2, 4, 5, 6, 7, 8, 9, 10};
  int array2[10] = {1, 14, 2, 4, 5, 6, 14, 8, 9, 10};
  int array3[10] = {1, 2, 2, 6, 5, 6, 7, 8, 9, 10};
  int array4[10] = {1, 2, 2, 4, 5, 14, 9, 8, 9, 10};
  int array5[10] = {1, 2, 2, 4, 1, 6, 7, 8, 9, 10};

  if (includes(array1, 14, 10) == false) {
    cout << "First array does not contain the number 14." << endl;
  } else {
    cout << "First array contains the number 14." << endl;
    cout << firstIndexOf(array1, 14, 10) << " is the index of the first occurence of number 14 in this array." << endl;
    cout << lastIndexOf(array1, 14, 10) << " is the index of the last occurence of number 14 in this array." << endl;
  }

  if (includes(array2, 14, 10) == false) {
      cout << "Second array does not contain the number 14." << endl;
    } else {
      cout << "Second array contains the number 14." << endl;
      cout << firstIndexOf(array2, 14, 10) << " is the index of the first occurence of number 14 in this array." << endl;
      cout << lastIndexOf(array2, 14, 10) << " is the index of the last occurence of number 14 in this array." << endl;
    }

  if (includes(array3, 14, 10) == false) {
      cout << "Third array does not contain the number 14." << endl;
    } else {
      cout << "Third array contains the number 14." << endl;
      cout << firstIndexOf(array3, 14, 10) << " is the index of the first occurence of number 14 in this array." << endl;
      cout << lastIndexOf(array3, 14, 10) << " is the index of the last occurence of number 14 in this array." << endl;
    }

  if (includes(array4, 14, 10) == false) {
      cout << "Forth array does not contain the number 14." << endl;
    } else {
      cout << "Forth array contains the number 14." << endl;
      cout << firstIndexOf(array4, 14, 10) << " is the index of the first occurence of number 14 in this array." << endl;
      cout << lastIndexOf(array4, 14, 10) << " is the index of the last occurence of number 14 in this array." << endl;
    }

  if (includes(array5, 14, 10) == false) {
      cout << "Fifth array does not contain the number 14." << endl;
    } else {
      cout << "Fifth array contains the number 14." << endl;
      cout << firstIndexOf(array5, 14, 10) << " is the index of the first occurence of number 14 in this array." << endl;
      cout << lastIndexOf(array5, 14, 10) << " is the index of the last occurence of number 14 in this array." << endl;
    }
  return 0;
}
