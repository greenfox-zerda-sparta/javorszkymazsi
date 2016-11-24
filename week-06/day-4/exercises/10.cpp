#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
  int divs_of_2400 = 0;
  for (int i = 1; i <= 2400; ++i) {
    if (2400 % i == 0) {
      ++divs_of_2400;
    }
  }
  vector<unsigned int> v;
  v.reserve(divs_of_2400);
  for (unsigned int i = 0; i < divs_of_2400; ++i) {
    v.push_back(rand() % 2401);
  }
  sort(v.begin(), v.end());
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << i + 1 << " - " << v.at(i) << endl;
  }


  //find how much integer divisor 2400 has
  //create a vector of doubles, reserve place for the divisors of 2400
  //fill this places with random numbers from 0 to 2400
  //sort them in ascending order

  return 0;
}
