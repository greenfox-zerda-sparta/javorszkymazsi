#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v(5, 0);
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << v.at(i) << endl;
  }
	//create an integer vector with the size of 5 and print all elements of it

  return 0;
}
