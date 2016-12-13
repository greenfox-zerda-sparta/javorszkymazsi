#include <iostream>
#include <vector>

using namespace std;

// create a function that prints a vector using iterators
void print(vector<int>& vec) {
  for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    cout << *it << endl;
  }
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  print(v);
  return 0;
}
