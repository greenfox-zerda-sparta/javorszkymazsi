#include <iostream>
#include <vector>

using namespace std;

void increase_an_element_by_one(vector<vector<int>>& v, int n, int index) {
  v[n][index] += 1;
}

int main() {
  vector<vector<int>> v(5);
  for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < 5; ++j) {
      v[i].push_back(0);
    }
  }
  increase_an_element_by_one(v, 3, 4);
  cout << v[3][4];
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase a specific element of an inner vector by 1

  return 0;
}
