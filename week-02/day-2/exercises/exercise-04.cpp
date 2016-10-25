#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 6;
	int d[x] = {1, 2, 3, 8, 5, 6};
	// change 8 to 4, than print all the elements of the array
	d[3] = 4;
	for ( int i = 0 ; i < x ; i++) {
		cout << d[i] << endl;
	}

	return 0;
}
