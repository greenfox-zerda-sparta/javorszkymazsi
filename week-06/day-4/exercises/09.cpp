#include <iostream>
#include <vector>

using namespace std;

// If I understood the task correctly, it's an unnecessary function because it does the exact same as push_back()
void add_inner_vector_to_outer_vector(vector<int>& v, vector<vector<int>>& v2);

int main() {
  vector<vector<int>> outer_v(5);
  for (unsigned int i = 0; i < outer_v.size(); ++i) {
    for (unsigned int j = 0; j < outer_v.size(); ++i) {
      outer_v[i][j] = 0;
    }
  }

  //create a vector of vector of integers, yeah a vector that holds vectors of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector at the beginning
  //create a function that will add a new vector of integers to the end of our outer vector

  return 0;
}

void add_inner_vector_to_outer_vector(vector<int>& v, vector<vector<int>>& v2) {
  v2.push_back(v);
}
