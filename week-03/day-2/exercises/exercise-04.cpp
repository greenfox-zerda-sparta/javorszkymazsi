#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

int sum_of_gold(Pirate* array, int length) {
  int gold = 0;
  for (int i = 0; i < length; ++i) {
    gold += array[i].gold_count;
  }
  return gold;
}

float average_of_gold(Pirate* array, int length) {
  float sum = sum_of_gold(array, length);
  float ave = sum / length;
  return ave;
}

string richest_wooden_legged(Pirate* array, int length) {
  string richest;
  int j = 0;
  Pirate* array_sub = new Pirate[length];
  for (int i = 0; i < length; ++i) {
    if (array[i].has_wooden_leg == true) {
      array_sub[j] = array[i];
      j += 1;
    }
  }
  for (int k = 0; k < j - 1; ++k) {
    if (array_sub[k].gold_count > array_sub[k + 1].gold_count) {
      Pirate temp = array_sub[k];
      array_sub[k] = array_sub[k + 1];
      array_sub[k + 1] = temp;
    }
  }
  richest = array_sub[2].name;
  delete[] array_sub;
  array_sub = nullptr;
  return richest;
}

int main() {
  Pirate* pirates = new Pirate[6] {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };
  cout << "The pirates collected " <<sum_of_gold(pirates, 6) << " golds altogether." << endl;
  cout << "The loot\'s average calculated for 6 pirates is " << average_of_gold(pirates, 6) << "." << endl;
  cout << "Amongst the pirates, the richest wooden legged one is " << richest_wooden_legged(pirates, 6) << "." << endl;

  delete[] pirates;
  pirates = nullptr;
  return 0;
}
