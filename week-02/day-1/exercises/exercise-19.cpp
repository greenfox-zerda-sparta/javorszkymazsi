#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "cheese";
	// Tell if the x has even or odd number of
	// characters with a True for even and
	// false False output otherwise
	int n=x.length();
	if ( n%2 == 0 ) {
		cout << "True!";
	} else {
		cout << "False!";
	}

	return 0;
}
