#include <iostream>
#include <string>

using namespace std;

int main() {
	// print all the elements of the array
	int x = 6;
	int d[x] = {6, 5, 4, 3, 2, 1};
	for ( int i = 0 ; i < x ; i++) {
		cout << d[i] << endl;
	}

  return 0;
}
