#include <iostream>
#include <vector>

using namespace std;

void increase_by_one(vector<vector<int>>& v, int n) {
  for (unsigned int i = 0; i < v[n].size(); ++i) {
    v[n][i] += 1;
  }
}

int main() {
  vector<vector<int>> super_vector(5);
  for (unsigned int i = 0; i < super_vector.size(); ++i) {
    for (unsigned int j = 0; j < 5; ++j) {
      super_vector[i].push_back(0);
    }
  }
  increase_by_one(super_vector, 3);
  for (unsigned int i = 0; i < super_vector[3].size(); ++i) {
    cout << super_vector[3].at(i) << endl;
  }

  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)

  return 0;
}
