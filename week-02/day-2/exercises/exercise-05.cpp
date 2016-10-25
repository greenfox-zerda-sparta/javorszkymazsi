#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 5;
	int e[x] = {1, 2, 3, 4, 5};
	// increment the 3rd element, than print all the elements of the array
	e[2] += 4;
	for ( int i = 0 ; i < x ; i++) {
			cout << e[i] << endl;
		}

	return 0;
}
