#include <iostream>
#include <string>

using namespace std;

void possible_combinations(int* dice1, int* dice2);

int main() {
  int dice1[] = {1, 2, 3, 4, 5, 6};
  int dice2[] = {1, 2, 3, 4, 5, 6};

  possible_combinations(dice1, dice2);

  // Write a program that calculates all the possible combinations with rolling two dices.
  // It should print each value how many times occures.
  // for example 3 occures 2 times because 1 + 2 and 2 + 1

  return 0;
}




void possible_combinations(int* dice1, int* dice2) {
  int sum = 0;
  int result[11] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int occurence[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 6; ++j) {
      sum = dice1[i] + dice2[j];
      for (int k = 0; k < 11; ++k) {
        if (sum == result[k]) {
          occurence[k] +=1;
        }
      }
    }
  }
  for (int m = 0; m < 11; ++m) {
    cout << "Occurence of the result " << result[m] << " is " << occurence[m] << endl;
  }

}
