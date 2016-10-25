#include <iostream>
#include <string>

using namespace std;

int main() {
  int x = 5;
  int h[x] = {3, 4, 5, 6, 7};
  int i, result = 0;
	// print the sum of all numbers in h
  for ( i = 0 ; i < x ; i++ ) {
	  result += h[i];
  }
  cout << "The awesome sum of these even more beautiful numbers is " << result << " . How amazing is that?" << endl;

  return 0;
}
