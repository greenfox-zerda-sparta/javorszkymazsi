#include <iostream>
using namespace std;

void column(int array[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << array[j][i];
    }
    cout << endl;
  }
}

void row(int array[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << array[i][j];
    }
    cout << endl;
  }
}

void one_line(int array[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << array[i][j];
    }
    cout << " | ";
  }
}

void one_column(int array[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << array[i][j] << endl;
    }
  }
}

int main(){
  int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
  //This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
  //a.) a row
  //b.) a column
  //c.) all in one line separated by the character '|'
  //d.) all in one column

  row(m);
  cout << endl;
  column(m);
  cout << endl;
  one_line(m);
  cout << endl << endl;
  one_column(m);

  return 0;
}
