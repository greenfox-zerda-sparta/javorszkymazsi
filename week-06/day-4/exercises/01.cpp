#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v(5);
  for (unsigned int i = 0; i < v.size(); ++i) {
    v[i] = i;
  }
  cout << v.at(3) << endl;

  //create an integer vector with the size of 5 and print the 3rd element of it

  return 0;
}
