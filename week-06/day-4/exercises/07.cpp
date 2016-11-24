#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
  vector<int> v(20);
  for (unsigned int i = 0; i < v.size(); ++i) {
    v[i] = rand() % 11;
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << v.at(i) << " ";
  }
  cout << endl;

  // no idea why but one even number stays in the middle...... will figure it out later
  for (unsigned int i = 0; i < v.size(); ++i) {
    if (v.at(i) % 2 == 0) {
      v.erase(v.begin() + i);
    }
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << v.at(i) << " ";
  }


  //create a vector of integers with the size of 20
  //fill this vector with random numbers from 0 to 10
  //print the items of the vector
  //remove the even numbers, then print the items again

  return 0;
}
