#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
  vector<int> v(10);
  for (unsigned int i = 0; i < v.size(); ++i) {
    v[i] = rand() % 100 + 1;
  }
  vector<double> v2;
  v2.reserve(10);
  v2.push_back(2.2);

  if (v.size() > v2.size()) {
    cout << "The first vector's size is bigger than the second's. Such a wonderful life!" << endl << "The reason why the first is bigger is because if we reserve, it's just memory allocation and doesn\'t effect the size of the vector.";
  } else {
    cout << "The second vector's size is bigger, yaay! We are happy no matter what the result is." << endl;
  }
  //create a vector of integers with the size of 10, fill them with random numbers
  //create a vector of doubles and reserve place for 10 items
  //push and item to the end of the vector with the double places
  //print which vectors size is higher (and why?)

  return 0;
}
