#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void random_vector_magic(vector<double>& v);

int main() {
  vector<double> v(30, 1.5);
  for (unsigned int i = 0; i < 20; ++i) {
    random_vector_magic(v);
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << i + 1 << " - " << v.at(i) << endl;
  }

  //create a vector of doubles with the size of 30, with every element equal of 1.5
  //create functions that takes this vector, pick the last element of it and adding its value to
  //an other item from the vector(this item place is random) and remove the last element at the end
  //run this function 20 times, then print every element of the vector

  return 0;
}

void random_vector_magic(vector<double>& v) {
  v[rand() % 10 + 1] += v.back();
  v.erase(v.begin() + v.size() - 1);
}
