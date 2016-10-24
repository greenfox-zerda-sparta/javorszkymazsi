#include <iostream>
#include <string>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed

	if ( j1 > j2 * j2 ) {
		if ( j1 < j2 * j2 * j2 ) {
			cout << j1 << " is higher than " << j2 << " squared and smaller than " << j2 << " cubed.";
		}
	} else {
		cout << j1 << " is not higher than " << j2 << " squared and smaller than " << j2 << " cubed.";
	}


	return 0;
}
