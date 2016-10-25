#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 5;
	int f[x] = {3, 4, 5, 6, 7};
	// Please double all the elements, than print all of them
	for ( int i = 0 ; i < x ; i++) {
				f[i] *= 2;
				cout << f[i] << endl;
	}
	return 0;
}
