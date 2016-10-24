#include <iostream>
#include <string>

using namespace std;

int main() {
	long long i = 1357988018575474;
	// tell if it has 11 as a divisor

	if ( i%11 == 0 ) {
		cout << i << " has 11 as its divisor." << endl;
	} else {
		cout << i << " has not 11 as its divisor." << endl;
	}

	return 0;
}
