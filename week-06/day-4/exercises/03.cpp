#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
  vector<int> v;
  v.reserve(10);
  for (unsigned int i = 0; i < 10; ++i) {
    v.push_back(rand() % 10 + 1);
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << v[i] << endl;
  }

  //Create a vector of integers
  //reserve place for 10 element, then fill those place with random numbers between 0 and 10

  return 0;
}
