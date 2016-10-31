#include <iostream>
#include <string>

using namespace std;

void possible_combinations(int* dice1, int* dice2, int side);

int main() {
  cout << "Choose how many side does your dice have?" << endl;
  int side = 0;
  cin >> side;
  int dice1[side];
  int dice2[side];
  for (int i = 0; i < side; ++i) {
    dice1[i] = i + 1;
    dice2[i] = i + 1;
  }


  possible_combinations(dice1, dice2, side);

  // Write a program that calculates all the possible combinations with rolling two dices.
  // It should print each value how many times occures.
  // for example 3 occures 2 times because 1 + 2 and 2 + 1

  return 0;
}




void possible_combinations(int* dice1, int* dice2, int side) {
  int sum = 0;
  int result[side+side-1];
  int occurence[side+side-1];
  for (int i = 0; i < side+side-1; ++i) {
    result[i] = 2 + i;
    occurence[i] = 0;
  }
  for (int j = 0; j < side; ++j) {
    for (int k = 0; k < side; ++k) {
      sum = dice1[j] + dice2[k];
      for (int m = 0; m < side+side-1; ++m) {
        if (sum == result[m]) {
          occurence[m] +=1;
        }
      }
    }
  }

  for (int o = 0; o < side+side-1; ++o) {
    cout << "Occurence of the result " << result[o] << " is " << occurence[o] << endl;
  }
}
